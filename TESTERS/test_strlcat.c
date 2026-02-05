/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:22:09 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:43:39 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    d[15] = "Hola";
    char    s[] = " Mundo";
    size_t  res;
	char    d1[15] = "Hola";
    char    s1[] = " Mundo";
    size_t  res1;

    
    res = ft_strlcat(d, s, 15);
    printf("ft_strlcat: [%s], Return: %zu\n", d, res);
	res1 = strlcat(d1, s1, 15);
    printf("strlcat: [%s], Return: %zu\n", d1, res1);

   
    char    d2[15] = "Hola";
	char    d3[15] = "Hola";
    res = ft_strlcat(d2, s, 2);
	res1 = strlcat(d3, s1, 2);

    printf("ft_strlcat: [%s], Return: %zu\n", d2, res);
	printf("strlcat: [%s], Return: %zu\n", d3, res1);
    
    return (0);
}
