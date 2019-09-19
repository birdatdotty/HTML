import SQL 1.0
import HTML 1.0

/*
Sql - base type
SQLTable - classic TABLE
SQLRow - classic inser to TABLE ...
*/
import "Menu"
import "bootstrap"

import "pages"


Sql {
    file: "../volar.sql"
    login: "root"
    password: "P@sSw(RD!"
    db: "VOLAR"

    insertSQL: "/home/gluck/.local/bin/insertsql.sh"

    SQLTable {
       create: SqlCreateTable {
           SqlCreateTableColumn
           {
               name: "page"
               type: "char(48)"
               defaultValue: "NULL"
           }
           SqlCreateTableColumn
           {
               name: "type"
               type: "char(48)"
               defaultValue: "'desc-f'"
           }
           SqlCreateTableColumn
           {
               name: "data"
               type: "text"
               defaultValue: "NULL"
           }
       }

       table: "posts"

       Valve_1{}
       Index_1{}
       Index_2{}
       Sp_1{}
       Sp_2{}
       Sp_3{}
       Sp_4{}
       Sp_5{}
       Ge_1{}
       Cd_1{}
       Cd_2{}
       OSB_1{}
       OSB_2{}
       OSB_3{}
       OSB_4{}
       SG_1{}
       SG_2{}
       DOORHAN_1{}
       Contacts_1{}
       Contacts_2{}
       Contacts_3{}
       Contacts_4{}
    }
}
