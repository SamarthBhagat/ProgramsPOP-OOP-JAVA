//Accept number from user and display on screen even number from  screen
#include<stdio.h>

void chkeven(int iNo)
{

    if(iNo<0)
    {

        iNo=-iNo;
    }

    int icnt=1;
    for(iNo;iNo>0;)
    {
    if((icnt%2)==0)
    {
        iNo--;
        printf("%d    ",icnt);
    }

      icnt++;

}


}


int main()
{
    int ivalue=0;
    printf("enter the number:");
    scanf("%d",&ivalue);

    chkeven(ivalue);



    return 0;
}
