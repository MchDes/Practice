#include <stdio.h>

void swap(int* value_1, int* value_2)
{
  int empty = 0;
  empty = *value_1;
  *value_1 = *value_2;
  *value_2 = empty;
}

int main()
{
  int first = 0;
  int second = 0;
  scanf("%d %d", &first, &second);
  swap(&first, &second);
  printf("%d %d ", first, second);
}