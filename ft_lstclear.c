#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    t_list *l1;
    while (*lst)
    {
        l1 = (*lst) -> next;
        ft_lstdelone(*lst ,del);
        (*lst) = l1;
    }
}

