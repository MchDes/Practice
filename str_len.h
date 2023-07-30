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
