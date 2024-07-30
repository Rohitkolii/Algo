#include <stdio.h>
int main(){
    char s1[100] = "Hello ", s2[] = "World";
    int length,j;

    length = 0;

    while(s1[length] != '\0'){
        length++;
    }

    for(j=0; s2[j] != '\0'; ++j, ++length){        
        s1[length] = s2[j];
    }
    s1[length] = '\0';
    printf(s1);

    return 0;
}