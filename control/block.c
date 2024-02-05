int main() { // это уже блок кода
    int a; // переменная a существует только внутри функции main, т. е. её блока
    { // блоки кода можно создавать где угодно внутри функций
      int b; // а вот переменная b существует уже только здесь, внутри этого блока кода
    }
    // здесь переменной b не существует
    if (a == 0) { // для условий мы тоже создаём отдельные блоки кода
      int c; // переменная c существует только здесь
      {
        // так как этот блок вложен внутрь того, где создана переменная c, то мы можем использовать её здесь
        c = 10;
      }
    } else {
      // здесь переменной c уже нет, мы не можем её использовать
    }
    // здесь переменной c тоже уже нет
}