#include "libft.h"

void ft_lstadd_back (t_list **lst, t_list *new)
{
    t_list *l1;
    if (!*lst)
        *lst = new;  
    else  
    { 
        l1 = ft_lstlast(*(lst));
        l1 ->next = new;
        new -> next = NULL;
    }    
         
}