#ifndef STR_CAT
#define STR_CAT
#include "str_len.h"
void str_cat(char* dst, const char* src) {
  str_len(dst);  
  for (size_t curr_src_pos = 0; src[curr_src_pos] != '\0'; ++curr_src_pos) {
    dst[tmp_end] = src[curr_src_pos];
    ++tmp_end;
  }
  
  dst[tmp_end] = '\0';
}
#endif