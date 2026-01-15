/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:18:45 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:42:42 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[i] == '\0')
		return (src);
	while (i < len && src[i] != '\0')
	{
		j = 0;
		while (n[j] == src[i + j] && i + j < len && n[j] && src[i + j])
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}
