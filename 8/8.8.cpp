#include <stdio.h>

#define size 100
int main()
{
    int count = 0;
    scanf("%d", &count);
    int arr[size];
    for(int start = 0; start < count; ++start)
    {
        scanf("%d ", &arr[start]);
    }
   // for(int i = 0; i < count / 2; ++i)
   // {
     //  arr[i] = arr[i + count / 2];
   //    printf("%d ", arr[i]);
    //}
    for(int i = 0; i < count / 2; ++i)
    {
       printf("%d ", arr[i + count / 2]);
    }
    
}