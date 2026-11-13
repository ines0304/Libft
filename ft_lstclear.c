/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:25:30 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:25:30 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*next_prov;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next_prov = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_prov;
	}
}

/*
void	del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *head = ft_lstnew(ft_strdup("iiii\n"));
    t_list *nova = ft_lstnew(ft_strdup("hello\n"));
    t_list *nv = ft_lstnew(ft_strdup("goodbye"));

    ft_lstadd_front(&head, nova);
    ft_lstadd_back(&head, nv);

    printf("Antes: %d nós\n", ft_lstsize(nova));

    ft_lstclear(&nova, del);

    printf("Depois: %d nós\n", ft_lstsize(nova));

    if (nova == NULL)
        printf("A lista foi limpa!\n");

    return (0);
}
*/