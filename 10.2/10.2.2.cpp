#include <stdio.h>

int main()
{
   const int size = 100;
   int count;
   scanf("%d", &count);
   int start;
   int arr[size];
   for (start = 0; start < count; ++start)
   {
        scanf("%d ", &arr[start]);
   }
   for (int start = 0; start < count; ++start)
   {
        if(arr[start] == arr[count])
        {
            ++start;
            --count;
            if(start == count)
            {
                printf("YES");
                break;
            }
        }
        else
        {
            printf("NO");
            break;
        }
   }
}