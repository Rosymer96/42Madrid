* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:16:21 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 15:07:51 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int				total;
	unsigned char	*str;

	total = nmemb * size;
	str = malloc (total);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb);
	return (str);
}
/*
int main(void)
{
	char *num = (char *)ft_calloc(5, sizeof(char));
	printf("%p", num);
	num++;
}*/
