/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:09:48 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/21 16:53:11 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long lnbr;

	lnbr = n;
	if (lnbr >= -2147483648 && lnbr <= 2147483648)
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
