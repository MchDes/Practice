#include <stdio.h>

#define size 100
int main()
{
    int count = 0;
    scanf("%d", &count);
    int max_value = 0;
    int min_value = 99999;
    int arr[size];
    for(int start = 0; start < count; ++start)
    {
        scanf("%d ", &arr[start]);
    }
    for(int i = 0; i < count; ++i)
    {
      if(max_value < arr[i])
      {
        max_value = arr[i];
        printf("%d ", arr[i]);
      }
    }
    for(int i = 0; i < count; ++i)
    { 
      if(min_value > arr[i])
        {
          min_value = arr[i];
          printf("%d ", arr[i]);
        }
    }
}
    
