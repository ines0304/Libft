
#include <stdio.h>

int ft_tolower(int c)
{
    unsigned char   letter;

    letter = (unsigned char)c;

    if (letter >= 'A' && letter <= 'Z')
    {
        letter = letter + 32;
    }
    return (letter);
}
/*
int main(void)
{
    printf("%d", ft_tolower('A'));
    return(0);
}
*/