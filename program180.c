
#include<stdio.h>

 void pattern(int iRow ,int icol)
 {
     int i=0;
     int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=icol;j++)
        {
        if(i<=j)
        {

            printf("%d\t",j);
        }
        else
        {
            printf("\t");
        }

 }
       printf("\n");
 }
 }

int main()

{
    int ivalue=0;
    int ivalue2=0;

    printf("Enter The Row:");
    scanf("%d",&ivalue);

    printf("Enter The Col:");
    scanf("%d",&ivalue2);


    pattern(ivalue ,ivalue2);

    return 0;
}





