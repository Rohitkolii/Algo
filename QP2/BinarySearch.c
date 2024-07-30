#include <stdio.h>
int main(){
    int A[] = {2,5,9,23,55,78,99,101};
    int low = 0, high, mid, n=23, flag=0, loopExecutionTime=0;
    high = sizeof(A)/sizeof(int);

    while (low <= high){
        loopExecutionTime++;
        mid = (high+low)/2;
        if(A[mid] == n){
            flag = 1;
            break;
        }else if(n > mid){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    if(flag == 1){
        printf("Element Find at Location %d \n", mid +1);
        printf("Loop Execution Times : %d",loopExecutionTime);
    }else{
        printf("Element Not Available...");
    }
    return 0;
}