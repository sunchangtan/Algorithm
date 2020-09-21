#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef _Bool (*compare_function)(void *, void *); 
typedef void (*print_datas)(int, void *[]);

void bubble_sort(int data_len, void* datas[], compare_function compare, print_datas print) {
  for(int i = 0; i < data_len - 1; ++i) {
    for(int j = 0; j < data_len - i - 1; ++j) {
      if(compare(datas[j], datas[j + 1])) {
        void *temp = datas[j];
        datas[j] = datas[j + 1];
        datas[j + 1] = temp;
      }
      print(data_len, datas);
    } 
  }
}

bool compare_int(void *a, void *b) {
  int x = *(int *)a;
  int y = *(int *)b;
  return x > y;
}

void print_ints(int data_len, void *datas[]) {
  for (int i = 0; i < data_len; i++) {
    printf("%d ", *(int *)datas[i]);
  }
  printf("\n");
}

