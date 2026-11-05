#include "libft.h"

static int	count_letters(char const *s, char c, int word)
{
	static int	count;
	static int	i;
	static int	start;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			start = i;
			while(s[i] != 0 && s[i] != c)
				i++;
			if (count == word)
				return (i - start + 1);
		}
		else 
			i++;
	}
	return (0);
}

static char	*copy(char	*dest, char *src, int i)
{
	//se nao der espaço na pricipal, posso logo fazer o malloc aqui
	static int	j;

	j = 0;
	while (src[j] != '\0' && j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
int	main(void)
{
	char	dest[8];
	char	src[] = "  Hello  kkk  , ss"

	printf("%d", count_letters(s, ' ', 1));
	return(0);
}