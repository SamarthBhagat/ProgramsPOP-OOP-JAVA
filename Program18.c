//Program1 Division of Two Numbers

#include<stdio.h>

int Divide(int Ino1 ,int Ino2)
{
    int Ians=0;
    if(Ino2<0)
    {
        Ino2=-Ino2;
    }
    Ians=Ino1/Ino2;
    return Ians;


}
int main()
{
    int Ivalue1=15; int Ivalue2=5;
     int IRet=0;

 IRet=Divide(Ivalue1,Ivalue2);
 printf("The Division is:%d",IRet);
 return 0;
}
