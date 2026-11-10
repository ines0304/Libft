/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 04:37:03 by insantia          #+#    #+#             */
/*   Updated: 2026/11/10 09:51:25 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst ->content);
		lst = lst ->next;
	}
}
/*
void	to_uppercase(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*nova;
	t_list	*nv;

	head = NULL;
	nova = ft_lstnew(ft_strdup("hello"));
	nv = ft_lstnew(ft_strdup("goodbye"));
	ft_lstadd_front(&head, nova);
	ft_lstadd_back(&head, nv);

	printf("Antes:\n");
	printf("%s\n", (char *)nova->content);
	printf("%s\n", (char *)nv->content);

	ft_lstiter(head, to_uppercase);

	printf("Depois:\n");
	printf("%s\n", (char *)nova->content);
	printf("%s\n", (char *)nv->content);

	ft_lstclear(&head, free);
	return (0);
}
*/