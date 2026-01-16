/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:17:12 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:37:16 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	const char	*tmp;

	tmp = src;
	while (*src)
	{
		src++;
	}
	if (c == '\0')
		return (src);
	while (src >= tmp)
	{
		if (*src == c)
			return ((char *)src);
		src--;
	}
	return (0);
}
