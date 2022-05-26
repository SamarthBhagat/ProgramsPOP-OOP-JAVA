//program which accept number from user and display its multiplication of factors

#include<stdio.h>

int multfact(int iNo)
{

    int icnt=0;
    int imult=1;

    for(icnt=1;icnt<iNo;icnt++)
    {
    if((iNo%icnt)== 0)
    {
        imult=imult*icnt;

    }

    }
    return imult;
}









int main()

{
 int ivalue=0;
int  iret=0;
 printf("Enter the no:");
 scanf("%d",&ivalue);
 iret=multfact(ivalue);
 printf("%d",iret);
 return 0;

}
