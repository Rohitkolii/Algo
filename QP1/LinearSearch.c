#include <stdio.h>
int main(){
    int A[] = {2,8,12,6,4,3,25};
    int n, flag =0,i;
    printf("Enter Value to be Searched : ");
    scanf("%d",&n);

    for(i=0; i<7; i++){
        if(A[i] == n){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("Value %d Found at location %d \n", n,i);
        printf("Loop Executed %d Times", i);
    }
    return 0;
}