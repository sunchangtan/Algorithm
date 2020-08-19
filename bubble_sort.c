#include <stdlib.h>

typedef _Bool (*compare_function)(void *, void *); 

void bubble_sort(int data_len, void* datas[], compare_function compare) {
  for(int i = 0; i < data_len - 1; ++i) {
    for(int j = 0; j < data_len - i - 1; ++j) {
      if(compare(datas[j], datas[j + 1])) {
        void *temp = datas[j];
        datas[j] = datas[j + 1];
        datas[j + 1] = temp;
      }
    } 
  }
}

_Bool compare_int(void *a, void *b) {
  int x = *(int *)a;
  int y = *(int *)b;
  return x > y;
}

int main() {

  int datas[] = {9, 6, 8, 7, 3, 5, 0};

  bubble_sort(sizeof(datas), (void **)datas, compare_int);

  return 0;
}
