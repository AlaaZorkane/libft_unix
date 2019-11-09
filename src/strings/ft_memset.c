/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:29:37 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 00:21:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*ptr_b;
	size_t		index;

	ptr_b = b;
	index = 0;
	while (index < len)
	{
		ptr_b[index] = c;
		index++;
	}
	return (b);
}
