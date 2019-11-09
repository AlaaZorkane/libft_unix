/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 05:04:30 by azorkane          #+#    #+#             */
/*   Updated: 2019/11/02 22:40:30 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_hex(int value, int maj)
{
	if (value <= 9)
		return (char)(value + '0');
	value -= 10;
	return (char)((maj ? 'A' : 'a') + value);
}

int			ft_puthex_fd(unsigned int n, int maj, int fd)
{
	char	*hex_str;
	int		index;

	if (!n)
	{
		ft_putstr_fd("0", fd);
		return (1);
	}
	hex_str = (char *)malloc(sizeof(hex_str) * ft_count_base(n, 16) + 1);
	index = 0;
	while (n)
	{
		hex_str[index] = get_hex(n % 16, maj);
		n /= 16;
		index++;
	}
	hex_str[index] = '\0';
	ft_strrev(hex_str);
	ft_putstr_fd(hex_str, fd);
	index = ft_strlen(hex_str);
	free(hex_str);
	return (index);
}
