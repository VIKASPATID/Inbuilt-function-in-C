#ifndef _COMM_H
#define _COMM_H

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

/**********************************************************************/
/*
It Return TRUE = 1 if Prime
Else Return FALSE =0 if NOT PRIME
if number is < than 1 then also it returns FALSE =0
*/
int isPrime(int a) //check prime number
{
    int i,sq;
    if(a>1)       //if number >1 process continue else return 0;
    {
    
        if(a==2)  //treating 1 & 2 as special case
            return(1);
        else if(a%2==0 || a==1)  //it ensure number is odd . 
		        return(0);       //so we start checking from 3 and left all even number
       else                      // as if a number is not divisible by 2 then it ...
        {                        // also not divisible by any even number 
          sq=sqrt(a);
          for(i=3;i<=sq;i+=2) //checking for divisibility by odd number only 
           {                   // in range 3 to sqrt(a)
            if(a%i==0)       //if it is divisible return 0
                return(0);
           }
        return(1);
    }
  }
  else
   return(0); //exeption handling 
}

/****************************************************************/
int Fct(int n)  //to find factorial of given number
{
	int i,f=1;
	
	for(i=n;i>1;i--) //basic factorial operation 
	   f=f*i;
	
	return(f);   //return factorial
}

#endif
