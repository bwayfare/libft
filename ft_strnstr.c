/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwayfare <bwayfare@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:52:59 by bwayfare          #+#    #+#             */
/*   Updated: 2020/11/17 00:53:00 by bwayfare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == find[j])
			while (find[j] && i + j < len && find[j] == str[i + j])
			{
				if (find[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		if (j != 0)
			i = i + j;
		i++;
	}
	return (NULL);
}
