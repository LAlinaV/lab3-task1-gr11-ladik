/* main.c */

//
// Created by Alina Ladik
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interface.h"
#include "server.c"

int main(int argc, char *argv[]) {
if (argc < 2) {
    printf("Необходимо указать размерность массива в аргументах командной строки.\n");
    return 0;
}
  int n = atoi(argv[1]);
  int arr[n];
  srand(time(NULL));
  printf("Исходный массив: ");
  for (int i = 0; i < n; i++) {
      arr[i] = rand() % 26;
    printf("%d ", arr[i]);
      
  }
  printf("Числа, являющиеся степенями пяти: ");
  for (int i = 0; i < n; i++) {
      if (findDegree(arr[i]) ) {
          printf("%d ", arr[i]);
      }
  }
  return 0;
}
