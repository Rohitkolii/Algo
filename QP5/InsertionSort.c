#include <stdio.h>
int main(){
    int A[] = {7,4,10,8,3,1};
    int n = sizeof(A)/sizeof(int);
    int temp,j;

    for(int i=1; i<n; i++){
        temp = A[i];
        j=i-1;

        while (j>=0 && A[j] > temp){
            A[j+1] = A[j];
            j--;
        }
        
        A[j+1] = temp;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d \t", A[i]);
    }
    
    return 0;
}