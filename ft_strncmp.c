
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0') && i < n)
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    const char  s1[] = "Hello";
    const char  s2[] = "Hellohh";

    printf("%d", ft_strncmp(s1, s2, 7));
    return (0);
}