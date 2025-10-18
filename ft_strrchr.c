#include <stdio.h>


char *strrchr(const char *s, int c){
    const char *test = NULL ;
    while (*s)
    {
        if (*s == c)
        {
            test = s ;
        }
        s++ ;
    }

    if(c == '\0')
        return (char *)s ;

    return (char *)test ;
}


int main(void){
    char *s = "test" ;
    char c = 'e' ; 
    char *test = strrchr(s , c) ; 
    printf("%s" , test) ; 
}