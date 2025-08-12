#include <stdio.h>


char str[32];
int count = 0;

int main(){
    
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '1'){
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}
