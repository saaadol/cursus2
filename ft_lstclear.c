/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:26:25 by souledla          #+#    #+#             */
/*   Updated: 2022/10/29 22:56:08 by souledla         ###   ########.fr       */
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

void del(void *x)
{
	int i;
	i = -1;
}

#include <stdio.h>

int main()
{
	void *a;
	void *b;
	b = malloc(12312312312 * 4);
	a = b;
	t_list **p;
	t_list *head;
	head = NULL;
	int i = 0;
	while (i < 100)
	{
		ft_lstadd_back(p, ft_lstnew(ft_itoa(i)));
		i++;
	}
	// (*p)->next->next->content = (void *)'a';

	printf("%s\n", (*p)->next->next->content);
	printf("%s\n", (*p)->next->next->next->content);
	// printf("%s\n", p[6]->content);


	
	t_list *a = ft_lstlast(*p);
	printf("%d\n", ft_lstsize(*p));
	ft_lstclear(p, del);
	while (1)
	{
		/* code */
	}

	
	printf("%d\n", ft_lstsize(*p));
	
}