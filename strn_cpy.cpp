#include <stdio.h>

void strn_cpy(const char* src_str, char* dst_str, size_t count)
{
   size_t curr_pos = 0;
   while (curr_pos < count)
   {
        dst_str[curr_pos] = src_str[curr_pos];
        ++curr_pos;
   }
   if (curr_pos > count)
   {
        curr_pos = count;
        dst_str[count] = src_str[count];
   }
   else
   {
        dst_str[curr_pos - 1] = src_str[curr_pos - 1];
   }

}

int main()
{
    char str1[20] = "asdoasod";
    char str2[10] = "       ";
    strn_cpy(str1, str2, 8);
    printf("%s", str2);
}