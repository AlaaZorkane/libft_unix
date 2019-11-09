/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 10:51:02 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 00:21:58 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	int				index;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	index = 0;
	while (n && ptr_s1[index] && (ptr_s1[index] == ptr_s2[index]))
	{
		n--;
		index++;
	}
	return (n == 0 ? 0 : ptr_s1[index] - ptr_s2[index]);
}
