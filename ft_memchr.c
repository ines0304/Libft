
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t  i;

    ptr = (unsigned char *)s;

    while (ptr[i] != '\0' && i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
            return (&ptr[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    unsigned char   ptr[] = "Hello";

    printf("%s", (char *)ft_memchr(ptr, 'o', 3));
    return (0);
}