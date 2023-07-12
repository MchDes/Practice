#include <stdio.h>

//void strncpy(const char* str_src, char* str_dst, int count)

//{
//    size_t curr_pos;
//    for(curr_pos = 0; curr_pos < count; ++curr_pos)
//    {
//        str_dst[curr_pos] = str_src[curr_pos];
//    }
//}

void strncpy(const char* str_src, char* str_dst, int count)
{
    size_t curr_pos = 0;
    while(curr_pos < count)
    {
        str_dst[curr_pos] = str_src[curr_pos];
        ++curr_pos;
    }
}


main()
{
    char str1[100] = "99990";
    char str2[100] = "";
    strncpy(str1, str2, 5);
    printf("%s", str2);
}