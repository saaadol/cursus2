/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:25:43 by souledla          #+#    #+#             */
/*   Updated: 2022/10/26 12:26:16 by souledla         ###   ########.fr       */
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
/*
int main() {
    t_list *p;
    t_list *lol;
    t_list **head;
    
    
    p = (t_list *)malloc(sizeof(t_list));
    lol =(t_list *)malloc(sizeof(t_list));
    head =(t_list *)malloc(sizeof(t_list));
    p -> content = (void *) 45;
    p -> next= NULL;
    *head = p;
    //printf("%d\n",ft_lstadd_front(*p, lol));
    ft_lstadd_front(head, lol);
    printf("%p \n",p);
    printf("%p \n",lol);
    

    return 0;
}
*/