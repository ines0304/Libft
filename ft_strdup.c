/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:28:30 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:28:30 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s);
	str = malloc(s_len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, (s_len + 1));
	return (str);
}
/*
int	main(void)
{
 	const char	*s = "Hello my name is ines";
 	char	*str;

 	str = ft_strdup(s);
 	printf("%s", str);
 	free(str);
 	return (0);
 }
*/