#include "Js.h"

Js::Js()
{

}

QString Js::getName()
{ return name; }
void Js::setName(QString newName)
{ name = newName; }

QString Js::getBody()
{ return body; }
void Js::setBody(QString newBody)
{ body = newBody; }

QString Js::getArgs()
{ return args; }
void Js::setArgs(QString newArgs)
{ args = newArgs; }

HTMLBlock *Js::getFromBlock()
{return block;}

void Js::setFromBlock(HTMLBlock *newBlock)
{
  block = newBlock;
  setArgs(block->getJs()->getArgs());
  setBody(block->getJs()->getBody());
  setName(block->getJs()->getName());
}

QString Js::out()
{return "function " + name + "(" + args + ") {\n"
      + body +
      "\n}\n";}
QString Js::minOut()
{return "function " + name + "(" + args + ") {" + body + "};";}
