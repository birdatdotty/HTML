import HTML 1.0

Block {
    property string table: "test_table"
    property var block: Block{}
//    property var block: A { href: 'ООО "Волар"' }

    text: 'INSERT INTO posts (page, type, data) VALUES ("' + table + '", "sss" ,"' + site.escapeStr(block.out()) + '");'
}
