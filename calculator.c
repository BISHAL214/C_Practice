#include<stdio.h>
int main()
{
    int a,x;
    int b,c,d,e;
    int f1=1,f2=1,i;
    float result=0;

    level:
    printf("\n\n\n\t----------------------WELCOME IN THE WORLD OF C---------------------------------\n\n");
    printf("\n\n\tEnter Your Choices:\n\n\t1.Integer Calculation\n\n\t2.Float Calculation\n");
    printf("\n\n\tYour Choice:-\t");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("\n\n\n\n\t-------------------------Welcome To The Integer Calculator------------------------------\n");
        printf("\n\n\tEnter The 1st Number:\t");
        scanf("%d",&b);
        printf("\n\n\tEnter The 2nd Number:\t");
        scanf("%d",&c);
        printf("\n\n\n\t-----Enter Your Choices-----\n\n\t1.Addition Of The Numbers\n\n\t2.Substraction Of The Numbers\n\n\t3.Multiplication Of The Numbers\n\n\t4.Division Of The Numbers\n\n\t5.Check Odd/Even\n\n\t6.Square Of The Number\n\n\t7.Factorial Of The Numbers\n\n");
        printf("\n\n\tYour Choice:-\t");
        scanf("%d",&a);

        switch(a)
        {
            case 1:
            d = b + c;
            printf("\n\n\tThe Addition Is:\t%d",d);
            break;
            case 2:
            d = b - c;
            printf("\n\n\tThe Subtraction Is:\t%d",d);
            break;
            case 3:
            d = b * c;
            printf("\n\n\tThe Multiplication Is:\t%d",d);
            break;
            case 4:
            d = b / c;
            printf("\n\n\tThe Division IS:\t%d",d);
            break;
            case 5:
            if((b % 2==0) && (c % 2==0)){
                printf("\n\n\tThe Two Numbers Are Even\n\n");
            }
            else if((b%2==0) && (c%2!=0)){
                printf("\n\n\tThe 1st Number Is Even & The 2nd Number Is odd\n\n");
            }
            else if((b%2!=0) && (c%2==0)){
                printf("\n\n\tThe 1st Number Is Odd & The 2nd Number Is Even\n\n");
            }
            break;
            case 6:
            d = b * b;
            e = c * c;
            printf("\n\n\tThe Square Of The %d Is:\t%d\n\n",b,d);
            printf("\n\n\tThe Square Of The %d Is:\t%d\n\n",c,e);
            break;
            case 7:
            for(i=1;i<=b;i++){
                f1 = f1 * i;
            }
                printf("\n\tThe Factorial Of %d Is:\t%d\n\n",b,f1);
            for(i=1;i<=c;i++){
                f2 = f2 * i;
            }
                printf("\n\n\tThe Factorial Of %d Is:\t%d\n\n",c,f2);
            break;
            default:
            printf("\n\n\t------WRONG INPUT-------\n\n");
        }
        goto level;

        case 2:
        printf("\n\n\n\t-------------------------------WELCOME TO THE FLOAT CALCULATIONS------------------------------\n\n");
        int u;
        float p,q,r,s;
        float result;
        printf("\n\n\tEnter The 1st Number:\t");
        scanf("\t%f",&p);
        printf("\n\n\tEnter The 2nd Number:\t");
        scanf("\t%f",&q);

        printf("\n\n\t-----Enter Your Choices-----\n\n\t1.Addition Of The Numbers\n\n\t2.Substraction Of The Numbers\n\n\t3.Multiplication Of The Numbers\n\n\t4.Division Of The Numbers\n\n\t5.Square Of The Number\n\n\t6.Percentage\n\n");
        printf("\n\n\tYour Choice:- ");
        scanf("%d",&u);

        switch(u)
        {
            case 1:
            r = p + q;
            printf("\n\n\tThe Addition Is:\t%f\n\n",r);
            break;
            case 2:
            r = p - q;
            printf("\n\n\tThe Substraction Is:\t%f\n\n",r);
            break;
            case 3:
            r = p * q;
            printf("\n\n\tThe Multiplication Is:\t%f\n\n",r);
            break;
            case 4:
            r = p / q;
            printf("\n\n\tThe Division Is:\t%f\n\n",r);
            break;
            case 5:
            r = p * p;
            s = q * q;
            printf("\n\n\tThe Square Of The \t%f is:\t%f\n\n",p,r);
            printf("\n\n\tThe Square Of The %f is:\t%f\n\n",q,s);
            break;
            case 6:
            result = ((q / p) * 100);
            printf("\n\n\tThe Percentage of %f is %f percentage of %f",q,result,p);
            break;
            default:
            printf("\n\n\n\t-------------Wrong Input!--------------\n\n");
        }
        goto level;
    }

    return 0;
}