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