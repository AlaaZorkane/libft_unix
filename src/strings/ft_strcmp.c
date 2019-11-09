/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorkane <azorkane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 02:22:03 by azorkane          #+#    #+#             */
/*   Updated: 2019/10/18 02:24:22 by azorkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	if (*ptr_s1 == '\0' || *ptr_s2 == '\0')
		return ((int)*ptr_s1 - (int)*ptr_s2);
	while (1)
	{
		if (*ptr_s1 != *ptr_s2 || *ptr_s1 == '\0' || *ptr_s2 == '\0')
			break ;
		ptr_s1++;
		ptr_s2++;
	}
	return (*ptr_s1 - *ptr_s2);
}
