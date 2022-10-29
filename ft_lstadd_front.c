/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:25:43 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 21:57:48 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

char **convert(t_list *lst)
{
	int size = ft_lstsize(lst);
	char **tab;
	int i = 0;
	tab = malloc(sizeof(t_list));
	while (lst)
	{
		tab[i] = ft_strdup(lst->content);
		lst  = lst->next;
		i++;
	}
	return tab;
}

int main(int argc, char const *argv[])
{
	t_list *lst;

	lst = NULL;

	int i = 0;
	while (i++ < 10)
		ft_lstadd_back(&lst, ft_lstnew("fdjsdv\n"));

	convert(lst);

	return 0;
}
