#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        return ;
    
    del(lst->content) ; 
    free(lst) ;
    
} 

// void del(void *content){
//     free(content) ;
// }

// t_list  *ft_lstnew(void *content)
// {
//     t_list *node ; 
//     node = (t_list *)malloc(sizeof(t_list)) ; 
//     if (!node)
//     {
//         return NULL ; 
//     }
//     node->content = content ; 
//     node->next = NULL ; 
//     return node ; 
    
// }

// t_list	*ft_lstlast(t_list *lst)
// {
//     if (!lst)
//         return NULL ;
    
//     while (lst->next)
//     {
//         lst = lst->next ;
//     }
//     return lst ;
     
// }

// int main()
// {
//     t_list *node1 = ft_lstnew(strdup("test123"));
//     t_list *node2 = ft_lstnew(strdup("test456"));
//     t_list *node3 = ft_lstnew(strdup("test789"));

//     node1->next = node2 ; 
//     node2->next = node3 ; 

//     t_list *last = ft_lstlast(node1) ;
//     ft_lstdelone(last , del) ;
// }