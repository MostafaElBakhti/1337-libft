#include <stdio.h>

int ft_toupper(int c){
    if (c >= 97 && c <= 122)
    {
        return c - 32 ;    
    }
    

    return c; 
}

int main(void){
    char c1 = 'a';
    char c2 = 'Z';
    char c3 = '5';

    printf("%c\n", ft_toupper(c1)); // A
    printf("%c\n", ft_toupper(c2)); // Z
    printf("%c\n", ft_toupper(c3)); // 5
}