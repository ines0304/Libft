/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:25:36 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:25:36 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst ->content);
	free(lst);
}

/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*start;
	t_list	*midle;
	t_list	*end;

	start = ft_lstnew(ft_strdup("Hello"));
	midle = ft_lstnew(ft_strdup("How are you"));
	end = ft_lstnew(ft_strdup("bye"));
	ft_lstadd_back(&start, midle);
	ft_lstadd_back(&midle, end);
	printf("%s ", (char *)start ->content);
	printf("%s ", (char *)start ->next->content);
	printf("%s\n", (char *)start ->next->next->content);
	start->next = midle->next;
	ft_lstdelone(midle, del);
	printf("%s ", (char *)start ->content);
	printf("%s ", (char *)start ->next->content);
	//printf("%s", (char *)start ->next->next->content);
	return (0);
}
*/