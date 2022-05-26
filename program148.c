//Program  which accept number from user and display its multiplication of factors
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;

    while(iNo>0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo= iNo / 10;
    }
}




int main()
{
    int ivalue=0;
    printf("Enter The value");
    scanf("%d",&ivalue);
    DisplayDigit(ivalue);





    return 0;
}
