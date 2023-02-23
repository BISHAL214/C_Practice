#include<stdio.h>
#include<math.h>

int main(){
    int A, B, C;
    float X, X1, X2;

    printf("Enter The value of A:");
     scanf("%d", &A);
    printf("Enter The value of B:");
     scanf("%d", &B);
    printf("Enter The value of C:");
     scanf("%d", &C);

    int D = (B*B - 4 * A * C);

    if(D > 0) {
        X1 = ( (-1) * B + sqrt(D) ) / 2 * A;
        X2 = ( (-1) * B - sqrt(D) ) / 2 * A;
        printf("X1 = %.2f, X2 = %.2f", X1, X2);
    }
    else if (D == 0) {
        X = ( (-1) * B / 2 * A );
        printf("UNIQUE SOLUTION X = %.2f", X);
    }
    else {
        printf("NO REAL SOLUTIONS");
    }
    return 0;
}