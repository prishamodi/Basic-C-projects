#include <stdio.h>
#include<math.h>
int choice_instruction();
void guide();
int palindrome(int);
int armstrong(int);
int weird(int);
int perfect(int);
int automorphic(int);
int binary(int);
int karparekar(int);
// to perform different complex mathematical operations

/* palindrome- number reversed is equal to original number(121) 
   armstrong - sum of cube of digits is eaual to number(153)
   weird number = sum of divisors in greater than number (12)
   perfect- sum of all multiples except number itself is equal to number (6)
   automorphic (25=625)
   binary= all digits are 0 and 1 only (1011)
   kaperakar= sum of digits of the square of no=no (9= 81= 8+1=9)
   */
   
   //for providing information on available choices
   int choice_instruction()
   {
   	printf("Enter 1 for palindrome \n");
   	printf("Enter 2 for armstrong \n");
   	printf("Enter 3 for weird \n");
   	printf("Enter 4 for perfect \n");
   	printf("Enter 5 for automorphic \n");
   	printf("Enter 6 for binary \n");
   	printf("Enter 7 for karparekar \n");
   }
   //guidance based on desired choice
   void guide()
   {
   	int choice;
   	choice_instruction();
   	printf("Enter the choice \n");
   	scanf("%d", &choice);
   	//calling function based on choice
   	switch(choice)
   	{
   		case 1: 
   		{
   			int number;
   			printf("Enter the number whose value you want to check");
   			scanf ("%d", &number);
   			palindrome(number);
   			break;
		   }
		case 2:
			{
				int number;
   				printf("Enter the number whose value you want to check");
   				scanf ("%d", &number);
				armstrong(number);
				break;	
			}
		case 3:
			{
				int number;
				printf("Enter the number whose value you want to check");
				scanf("%d", &number);
				weird(number);
				break;
			}
		case 4:
		{
			int number;
			printf("Enter the number whose value you want to check");
			scanf("%d", &number);
			perfect(number);
			break;
			}	
		case 5:
		{
			int number;
			printf("Enter the number whose value you want to check");
			scanf("%d", &number);
			automorphic(number);
			break;
			}	
		case 6:
		{
			int number;
			printf("Enter the number whose value you want to check");
			scanf("%d", &number);
			binary(number);
			break;
			}	
		case 7:
		{
			int number;
			printf("Enter number whose value you want to check");
			scanf("%d", &number);
			karparekar(number);
			break;
			}	
		default:
		printf("Invalid input");
		}
}
//1- palindrome
   int palindrome(int number)
   {
   	int remainder,duplicate=number,final=0;
   	while(duplicate>0)
   	{
   		remainder=duplicate%10;
   		final=(final*10)+remainder;
   		duplicate=duplicate/10;
	   }
	if(final==number)
	printf("%d is a palindrome number", number);
	else 
	printf("%d is not a palindrome number", number);   
	return 0;
   }
	//2 armstrong 
	int armstrong(int number)
	{
		int duplicate=number, remainder, cube, sum=0;
		while (duplicate>0)
		{
			remainder=duplicate%10;
			cube= remainder*remainder*remainder;
			sum=sum+cube;
			duplicate=duplicate/10;
		}
		if(sum==number)
		printf("%d is an armstrong number", number);
		else
		printf("%d is not an armstrong number", number);
		return 0;
	}
	
	//3 weird 
	int weird(int number)
	{
		int i, sum=0;
		for(i=1; i<number;i++)
		{
			if(number%i==0)
			sum=sum+i;
		}
		if(sum>number)
		printf("%d is a weird number", number);
		else 
		printf("%d is not a weird number", number);	
	}
	
	//4 perfect
	int perfect(int number)
	{
		int i, sum=0;
		for(i=1;i<number;i++)
		{
			if(number%i==0)
			sum=sum+i;
		}
		if(sum==number)
		printf("%d is perfect number", number);
		else 
		printf("%d is not a perfect number",number);
	}
	
	//5 automorphic
	int automorphic(int number)
	{
		int i,count=0, duplicate=number, square, remainder,power;
	//double p;
		while(duplicate>0)
		{
			count=count+1;
			duplicate=duplicate/10;
		}
		square=number*number;
		power=pow(10,count);
		remainder=square%power;
		if(remainder==number)
		printf("%d is an automorphic number", number);
		else
		printf("%d is not an automorphic number", number);
		return 0;
	} 
	
	//6 binary 
	int binary(int number)
	{
		int duplicate=number, remainder, digits_total=0, digits_counter=0;
		while(duplicate>0)
		{
			digits_total=digits_total+1;
			remainder=duplicate%10;
			if(remainder==0 || remainder==1)
			digits_counter=digits_counter+1;
			duplicate=duplicate/10;
		}
		if(digits_total==digits_counter)
		printf("%d is a binary number", number);
		else 
		printf("%d is not a binary number", number);
		return 0;
	}
	
	//7 karparekar
	int karparekar(int number)
	{
	int square=number*number;
	int duplicate=square;
	int remainder,sum=0;
	while(duplicate>0)
	{
		remainder=duplicate%10;
		sum=sum+remainder;
		duplicate=duplicate/10;
	}
	if(sum==number)
	printf("%d is a karparekar number", number);
	else 
	printf("%d is not a karparekar number", number);
}


   int main()
   {
   	//calls the guidance function which leads to all further processing 
   	guide();
   }
