/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:58 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:59:11 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	size_t	dup_len;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	dup_len = end - start;
	dup = (char *)malloc(sizeof(char) * dup_len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < dup_len)
	{
		dup[i] = s1[start + i];
		i++;
	}
	dup[dup_len] = '\0';
	return (dup);
}
