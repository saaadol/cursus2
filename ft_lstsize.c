#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int counter;
    t_list *lst2;
    lst2 = lst;
    
    counter = 0;
    while (lst2)
    {
        lst2 = lst2->next;
        counter++;
    }
    return (counter);
}