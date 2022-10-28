/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:21:11 by souledla          #+#    #+#             */
/*   Updated: 2022/10/28 17:28:40 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l1;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		l1 = ft_lstlast(*(lst));
		l1 ->next = new;
	}
}
