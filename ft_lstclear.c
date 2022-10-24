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

