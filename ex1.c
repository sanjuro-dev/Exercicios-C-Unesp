#include <stdio.h>

char lower(char c){
    if(64 < c && c < 91){
        return c + 32;
    }
    return c;
}

char str[32];


int main(){
    
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", lower(str[i]));
    }
    return 0;
}
