import HTML 1.0
import SQL 1.0

import "../divs"
import "../bootstrap"


SQLRow {
  page: "cc"
  type: "desc-f"
  block: Block {

      H2 { text: 'Система сборки' }
      P  { text: 'Если вы уже пишите программы, то наверника знаете как непросто создать/скомпилировать большой проект.' }
      P  { text: 'Есть довольно много систем для сборки проектов такие как autotools, cmake, qmake..., но зачастую с ними не просто справится. Самый простой, на мой взгляд - это qmake, но и в нем есть моменты, которые создают много проблем:' }
      Ul {
          Li { text: 'по умолчанию программа устанавливается в жесткое задоное место (в qt creator - "/opt/App") и нет любимого мной "--prefix ~/myApp"' }
          Li { text: 'программа плохо поддерживает подпроекты (для сложной структуры предпочтительней cmake)' }
      }
      P  { text: 'Для решения проблем со своим проектом я изобретал велосипед (весьма удачно получилось):' }
      Ul {
        Li { text: 'В начале я написал программу которая просто как-то работает (работает как надо, но мне хотелось использовать код этой программы и далее).' }
        Li { text: 'Переместил программу в новую папку и начал потрошить на библиотеки' }
        Li { text: 'разбил программу на модули, разместил их по папкам и создал два файла: "default.pri" и "myLib.pro"' }
        Li { text: 'В myLib.pro я написал 2 строчки: "TEMPLATE = subdirs" и "SUBDIRS += lib1 lib2 ...", а в default.pri я вынес общую часть конфига (куда устанавливать, какие библиотеки использовать ...), которые я подключаю в конфигах своих библиотек.' }
        Li { text: 'ну а в папках я создал конфиг с 2 строчками: "TARGET = lib1" и "include(../default.pri)"' }
      }
  }
}
