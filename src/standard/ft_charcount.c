/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:10:56 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 17:52:47 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_charcount(const char *str, char c)
{
	int				index;
	unsigned int	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			count++;
	}
	return (count);
}
