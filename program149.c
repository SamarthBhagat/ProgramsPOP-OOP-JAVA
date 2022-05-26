//Program  which accept number from user and check  it contains 0  in it or not

#include<stdio.h>
#include<stdbool.h>
bool Display(int iNo)
{
    int iDigit=0;
    bool rans;
    while(iNo>0)

    {
       iDigit=iNo % 10;

       if(iDigit== 0)
       {
           return 1;
       }
        iNo=iNo /10;
    }


}



int main()

{
    int ivalue=0;
bool iret;
    printf("enter the value");
    scanf("%d",&ivalue);
   iret=Display(ivalue);
 if(iret == true)
 {
     printf("the 0 is present");
 }
 else
 {
   printf("the 0 is  not present");
 }

    return 0;
}
