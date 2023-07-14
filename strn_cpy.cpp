#include <stdio.h>

void strn_cpy(const char* src_str, char* dst_str, size_t count)
{
   size_t curr_pos = 0;
   while (src_str[curr_pos] != '\0')
   {
        dst_str[curr_pos] = src_str[curr_pos];
        ++curr_pos;
        
   }
   if (curr_pos > count)
   {
     dst_str[count] = src_str[curr_pos];
   }
   else
   {
     dst_str[curr_pos] = src_str[curr_pos];
   }

}

int main()
{
    char str1[20] = "123456";
    char str2[10] = "      ";
    strn_cpy(str1, str2, 5);
    printf("%s", str2);
}