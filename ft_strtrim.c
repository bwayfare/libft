/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwayfare <bwayfare@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:53:02 by bwayfare          #+#    #+#             */
/*   Updated: 2020/11/17 00:53:03 by bwayfare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*res;

	if (!s1)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]) && s1[begin])
		begin++;
	if (s1[begin] == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, begin, end - begin + 1);
	if (!res)
		return (NULL);
	return (res);
}
