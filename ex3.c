#include <stdio.h>

int len(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count = i;
    }
    return count + 1;
}


int compare(char str1[], char str2[]){
    
    
    
    if(len(str1) != len(str2)) return 0;
    else{
        
        
        for(int i = 0; str1[i] != '\0'; i++){
            if(str1[i] != str2[i]) return 0;
        }
        return 1;
    }
}

char str1[32];
char str2[32];


int main(){
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    printf("%d", compare(str1, str2));
    return 0;
}
