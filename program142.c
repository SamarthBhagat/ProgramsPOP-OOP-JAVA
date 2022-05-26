// Program which accept number from user and return multiplication of all digits
#include<stdio.h>
int MultDigit(int iNo)
{
    int iDigit=0;
int isum=1;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        isum=iDigit * isum;
        iNo=iNo / 10;
    }
    return isum;

}

int main()
{
    int ivalue=0;
    int iret=0;


      printf("Enter The Number:");
      scanf("%d",&ivalue);
     iret=MultDigit(ivalue);

    printf("%d",iret);

    return 0;



}
