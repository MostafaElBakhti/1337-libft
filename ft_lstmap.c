#include "libft.h"
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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_head = NULL ; 
    t_list *new_node ; 
    t_list *last = NULL ;

    while (lst)
    {
        void *new_content = f(lst->content) ;
        lst = lst->next ;
        if (!new_content)
        {
            ft_lstclear(&new_head, del);
            return NULL;
        }

        new_node = ft_lstnew(new_content) ;

        last = new_node;
        lst = lst->next;
    }
    
}

void f(void *content)
{
    char *edit  = (char *)content; 
    while (*edit)
    {
        *edit = *edit + 1 ; 
        edit++;
    }
    
}

int main()
{
    t_list *node1 = ft_lstnew(strdup("test1")) ;
    t_list *node2 = ft_lstnew(strdup("test2")) ;
    t_list *node3 = ft_lstnew(strdup("test3")) ;
    node1->next = node2 ;
    node2->next = node3 ;
}
