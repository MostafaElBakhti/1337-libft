#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return (char *)s ;
        }
        s++;
    }   
    if (c == '\0')
    {
        return (char *)s ;
    }
    
    return NULL ;
    
}

int main(void){
    char *s = "hello" ;
    char c = 'l' ; 
    char *test = ft_strchr(s , c) ; 
    printf("%s" , test) ; 
}