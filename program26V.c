//Accept two numbers from user and display first number in second number of times.
#include<stdio.h>
 void Display(int iNo , int iFreq)
{
int icnt=0;
for(icnt=0; icnt<=iFreq; icnt++)
{

    printf("%d \t",iNo);

}

}



int main()

{
    int ivalue=0;
    int icount=0;


    printf("Please Enter No");
    scanf("%d",&ivalue);

     printf("Please Enter Freq");
    scanf("%d",&icount);
    Display(ivalue , icount);

    return 0;
}

