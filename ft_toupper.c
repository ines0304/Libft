
#include <stdio.h>

int ft_toupper(int c)
{
    unsigned char   letter;

    letter = (unsigned char)c;

    if (letter >= 'a' && letter <= 'z')
    {
        letter = letter - 32;
    }
    return (letter);
}

/*
int main (void)
{
    printf("%d", ft_toupper('+'));
    return (0);
}
*/