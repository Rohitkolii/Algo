#include <stdio.h>
int main(){
    char str[] = "My World is here";
    int size = sizeof(str)/sizeof(char);

    for(int i = size-1; i>=0; i--){
        printf("%c",str[i]);
    }
    return 0;
}