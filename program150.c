//Program  which accept number from user and count frequency of 2 in it factors
#include<stdio.h>
#include<stdbool.h>
int Display(int iNo)
{
    int iDigit=0;
    int isum=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;

        if(iDigit == 2)
        {
            isum++;

        }

        iNo= iNo / 10;
    }
    return isum;

}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter The Number:");
    scanf("%d",&ivalue);
    iret=Display(ivalue);
    printf("The Value is %d",iret);
    return 0;
}
