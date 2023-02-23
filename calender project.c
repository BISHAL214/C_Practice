#include<stdio.h>

#define LEAP_YEAR ((Year%4==0 && Year%100 != 0)||Year%400==0)
#define TRUE 1
#define CH '-'
#define MAX_NO 91
#define getkey

int main()
{
    int month,year,Zmonth,Zyear,Zeller,Day;
    printf("\n\t This program the calender of a  given month. Enter month, year...format is mm-yyyy. \n");

    while(TRUE)
    {
        fflush(stdin);
        printf("\n\n\t Enter mm-yyyy:");
        scanf("%d-%d",&month,&year);
        if(year<0)
        {
            printf("\nInvalid year.....");
            continue;
        }
        if(year<100)
        {
            year += 1900;
        }
        if(year<1582 || year>4902)
        {
            printf("\nInvalid year value....");
            continue;
        }
        if(month<1 || month>12)
        {
            printf("\nInvalid month value....");
            continue;
        }
        break;
    }

    int monthDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *monthname[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    char *monthname1[] = {"JAN","FEB","MAR","APR","MAy","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};


int getZeller(int month, int year){
    int day = 1; Zmonth, Zyear, Zeller;
    if(month<3)
    {
        Zmonth = month+10;
    }
    else
    {
        Zmonth = month-2;
    }
    if(Zmonth>10)
    {
        Zyear = year-1;
    }
    else
    {
        Zyear = year;
    }
    Zeller = ((int)((13*Zmonth-1)/5)+Day+Zyear%100+(int)((Zyear%100)/4)-2*(int)(Zyear/100)+(int)(Zyear/400)+77)%7;
    return Zeller;
}

getkey()
{
    union REGS i,o;
    while(!kbhit())
        ;
    i.h.ah = 0;
    int86(22,&i,&o);
    return (o.h.ah);
}

void printchar(char c)
{
    int i;
    printf("\n\n");
    for(i=1;i<51;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}

void PrintFile(int M,int Y,int Z)
{
    int i,j;
    char filename[12];
    char stryear[5];
    FILE *stream;

    strcpy(file, monthname1[M-1]);
    itoa(Y, stryear, 10);
    strcat(filename, stryear);
    strcat(filename, ".txt");

    if((stream=fopen(filename,"w"))==NULL)
    {
        printf("\nError-cannot create file.");
        getch();
        exit(1);
    }

    fprint(stream, "\n\t\t\t%s %d\n\n\t", monthname[M-1],Y);

    for(i=1,i<=MAX_NO;i++)
    {
        fprint(,stream"-");
    }
    printf("\n\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\t",stream);

    for(i=1; i<=MAX_NO; i++)
    {
        fprint(stream,"-");
    }
      fprint(stream,"\n");
      for(i=1; i<=Z; i++)
      {
        fprint(stream,"\t -");
      }

      j = Z;

      for(i=1; i<=monthDay[M-1]; i++)
      {
        if(j++ % 7 == 0)
        {
            fprintf(stream,"\n");
        }
        fprintf(stream,"\t%2d", i);
      }

}
}
