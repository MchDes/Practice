#include <stdio.h>

#define size 100
int main()
{
    int count = 0;
    float sum = 0;
    scanf("%d", &count);
    double arr[size];
    for(int start = 0; start < count; ++start)
    {
        scanf("%lf ", &arr[start]);
    }
    for(int i = 0; i < count; ++i)
    {
        sum += arr[i];
    }
    printf("%.2f", sum / count);
}