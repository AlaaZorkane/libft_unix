/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:26:43 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 00:21:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		index;
	char		*ptr_s;

	index = 0;
	ptr_s = s;
	if (!n)
		return ;
	while (index < n)
	{
		ptr_s[index] = 0;
		index++;
	}
}
