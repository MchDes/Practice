#include <stdio.h>

int str_eql(const char* str_1, const char* str_2)
{
  size_t curr_pos = 0;
  while (str_1[curr_pos] !='\0' && str_2[curr_pos] !='\0')
  {
    if (str_1[curr_pos] == str_2[curr_pos])
    {
        ++curr_pos;
    }
    else
    {
      return 0;
    }
  }
  if(str_1[curr_pos] == '\0' && str_2[curr_pos] == '\0')
  {
    return 1;
  }
  return 0;
}

int main()
{
   int a = str_eql("trrtt", "trrt");
   printf("%d", a);
}