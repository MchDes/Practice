#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int* p_a = &a;
    int* p_b = &b;
    printf("%d", *p_a + *p_b);
}