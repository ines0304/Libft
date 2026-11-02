
#include <stdio.h>

__SIZE_TYPE__ ft_strlcat(char *dst, const char *src, __SIZE_TYPE__ size)
{
    __SIZE_TYPE__ dst_len;
    __SIZE_TYPE__ src_len;
    __SIZE_TYPE__ i;
    

    dst_len = 0;
    src_len = 0;
    i = 0;

    while (dst[dst_len] != '\0')
    {
        dst_len++;
    }
    while (src[src_len] != '\0')
    {
        src_len++;
    }
    if (size <= dst_len)
    {
        return (size + src_len);
    }
    if (src[i] != '\0' || dst_len + i < (size - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len] = '\0';
    return (dst_len + src_len);
}

/*
int main(void)
{
    char            dst[13] = "Hello";
    const char      src[] = "Goodbye";
    __SIZE_TYPE__   size;

    printf("%lu", ft_strlcat(dst, src, 3));
}
*/