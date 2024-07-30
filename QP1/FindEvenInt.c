int main(){
    int A[] = {2,8,12,6,4,3,25};
    int LastEvenInteger,i, loopTimes=0;

    for(i=0; i<7; i++){
        if(A[i]%2 == 0){
            LastEvenInteger = A[i];
            loopTimes++;
            continue;
        }
    }

    printf("Last Even Integer is %d \n", LastEvenInteger);
    printf("Total Times Loop Executed : %d \n", loopTimes);
    printf("Total Times Arithmetic Operations Executed : %d", loopTimes-1);
}