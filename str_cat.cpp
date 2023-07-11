#include <stdio.h>
#include <stdlib.h>

void str_cat(char* dst, const char* src) {
  size_t tmp_end = 0;
  while (dst[tmp_end] != '\0') 
  {
    ++tmp_end;
  }
  
  for (size_t curr_src_pos = 0; src[curr_src_pos] != '\0'; ++curr_src_pos) {
    dst[tmp_end] = src[curr_src_pos];
    ++tmp_end;
  }
  
  dst[tmp_end] = '\0';
}
main()
{
    char first[1024]="first str";
    char second[1024]="second str";
    str_cat(first, second);
    printf("%s", first);
}