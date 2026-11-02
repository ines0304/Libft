/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:06:12 by insantia          #+#    #+#             */
/*   Updated: 2026/11/02 19:54:05 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)malloc(nmemb*size);
	if (ptr == NULL)
		return (1);
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr[i] = '0';
		i++;
	}
	
}