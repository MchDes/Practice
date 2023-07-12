#include <stdio.h>

int str_len(const char* src_str)
{
    size_t curr_pos = 0;
    while(src_str[curr_pos] != '\0')
    {
        ++curr_pos;
    }
    return curr_pos;
}

int main()
{
    int lenght = str_len("214");
    printf("There're %d characters in the word.", lenght);
}