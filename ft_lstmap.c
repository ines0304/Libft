/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:25:56 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 16:26:02 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst ->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst ->next;
	}
	return (new_list);
}

void	*to_uppercase(void *content)
{
	char	*str;
	int		i;

	str = ft_strdup((char *)content);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*nova;
	t_list	*nv;
	t_list	*result;
	t_list	*temp;

	head = NULL;
	nova = ft_lstnew(ft_strdup("hello"));
	nv = ft_lstnew(ft_strdup("goodbye"));
	ft_lstadd_back(&head, nova);
	ft_lstadd_back(&head, nv);

	result = ft_lstmap(head, to_uppercase, free);

	printf("Lista original:\n");
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	printf("Nova lista:\n");
	temp = result;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&head, free);
	ft_lstclear(&result, free);
	return (0);
}
*/