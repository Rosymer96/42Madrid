/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:57:59 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:58:03 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *s = "Hola 42 Madrid";
    char *sub;

    sub = ft_substr(s, 5, 2);
    printf("Test 1 (5, 2): [%s] (Expected: [42])\n", sub);
    free(sub);

    // Test 2: Start fuera de rango
    sub = ft_substr(s, 50, 5);
    printf("Test 2 (50, 5): [%s] (Expected: [])\n", sub);
    free(sub);

    // Test 3: Len más grande que la string
    sub = ft_substr(s, 0, 100);
    printf("Test 3 (0, 100): [%s] (Expected: [Hola 42 Madrid])\n", sub);
    free(sub);

    return (0);
}
