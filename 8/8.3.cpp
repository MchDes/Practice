#include <stdio.h>

#define size 100
int main()
{
   int count = 0;
   scanf("%d", &count);
   int arr[size];
   for (int start = 0; start < count; ++start)
   {
        scanf("%d", &arr[start]);
   }
   for (int i = 0; i < count; ++i)
   {
        if(arr[i] % 2 == 0)
        {
          printf("%d ", arr[i]);
        }
   }
   for (int i = 0; i < count; ++i)
   {
        if(arr[i] % 2 == 1)
        {
          printf("%d ", arr[i]);
        }
   }
}