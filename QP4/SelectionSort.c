#include <stdio.h>
int main(){
    int A[] = {7,4,10,8,3,1};
    int n = sizeof(A)/sizeof(int);
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = A[min];
            A[min] = A[i];
            A[i] = temp;
        }
    }

    printf("Sorted Array : \n");
    for (int i = 0; i < n; i++){
        printf("%d \t", A[i]);
    }
    
    return 0;
}