int main() {
  // цикл for - что-то вроде сокращённой версии цикла while; while проще читать, но for более сжат
  for (int i = 0; i < 10; i++) { // это сам цикл
    // а эта часть кода в фигурных скобках называется телом цикла
    // это простейший пример цикла; цикл выполнится 10 раз со значениями переменной i от 0 до 9
    // переменная i будет доступна только внутри этого цикла
  }
  int j;
  for (j = 10; j > 0; --j) {
    // здесь уже переменная j находится во всей функции main и будет доступна для использования далее
    // цикл будет выполняться 10 раз со значениями от 10 до 1
    // чтобы прибавлять по 1 к числу-счётчику в цикле мы обычно пишем i++ либо ++i, для вычитания i-- или --i
    // но можно прибавлять или вычитать и большие значения, например, i += 2 или i -= 3
    // i += 2 - то же самое, что и i = i + 2; i -= 3 - то же самое, что и i = i - 3
  }
  // здесь переменная j всё ещё доступна и равна 0 после выполнения цикла
  // мы можем использовать её в других циклах
  for (; j < 10; j += 2) { // здесь мы убрали одну из частей цикла for: инициализацию
    // здесь мы прибавляем по 2, так что цикл выполнится 5 раз
  }
  // теперь j = 10
  // нужно быть аккуратным с таким кодом, где используется float внутри for
  for (float a = 0.0; a != 3.0; a += 0.1) {
    // a никогда не будет равно 3.0, хотя мы этого ожидаем
    // проблема кроется в том, как компьютеры складывают числа, особенно дробные
    // https://0.30000000000000004.com/
  }
  for (int k = 0, l = 0; (k < 10) && (l != 10); k++, l++) {
    // в одном цикле можно работать сразу с несколькими переменными
  }
  for (;;) {} // таким образом можно создать бесконечный цикл, чтобы прекратить его выполнение необходимо в теле цикла прописать команду break
  return 0;
}