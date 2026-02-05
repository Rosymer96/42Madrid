/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:01:00 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:21:04 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*res;

	s1 = "Alessia ";
	s2 = "Xiuling";
	printf("%s\n", ft_strjoin(s1, s2));
	
    res = ft_strjoin("", "Xiuling");
    printf("S1 empty: [%s]\n", res);
    free(res);

    res = ft_strjoin("Alessia", "");
    printf("S2 empty: [%s]\n", res);
    free(res);

    res = ft_strjoin("", "");
    printf("both empty: [%s]\n", res); 
    free(res);

    res = ft_strjoin(NULL, "Check");
    if (res == NULL)
        printf("NULL: OK\n");
    else
    {
        printf("NULL: KO\n");
        free(res);
    }

    return (0);
}
