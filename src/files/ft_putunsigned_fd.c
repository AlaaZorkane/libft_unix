/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 03:57:30 by azorkane          #+#    #+#             */
/*   Updated: 2019/11/02 04:17:24 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putunsigned_fd(unsigned int n, int fd)
{
	long lnbr;

	lnbr = n;
	if (lnbr >= 0 && lnbr <= 4294967295)
	{
		if (lnbr < 0)
		{
			lnbr = -lnbr;
			ft_putchar_fd('-', fd);
		}
		if (lnbr > 9)
		{
			ft_putnbr_fd(lnbr / 10, fd);
			ft_putchar_fd(lnbr % 10 + '0', fd);
		}
		else
		{
			ft_putchar_fd(lnbr + '0', fd);
		}
	}
}
