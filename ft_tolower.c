#include <stdio.h>

int ft_tolower(int c){
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32 ;    
    }
    

    return c; 
}

int main(void){
    char c1 = 'A';
    char c2 = 'Z';
    char c3 = '5';

    printf("%c\n", ft_tolower(c1)); // a
    printf("%c\n", ft_tolower(c2)); // z
    printf("%c\n", ft_tolower(c3)); // 5
}