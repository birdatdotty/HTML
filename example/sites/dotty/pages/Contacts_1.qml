import HTML 1.0
import SQL 1.0

import "../divs"
import "../bootstrap"


SQLRow {
  page: "contacts"
  type: "desc-f"
  block: Block {
      H2 { text: 'ООО "Волар"'}
      P  { text: '141196, Московская обл. г.Фрязино, Проспект Мира 29' }
      P  { text: 'E-mail: <b> <a href="mailto:general@volar-snab.ru?subject=feedback">general@volar-snab.ru</a></b>'}
      P  { text: 'Телефон: <b><span class="nowrap">+7 (499) 345 07 00</span>, <span class="nowrap">+7 (495) 205 68 28</span></b>'}
      P  { text: 'Телефон моб.: <b>+7 (926) 342 89 73</b>'}
      P  { text: 'сайт: <b>www.volar-snab.ru</b>'}
  }
}
