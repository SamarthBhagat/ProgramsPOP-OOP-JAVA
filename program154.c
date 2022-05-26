// Program which accept number from user and return the count of digit 3 and 7

#include<stdio.h>
int CountRange(int iNo)
{
    int iDigit=0;
int isum=0;
    while(iNo>0)
    {
        iDigit=iNo % 10;
        if((iDigit< 7) && (iDigit >3))
        {
            isum++;
        }
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
     iret=CountRange(ivalue);

    printf("%d",iret);

    return 0;



}
