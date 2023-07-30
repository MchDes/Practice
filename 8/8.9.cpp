#include <stdio.h>
#define size 100

void swap(int* value_1, int* value_2)
{
  int empty = 0;
  empty = *value_1;
  *value_1 = *value_2;
  *value_2 = empty;
}

int main()
{
  int count = 0;
  scanf("%d", &count);
  int max_pos = 0;
  int min_pos = 0;
  int arr[size];
  for(int start = 0; start < count; ++start)
  {
    scanf("%d ", &arr[start]);
  }
  for(int i = 0; i < count; ++i)
  {
    if(arr[max_pos] < arr[i])
    {
      max_pos = i;
    }

    if(arr[min_pos] > arr[i])
    {
      min_pos = i;
    }
  }
  for(int i = 0; i < count; ++i)
  {
    if(arr[min_pos] > arr[i])
    {
      min_pos = i;
    }
  }
  swap(&arr[max_pos], &arr[min_pos]);
  for(int i = 0; i < count; ++i)
  {
    printf("%d ", arr[i]);
  }     
}
    
