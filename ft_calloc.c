/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:06:12 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:15:03 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

int main()
{
	int	num = 10;
	int *ptr = calloc(num, 0);
	char* ptr2 = ft_calloc(num, 0);
	int	i;

	for (int i = 0; i < num; i++)
	{
		printf("%d", ptr2[i]);
	}
	i = 0;
	printf("\n");
	while (i < num) 
	{
		ptr[i] = i + 1;
		printf("%d", ptr[i]);
		i++;
	}
	free(ptr);

	return 0;
}