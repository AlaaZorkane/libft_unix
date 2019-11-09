/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:44:56 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 17:52:31 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_isupper(str[index]))
			str[index] += 32;
		index++;
	}
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122 &&
			(ft_isalnum(str[index + 1]) || str[index + 1] == '\0')
			&& !ft_isalnum(str[index - 1]))
			str[index] -= 32;
		index++;
	}
	return (str);
}
