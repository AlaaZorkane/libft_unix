/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 03:08:53 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/31 13:27:43 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wordcount(const char *str, char c)
{
	unsigned int index;
	unsigned int count;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] != c)
			count++;
		while (str[index + 1] != '\0' && str[index] != c)
			index++;
		index++;
	}
	return (count);
}

static size_t		ft_wordlen(const char *str, char c)
{
	size_t	size;
	int		index;

	index = 0;
	size = 0;
	while (str[index] == c && str[index] != '\0')
		index++;
	while (str[index] != c && str[index] != '\0')
	{
		index++;
		size++;
	}
	return (size);
}

static char			*ft_strncpyy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		++index;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

static	char		**free_all(char ***result, unsigned int position)
{
	unsigned int index;

	index = 0;
	while (index < position)
	{
		free((*result)[index]);
		index++;
	}
	free(*result);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	unsigned int	position;
	size_t			len;
	char			**result;
	unsigned int	word_count;

	if (s == NULL)
		return (NULL);
	word_count = ft_wordcount(s, c);
	if (!(result = (char **)malloc(sizeof(*result) * (word_count + 1))))
		return (NULL);
	position = -1;
	while (++position < word_count)
	{
		while (*s == c && s)
			s = s + 1;
		len = ft_wordlen(s, c);
		if (!(result[position] = (char *)malloc(sizeof(**result) * (len + 1))))
			return (free_all(&result, position));
		result[position] = ft_strncpyy(result[position], s, len);
		s = s + len + 1;
	}
	result[position] = NULL;
	return (result);
}
