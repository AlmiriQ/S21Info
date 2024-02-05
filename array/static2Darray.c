#include <stdio.h>

// ачёвсм ысле почему int*, а не int**, это же матрица...
void f(int* matrix, int width, int height);
// ну да, вот, нормальный код
void g(int matrix[5][5]);

int main() {
  int m[5][5];
  m[0][0] = 1; // первый элемент матрицы
  m[4][4] = -1; // последний элемент матрицы
  // а вот так писать типа нельзя
  // int** p = m;
  // так вот статические матрицы для Си - это один указатель
  f((int*)m, 5, 5);
  // ну либо так
  g(m); // но тогда размеры надо указать в самой функции
}

// ещё можно записать int matrix[], но int matrix[][] - нельзя; int matrix[] = int* matrix, для Си это одно и то же, а вот [][] записать не получится :(
void f(int* matrix, int width, int height) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++)
      printf("%d ", (matrix + width * i)[j]);
    printf("\n");
  }
}

void g(int matrix[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
}
