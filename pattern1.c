#include<stdio.h>
int main()
{
    int rows,cols;

    printf("Enter The Rows Of The rectangle:");
    scanf("%d",&rows);
    printf("Enter The Cols Of The Rectangle:");
    scanf("%d",&cols);

    //printf("Rectangle Of Dimensions",rows,"*",cols,"is:");

    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            if(i == 0 || i == rows - 1 || j == 0 || j == cols -1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}