#include<stdio.h>

int main()
{
   
    int no1 = 10;

    
    const int no2 = 10;


    int Arr[4] = {10,20,30,40};

    const int Brr[4] = {10,20,30,40};


    no1++;

    // no2++;

    Arr[0] = 11;

    // Brr[0] = 11;

    return 0;
}