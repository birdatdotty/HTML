#include "PHPMethod.h"

#include <string>
#include <iostream>
#include <sstream>

static void write_escaped_str(std::ostream& stream, const std::string& str)
{
    auto pos = 0;
    for (;;)
    {
        auto endPos = str.find('"', pos);
        if (endPos == str.npos)
            endPos = str.size();

        stream.write(&str[pos], endPos - pos);

        if (endPos == str.size())
            return;

        stream.write("\\\"", 2);
        pos = endPos + 1;
    }
}
#include <QDebug>
static void write_escaped_str2(std::ostream& stream, const std::string& str)
{
  auto pos = 0;
  const char *posChar = new char;
  const char char1 = '\\';
  const char char2 = '"';
  for (;;)
  {
      size_t endPos1 = str.find('"', pos);
      size_t endPos2 = str.find('\\', pos);
      size_t endPos = (endPos1 < endPos2) ? endPos1 : endPos2;
//      posChar = (str.at(endPos) == char1) ?
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


PHPMethod::PHPMethod()
{}

QString PHPMethod::out()
{
  QString fun = obj->out() + "\\n";
  QStringList funList = fun.split("\n");
//  fun = "str_repeat(\"  \",$tab).\"" +
//        funList.join("\\n\"\n    .str_repeat(\"  \",$tab).\"");
  fun = "$tab.\"" +
        funList.join("\\n\"\n        .$tab.\"");

  return "  function " + name + " ($tab, " + args +
          ")\n  {\n    return " +
          fun
      + "\";\n  }\n";
}

QString PHPMethod::minOut()
{
  QString fun = obj->minOut();

  return "  function " + name + "($tab, " + args +
          ")\n  {\n    return \"" +
          fun
      + "\";\n  }\n";
}

QString PHPMethod::method()
{
  QString fun = obj->out() + "\\n";
  QStringList funList = fun.split("\n");

  fun = "$tab.\"" +
        funList.join("\\n\"\n        .$tab.\"");

  return "  function "+name+" ($tab, " + args +
          "  )\n{\n  return " +
          fun
      + "\";\n};\n";

}

QString PHPMethod::minMethod()
{
    QString fun = obj->minOut();
    return "  function "+name+" (" + args +
           "  )\n{\n  return " +
           fun +
           "\";\n};\n";
}

QString PHPMethod::getName()
{ return name; }
void PHPMethod::setName(QString newName)
{ name = newName; }

QString PHPMethod::getArgs()
{ return args; }
void PHPMethod::setArgs(QString newArgs)
{ args = newArgs; }

HTMLBlock *PHPMethod::getObj()
{return obj;}
void PHPMethod::setObj(HTMLBlock *newobj)
{obj = newobj;}
