#include "PHPFun.h"

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


PHPFun::PHPFun()
{}

QString PHPFun::out()
{
  QString fun = obj->out() + "\\n";
  QStringList funList = fun.split("\n");

  fun = "$tab.\"" +
        funList.join("\\n\"\n        .$tab.\"");

  return "$"+name+" = function ($tab, " + args +
          ")\n{\n  return " +
          fun
      + "\";\n};\n";
}

QString PHPFun::minOut()
{
  QString fun = obj->minOut();

  return "$"+name+" = function (" + args +
          ")\n{\n  return " +
          fun
      + "\";\n};\n";

}

QString PHPFun::method()
{
  QString fun = obj->out() + "\\n";
  QStringList funList = fun.split("\n");

  fun = "$tab.\"" +
        funList.join("\\n\"\n        .$tab.\"");

  return "function "+name+" ($tab, " + args +
          ")\n{\n  return " +
          fun
      + "\";\n};\n";

}

QString PHPFun::minMethod()
{
  QString fun = obj->out();

  return "function "+name+" ($tab, " + args +
          ")\n{\n  return " +
          fun
      + "\";\n};\n";
}

QString PHPFun::getName()
{ return name; }
void PHPFun::setName(QString newName)
{ name = newName; }

QString PHPFun::getArgs()
{ return args; }
void PHPFun::setArgs(QString newArgs)
{ args = newArgs; }

HTMLBlock *PHPFun::getObj()
{return obj;}
void PHPFun::setObj(HTMLBlock *newobj)
{obj = newobj;}
