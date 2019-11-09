/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:04:47 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/28 20:53:53 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strrev(char *str)
{
	int		index;
	int		jndex;
	char	tmp;

	index = ft_strlen(str) - 1;
	jndex = 0;
	while (jndex < index)
	{
		tmp = str[index];
		str[index] = str[jndex];
		str[jndex] = tmp;
		index--;
		jndex++;
	}
	return (1);
}
