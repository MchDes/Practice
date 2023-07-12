#include <stdio.h>

void strncpy(const char* str_src, char* str_dst, int count)
{
    size_t curr_pos;
    for(curr_pos = 0; curr_pos < count; ++curr_pos)
    {
        if (str_src[curr_pos] == str_src[count])
        {
             str_dst[curr_pos] = str_src[count];
        }
    }
    str_dst[curr_pos];
}

main()
{
    char str1[100] = "99990";
    char str2[100] = "";
    strncpy(str1, str2, 3);
    printf("%s", str2);
}