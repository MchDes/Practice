#include <stdio.h>

void str_cpy(const char* str_src, char* str_dst)
{
    size_t curr_pos = 0;
    while(str_src[curr_pos] != '\0')
    {
        str_dst[curr_pos] = str_src[curr_pos];
        ++curr_pos;
    }
}

main()
{
    char source_str[200] = "blablabla";
    char destination_str[200] ="";
    str_cpy(source_str, destination_str);
    printf("%s", destination_str);
}