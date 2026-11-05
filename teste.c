#include "libft.h"

static char	*copy(char	*dest, char *src, int i)
{
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
	char	dest [5];
	char	src[] = "Hello";
	printf("%s", copy(dest, src, 3));
	return(0);
}