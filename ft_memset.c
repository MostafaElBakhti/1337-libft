#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n){
    char *pointer = (char *)s;
    size_t i = 0 ;
    while (i < n)
    {
        pointer[i] = (unsigned char)c ;
        i++;
    }
    return s ;
}

int main(void){

    char s[10] ;
    ft_memset(s ,'e' , 5) ;
    s[5] = '\0' ;
    printf("%s" , s) ; 
    
    return 0 ;
}