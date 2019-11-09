/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:11:28 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/26 10:44:23 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;
	t_list	*elem;

	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	iter = (*lst);
	while (iter)
	{
		elem = iter;
		iter = iter->next;
		del(elem->content);
		free(elem);
	}
	*lst = NULL;
}
