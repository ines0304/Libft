/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-08 20:50:48 by insantia          #+#    #+#             */
/*   Updated: 2026-11-08 20:50:48 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*next_node;

	if(lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next_node = *lst -> next;
		del(*lst ->content);
		free(lst);
		*lst = next_node;
	}
	*lst = NULL;
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*start;
	t_list	*midle;
	t_list	*midle1;
	t_list	*midle2;
	t_list	*end;

	start = ft_lstnew(ft_strdup("Hello"));
	midle = ft_lstnew(ft_strdup("How"));
	midle1 = ft_lstnew(ft_strdup("are"));
	midle2 = ft_lstnew(ft_strdup("you"));
	end = ft_lstnew(ft_strdup("bye"));
	ft_lstadd_back(&start, midle);
	ft_lstadd_back(&midle, midle1);
	ft_lstadd_back(&midle1, midle2);
	ft_lstadd_back(&midle2, end);
	printf("%s ", (char *)start ->content);
	printf("%s ", (char *)start ->next->content);
	printf("%s", (char *)start ->next->next->content);
	printf("%s", (char *)start ->next->next->next->content);
	printf("%s\n", (char *)start ->next->next->next->next->content);
	midle->next = end->next;
	ft_lstdelone(midle, del);
	printf("%s ", (char *)start ->content);
	printf("%s ", (char *)start ->next->content);
	//printf("%s", (char *)start ->next->next->content);
	return (0);
}