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
    int arr[size];
    for(int start = 0; start < count; ++start)
    {
        scanf("%d ", &arr[start]);
    }
   
    for(int i = 0; i < count / 2 ; ++i)
    {
      swap(&arr[i], &arr[(count / 2 + i)]);

    }
    for(int i = 0; i < count ; ++i)
    {
      printf("%d ", arr[i]);
    }
    
}