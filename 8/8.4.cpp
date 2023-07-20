#include <stdio.h>
#include <stdbool.h>

#define size 100
int main()
{
   bool has_numbers = false;
   int count = 0;
   scanf("%d", &count);
   int arr[size];
   for (int start = 0; start < count; ++start)
   {
        scanf("%d", &arr[start]);
   }
   for (int i = 0; i < count; ++i)
   {    
        if(arr[count - 1] > arr[i])
        {
          has_numbers = true;
          printf("%d ", arr[i]);
        }
   }
   if(has_numbers == false)
   {
        printf("0");
   }
}