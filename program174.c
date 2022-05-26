#include<stdio.h>

void Pattern(int iRow ,int icol)
{
    int i=0;
    int j=0;
    int a=1;
 for(i=1;i<=iRow;i++)
 {

    for(j=1;j<=icol;j++)
    {

        printf("%d \t",a);
         a++;

    }

    printf("\n");


 }


}


int main()

{


    int ivalue1=0;
    int ivalue2=0;
    printf("Enter the elements of ");
    scanf("%d",&ivalue1);

    printf("Enter the elements of ");
    scanf("%d",&ivalue2);


    Pattern(ivalue1,ivalue2);
    return 0;
}






