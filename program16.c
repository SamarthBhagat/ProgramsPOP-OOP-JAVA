//program  which accept number from user and print even factors of that number
#include<stdio.h>

void chkeven(int iNo)
{
if(iNo<0)
{
    iNo=-iNo;
}
int icnt=0;
for(icnt=1;icnt<iNo;icnt++)
{
    if((iNo%icnt)==0)
    {
        if((icnt %2)==0){
        printf("%d ",icnt);
        }

    }
}
}

int main()
{
   int ivalue=0;

   printf("enter the number");
   scanf("%d",&ivalue);

   chkeven(ivalue);
   return 0;


}
