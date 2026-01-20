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
	char	*tmp;

	tmp = NULL;
	while(*src)
	{
		if (*src == (char)c)
			tmp = (char *)src;
		src++;
	}
	if (c == '\0')
		return ((char *)src);
	return (tmp);
}
