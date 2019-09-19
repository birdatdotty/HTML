import PHP 1.0
import HTML 1.0

import "bootstrap/Nav"

Funcs{
    PHPFun { name: "ss"
            args:"$arg12,$arg13"
            obj: A{ href: "\".$arg12.\""
                    text: "\".$arg13.\""}}
    PHPFun { name: "ss2";
            args:"$arg12,$arg13";
            obj: LgCenter{
                A{ href: "\".$arg12.\""
                   text: "\".$arg13.\""}}}

    PHPFun { name: "EditPills";
             args: "$arg1,$arg2"
             obj: EditPills {
                 solt: '".$arg1."'
                 block: Block{text: '".$arg2."'}
             }}

//    PHPFun { name: "EditPills";
//             args: "$arg1,$arg2"
//             obj: EditPills {
//                 solt: '".$arg1."'
//                 block: Block{text: '".$arg2."'}
//             }}

}
