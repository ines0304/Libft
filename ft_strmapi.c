/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:44:21 by insantia          #+#    #+#             */
/*   Updated: 2026/11/06 12:14:30 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	str = malloc(len_s * sizeof(char) + 1)
	if(str == NULL)
		return (NULL);
	i = 0;
	while(s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*f(unsigned int i, char)
{
	char			*str;
	unsigned int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (j == i)
			return (str[i]);
		j++;
	}
	return (0);
}

int	main(void)
{
	
}