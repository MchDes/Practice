#ifndef MEM_CPY
#define MEM_CPY
void mem_cpy(const char* str_src, char* str_dst, int count)
{
    size_t curr_pos = 0;
    while(curr_pos < count)
    {
        str_dst[curr_pos] = str_src[curr_pos];
        ++curr_pos;
    }
}
#endif

#ifndef STR_CAT
#define STR_CAT
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
#endif

#ifndef STR_CPY
#define STR_CPY
void str_cpy(const char* str_src, char* str_dst)
{
    size_t curr_pos = 0;
    while(str_src[curr_pos] != '\0')
    {
        str_dst[curr_pos] = str_src[curr_pos];
        ++curr_pos;
    }
}
#endif

#ifndef STR_EQL
#define STR_EQL
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
#endif

#ifndef STR_LEN
#define STR_LEN
int str_len(const char* src_str)
{
    size_t curr_pos = 0;
    while(src_str[curr_pos] != '\0')
    {
        ++curr_pos;
    }
    return curr_pos;
}
#endif