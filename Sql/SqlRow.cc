#include "SqlRow.h"
#include <sstream>

static void write_escaped_str(std::ostream& stream, const std::string& str)
{
    size_t pos = 0;
    for (;;)
    {
        size_t endPos = str.find('"', pos);
        if (endPos == str.npos)
            endPos = str.size();

        stream.write(&str[pos], endPos - pos);

        if (endPos == str.size())
            return;

        stream.write("\\\"", 2);
        pos = endPos + 1;
    }
}

static void write_escaped_str2(std::ostream& stream, const std::string& str)
{
  size_t pos = 0;
  const char *posChar = new char;
  for (;;)
  {
      size_t endPos1 = str.find('"', pos);
      size_t endPos2 = str.find('\\', pos);
      size_t endPos = (endPos1 < endPos2) ? endPos1 : endPos2;

      posChar = str.c_str() + endPos;
      if (endPos == str.npos)
          endPos = str.size();

      stream.write(&str[pos], endPos - pos);

      if (endPos == str.size())
          return;

      stream.write("\\", 1);
      stream.write(posChar, 1);
      pos = endPos + 1;
  }
}

static QString escapeStr(QString qText)
{
  std::string stdText = qText.toStdString();
  std::ostringstream stream;

  write_escaped_str2(stream, stdText);
  return QString::fromStdString(stream.str());
}

SQLRow::SQLRow()
{

}

QString SQLRow::out()
{
//  VALUES (\"desc-f\",\"<div class='desc-f'>\")
  QString out = block->out();
  return "(\"" + page + "\", \"" + type +"\", \""+ escapeStr(out) +"\")";
}

QString SQLRow::minOut()
{
  QString out = block->minOut();

  return "(\"" + page + "\", \"" + type +"\", \""+ escapeStr(out) +"\")";
}
