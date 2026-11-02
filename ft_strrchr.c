
#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    unsigned char   letter;
    int i;
    int len_s;

    letter = (unsigned char)c;
    len_s = 0;
    while ((unsigned char)s[len_s] != '\0')
    {
        len_s++;
    }
    while (len_s > 0)
    {
        if ((unsigned char)s[len_s] == letter)
        {
            return ((char *)&s[len_s]);
        }
        len_s--;
    }
    if (letter == '\0')
        return ((char *)&s[len_s]);
    return (NULL);
}

int main(void)
{
    const char  s[] = "hello";

    printf("%s\n", ft_strrchr(s, 'p'));
    printf("%s", strrchr(s, 'l'));
    return (0);
}