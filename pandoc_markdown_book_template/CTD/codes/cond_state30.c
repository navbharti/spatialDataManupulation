#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2!=0) //this is logic for Odd number
        printf("Weird");
    else //This is even block
    {
       if(n>=2 && n<=5) 
            printf("Not Weird");
        else if( n>=6 && n<=20)
            printf("Weird");
        else if(n>20)
            printf("Not Weird");
    }
}