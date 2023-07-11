#include <stdio.h>

int str_len(char* src_str)
{
    int count = 0;
    size_t curr_pos = 0;
    while(src_str[curr_pos] != '\0')
    {
        ++curr_pos;
        ++count;
    }
    return count;
}

int main()
{
    int lenght = str_len("kaokdsa");
    printf("There're %d characters in the word.", lenght);
}