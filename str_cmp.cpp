#include <stdio.h>

int str_cmp(const char* str_1, const char* str_2)
{
    size_t count_1 = 0, curr_pos_1 = 0;
    size_t count_2 = 0, curr_pos_2 = 0;

    while(str_1[curr_pos_1] != '\0')
    {
        ++curr_pos_1;
        ++count_1;
    }
    while(str_2[curr_pos_2] != '\0')
    {
        ++curr_pos_2;
        ++count_2;
    }
    if(count_1 > count_2)
    {
        return 1;
    }
    else if (count_1 == count_2)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char str1[10] = "12344";
    char str2[10] = "12345";
    int n = str_cmp(str1, str2);
    printf("%d", n);
}