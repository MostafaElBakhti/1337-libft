#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ; 
    
    while (lst)
    {
        f(lst->content) ;
        lst = lst->next ;
    }
    
}

void f(void *content)
{
    char *test = (char *)content ; 
    while (*test)
    {
        *test = *test + 1 ; 
        test++; 
    }
    
}
