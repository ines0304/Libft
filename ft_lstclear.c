/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 20:50:48 by insantia          #+#    #+#             */
/*   Updated: 2026/11/09 18:48:11 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*next_prov;
	
	if (!lst || !del)
		return (NULL);
	while (*lst != NULL)
	{
		next_prov = (*lst) ->next;
		*del((*lst) ->content);
		free(*lst)
		*lst = next_prov;
	}
}

void	*del(void *content)
{
	free(content);
}

int	main(void)
{
	
}