#include<stdio.h>

int main(){
    int DATA[10] = {22, 65, 1, 99, 32, 17, 74, 49, 33, 2}; 
    int item = 17;
    int N, LOC, K;
    N = 10;
    LOC = 0;
    K = 1;

    while(LOC == 0 && K < N) {
        if(item == DATA[K])
            LOC = K;
        K = K + 1;
    }

    if(LOC == 0)
    printf("item is not in the array DATA");

    else 
    printf("%d is the location of item", LOC);

    return 0;
}
