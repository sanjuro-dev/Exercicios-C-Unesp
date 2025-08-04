#include <stdio.h>

char upper(char c){
    if(96 < c && c < 123){
        return c - 32;
    }
    return c;
}

char str[32];


int main(){
    
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", upper(str[i]));
    }
    return 0;
}
