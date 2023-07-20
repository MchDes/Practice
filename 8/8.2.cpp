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
   for (int i = 0; i < count / 2; ++i)
   {
        if(arr[i] != arr[count - i - 1])
        {
            printf("NO");
            return 0;
        }
   }
   printf("YES");
}