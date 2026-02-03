/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:29:18 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 14:52:36 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void *f(void *content)
{
    char *str;
    int i;
    str = (char *)content;
    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
	return (str);
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
	return (0);
}*/
