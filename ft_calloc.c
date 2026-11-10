/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:06:12 by insantia          #+#    #+#             */
/*   Updated: 2026/11/10 12:00:10 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int main()
{
	int	num = 10;
	int *ptr = calloc(num, sizeof(int));

	for(int i = 0; i < num; i++) 
	{
		ptr[i] = i + 1;
		printf("%d ", ptr[i]);
	}

	free(ptr);
	ptr = NULL;

	return 0;
}
*/