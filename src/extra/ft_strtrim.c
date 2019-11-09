/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 00:27:22 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/21 16:52:10 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_charinclude(const char *set, char c)
{
	unsigned int	index;
	unsigned int	flag;

	index = 0;
	flag = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
		{
			flag = 1;
			break ;
		}
		index++;
	}
	return (flag);
}

static unsigned int	ft_chars_before_after(const char *str, const char *set,
					int before)
{
	unsigned int	index;

	index = before ? 0 : ft_strlen(str) - 1;
	while (before ? str[index] != '\0' : index > 0)
	{
		if (!ft_charinclude(set, str[index]))
			break ;
		index += before ? 1 : -1;
	}
	return (before ? index : ft_strlen(str) - index - 1);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*result;
	unsigned int	index;
	size_t			result_len;
	unsigned int	jndex;

	if (s1 == NULL)
		return (NULL);
	index = ft_chars_before_after(s1, set, 1);
	if (index == ft_strlen(s1))
	{
		if (!(result = (char *)malloc(sizeof(*result))))
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result_len = ft_strlen(s1) - index - ft_chars_before_after(s1, set, 0);
	jndex = 0;
	if (!(result = (char *)malloc(sizeof(*result) * result_len + 1)))
		return (NULL);
	while (jndex < result_len)
		result[jndex++] = s1[index++];
	result[jndex] = '\0';
	return (result);
}
