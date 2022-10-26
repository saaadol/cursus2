/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:26:25 by souledla          #+#    #+#             */
/*   Updated: 2022/10/26 12:26:44 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ls1;
	t_list	*temp;

	if (lst && del)
	{
		ls1 = *lst;
		while (ls1 != NULL)
		{
			(*del)(ls1->content);
			temp = ls1->next;
			free(ls1);
			ls1 = temp;
		}
		*lst = NULL;
	}
}
