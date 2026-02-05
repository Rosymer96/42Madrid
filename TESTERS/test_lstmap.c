/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:29:18 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:37:07 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *f(void *content)
{
    char    *str;
    char    *new_str;
    int     i;

    if (!content)
        return (NULL);

    new_str = ft_strdup((char *)content);
    if (!new_str)
        return (NULL);

    i = 0;
    while (new_str[i])
    {
        new_str[i] = ft_toupper(new_str[i]);
        i++;
    }
    return (new_str);
}

void del(void *content)
{
	free(content);
}

#include <stdio.h>
int main (void)
{
	t_list *n1;
    t_list *n2;
    t_list *n3;
	t_list *new_lst;
	t_list	*tmp;

    n1 = ft_lstnew(ft_strdup("Alessia"));
    n2 = ft_lstnew(ft_strdup("Fernando"));
    n3 = ft_lstnew(ft_strdup("Rosy"));
    ft_lstadd_front(&n1, n2);
    ft_lstadd_front(&n1, n3);
    new_lst = ft_lstmap(n1, f, del);
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
		// Limpieza total
    ft_lstclear(&n1, del);
    ft_lstclear(&new_lst, del);
	return (0);
}
