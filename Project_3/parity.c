#include <stdio.h>
#include <parity.h>

int parity_digit(int number)
{
	int num=number,tempNum,rem,sum=0,i,parity,p;
	printf("The number is %d\n",num);
	if(num>99 && num<1000)
	{
	/*sum of didgits of the number*/
	tempNum=num;
	while(tempNum > 0)
	{
		
		sum=sum+tempNum%10;
		tempNum=tempNum/10;

	}
	printf("sum of the digits=%d\n",sum);
	/*checking for parity number to be added*/
	if(sum>=9)
	{
		for(i=0;i<=9;i++)
		{	
			if((sum+i)%9==0 && (((sum+i)/9)%2)==0)
			{
				p=i;
				printf("the parity bit added is %d\n",p);
				/*printing the the number with parity*/
				parity=(num*10)+p;
				printf("new 4 digit number with parity=%d",parity);
  
			}
  
		}
	}
	else
		printf("parity is not possible for %d as it is an odd parity of 9",num);      
	}
	else
		printf("entered number is not a 3 digit number");
	
	}

