int main() {

  int datas[] = {9, 6, 8, 7, 3, 5, 0};
  int data_len = sizeof(datas) / sizeof(int);

  void **temp_datas = (void **)malloc(sizeof(void *) * data_len);

  for (int i = 0; i < data_len; i++) {
    temp_datas[i] = &datas[i];
  }

  print_ints(data_len, temp_datas);

  bubble_sort(data_len, temp_datas, compare_int, print_ints);

  free(temp_datas);

  return 0;
}
