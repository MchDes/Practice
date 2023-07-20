#include <stdio.h>

#define size 100
int main()
{
    int count = 0;
    int sum = 0;  
    int average_value = 0;
    int i = 0;
    scanf("%d", &count);
    int arr[size];
    for(int start = 0; start < count; ++start)
    {
        scanf("%d ", &arr[start]);
    }
    for(i = 0; i < count; ++i)
    {
        sum += arr[i];
    }
    average_value = (double)sum / count;
    for(i = 0; i < count; ++i)
    {
        if(arr[i] > average_value)
        {
            printf("%d ", arr[i]);
        }
    }
    for(i = 0; i < count; ++i)
    {
        if(arr[i] <= average_value)
        {
            printf("%d ", arr[i]);
        }
    }
}