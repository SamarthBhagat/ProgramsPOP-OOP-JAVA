// Program to display 5 times Hello on screen

#include<stdio.h>

// Demonstration of ITERATION

void Display()             
{
    int iCnt = 0;
    for( iCnt = 0;  iCnt<5 ;  ++iCnt)
    {
            printf("Hello\n");      //  4
    }
}

//  1
//  2    4     3
//  2    4     3
//  2    4     3
//  2    4     3
//  2    4     3
//  2

int main()
{
    Display();                
    
    return 0;
}

