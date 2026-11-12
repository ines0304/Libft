/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:52:39 by insantia          #+#    #+#             */
/*   Updated: 2026/11/12 11:08:49 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (len_needle == j)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char  str1[] = "hello";
    const char  str2[] = "jjjjjjjjhello";

    printf("%s", ft_strnstr(str1, str2, 3));

    return (0);
}
*/