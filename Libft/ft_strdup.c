/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:08:49 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 14:53:59 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	src_len;
	char	*dup;
	size_t	i;

	src_len = ft_strlen(src);
	dup = malloc ((char)(src_len + 1));
	if (!dup)
		return (NULL);
	while (i < src_len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *src = "Adios";
	printf("%s", src);
	return 0;
}*/
