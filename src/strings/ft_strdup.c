/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:29:41 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/22 18:07:30 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char *dest;

	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, s1));
}
