#include<stdio.h>


void pattern(int iNo)
{

    int icnt=0;

    for(icnt=iNo;icnt>0;icnt--)

    {
        printf("%d \t",icnt);
         printf("# \t");

    }
}







int main()
{
    int ivalue=0;
    printf("Enter The Number");
    scanf("%d",&ivalue);
    pattern(ivalue);


    return 0;
}
