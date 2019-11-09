/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:27:00 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/21 16:53:11 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * size * count);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, size * count);
	return (dest);
}
