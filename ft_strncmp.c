#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;
    while (*s1 && *s2 && i < n)
    {
        if ((unsigned char)*s1 != (unsigned char)*s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        
        s1++;
        s2++;
        i++;
    }

    if (i == n)
        return 0;
    
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main(void){
    char *s1 = "heflo"; 
    char *s2 = "hello"; 
    int test = ft_strncmp(s1 , s2 , 3); 
    printf("%d\n", test);
}
