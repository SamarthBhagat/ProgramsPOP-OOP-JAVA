//program which accept number from user and  return summation of all  its non factors
#include<stdio.h>


int SumNonfact(int iNo)
{
    int icnt=0;
    int isum=0;

    for(icnt=1;icnt<iNo;icnt++){

    if((iNo%icnt)!=0)
{
    isum=isum+icnt;
}


}

return isum;
}

int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter The Value");
    scanf("%d",&ivalue);
    iret=SumNonfact(ivalue);
    printf("%d",iret);
    return 0;
}

