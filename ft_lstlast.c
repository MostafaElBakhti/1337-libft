#include "libft.h"
#include <stdio.h>


t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}



t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
int main()
{
    t_list *node1 = ft_lstnew("hello node 1") ;
    printf("%s" , node1->content) ;
    t_list *node2 = ft_lstnew("hello node 1") ;
    t_list *node3 = ft_lstnew("hello node 1") ;

    node1->next = node2 ; 
    node2->next = node3 ; 

    t_list *last = ft_lstlast(node1) ; 
    
}