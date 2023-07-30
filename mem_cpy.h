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