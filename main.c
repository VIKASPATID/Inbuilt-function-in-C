#include"COMM.h"
/*
including our new header file 
it also include 
{
<stdio.h> , <math.h> ,<stdlib.h> ,<string.h>
}
*/

void main()
{
	int c,a,b;
   printf("\n \t\t :: test function ::\n");

   while(1) //infinite loop run untill anyone wanna break it
   {
   	printf("\n 1. TEST Number is Prime or NOT ::");
   	printf("\n 2. Find factorial of Given Number ::");
   	printf("\n any other number to. :::: EXIT ::::");
   	printf("\n\n Enter Ur Choice : ");
   	scanf("%d",&c);
   	switch(c)
   	{
   		case 1:
   			printf("\n Enter Number ");
   			scanf("%d",&a);
   			if(isPrime(a))  //calling func isPrime()
   			  printf("\n\t\t Prime Number\n ");
   			else
   			  printf("\n\t\t NOT a Prime number\n ");

   			break;
   		case 2:
   		    printf("\n Enter Number : ");
   		    scanf("%d",&a);
   		    printf("\n\t\t %d! = %d\n",a,Fct(a)); //calling fuction Fct();
   		    break;
        default:
            exit(0);
   	}
   }


}
