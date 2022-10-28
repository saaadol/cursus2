/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:28:31 by souledla          #+#    #+#             */
/*   Updated: 2022/10/28 17:27:12 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (!lst -> next)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

#include <stdio.h>
int main()
{
	t_list **t;
	int		i;
	t_list	*last;

	i = 0;
	while (i < 10)
	{
		ft_lstadd_back(t, ft_lstnew("fasi slaba"));
		i++;
	}
	// last = ft_lstlast(t);
	int a = ft_lstsize(*t);
	printf("%d\n", a);
}
