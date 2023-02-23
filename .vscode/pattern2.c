#include<stdio.h>
int main()
{
    int rows;
    printf("Enter The No. Of The Rows:");
    scanf("%d",&rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows; j++)
        {
            if(j <= i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        for(int j = rows; j >= 1; j--)
        {
            if(j <= i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}