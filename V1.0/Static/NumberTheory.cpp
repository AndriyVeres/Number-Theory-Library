#include <iostream>
#include <math.h>
#include "NumberTheory.h"

namespace NumberTheory

{


bool if_perfect (int number)

{

/*
perfect number - number which equal to sum of his proper dividers
dividers_sum - sum of proper number dividers
if number = dividers sum number - perfect
*/

int dividers_sum = 1;


for (int i = 2;i<number;i++)
{
    if (number%i==0)
        {
        dividers_sum +=i;
        }
}


if(dividers_sum == number)
    {
        return 1;
    }
else return 0;

}

//good and work
bool if_friendly (int number_a, int number_b)

{

/*
friendly numbers - numbers which have the next features:
proper dividers sum of first number = second number;
proper dividers sum of second number = first number
*/

int dividers_sum = 1,i=2;


for (;i<number_a;i++)
{
    if (number_a%i==0)
        {
        dividers_sum +=i;
        }
}

if(dividers_sum == number_b)
    {

dividers_sum = 1;	

for (i=2;i<number_b;i++)
{
    if (number_b%i==0)
        {
        dividers_sum +=i;
        }
}

if(dividers_sum == number_a) return 1;
else                         return 0;

    }
else return 0;
    }
	
	

bool if_insufficient (int number)

{

/*
insufficient number - number, which greater, than sum of his proper dividers
dividers_sum        - sum of number proper dividers
i                   - variable for tacking over all numbers, that less then input number
*/

int dividers_sum = 1,i=2;


for (;i<number;i++)
{
    if (number%i==0)
        {
			
        dividers_sum +=i;
		
        }
}

if(dividers_sum < number)
    {
        return 1;
    }
else return 0;

}




bool if_relatively_prime (int number_a, int number_b)

{

/*
relatively prime numbers - numbers, that have the similar proper greater divider, that equal to 1
greatest_divider_a       - greatest proper divider of the input number_a
greatest_divider_b       - greatest proper divider of the input number_b
i                        - variable for tacking over all numbers, that less then input number
*/

if (number_a == 0 || number_b == 0 ) return 0;

int greatest_divider_a = 1,greatest_divider_b = 1;

//computation of number_a greatest proper  divider

for (int i = 2;i<number_a;i++)
{
    if (number_a%i==0)
        {
        greatest_divider_a = i;
        }
}

//computation of number_b greatest proper divider

for (int i = 2;i<number_b;i++)
{
    if (number_b%i==0)
        {
        greatest_divider_b = i;
        }
}

//relatively prime checking

if(greatest_divider_a == 1 && greatest_divider_b == 1)
    {
        return 1;
    }
else return 0;

   }
   
   
   

bool if_Armstrong (int number)

{

/*
Armstrong number - number, which equal to sum of his all digits raised to the power the number of digits in the number
n                - variable, that collect quantity of digits of number
Armstrong_sum    - sum of all digits raised to the power the number of digits in the number
i                - counter of digits in number
n                - additional variable for store number
*/

int n = 0, Armstrong_sum = 0,i = 1;//variables definition

//number buffer

n = number; 

//loop for checking how many digits in number

while(n>10)

      {
       i++;
       n = n/10;
       };
     n = number;//again number buffer

     while(n>10)//Armstrong number sum loop

      {
       //powering a digit to power i and sum with rounding float to int

       Armstrong_sum = Armstrong_sum + round (pow(n%10,i));

       n = n/10;
       };

       //powering the last from end number to i, or only 1 digit number to i with rounding float to int

       Armstrong_sum = Armstrong_sum + round (pow(n%10,i));


       //Armstrong number check

       if(Armstrong_sum == number) return 1;
       else                        return 0;
}







bool if_palindrom(int number)

{

/* 
palindrom               - number, that reads the same in both directions (from left to right and vise versa)
variable1, variable2    - boofer variables for left and right digits comparing
digits                  - counter digits of number
half_of_digits          - threshold for symmetric number separating
left_digit, right_digit - variables for comparing lefts and rights digits relative to the number center
*/

int variable1,variable2,digits = 1,half_of_digits,left_digit,right_digit;

//checking if number have only one digit

if(number<=10) 
	{
	return 0;
	};

//detecting how many digits in number

variable1 = number;

while (variable1>10)
	{
	variable1 = variable1/10;
	digits++;
	}

//number symmetry procedure

if(digits%2==0) half_of_digits=digits/2;
else            half_of_digits=(digits-1)/2;

//comparing one by one left and right digits relative to the number center

variable1=number;
variable2=number;

for(;digits!=half_of_digits;digits--)
	{
	right_digit = variable2%10;
	left_digit = variable1/round(pow(10,digits-1));

	if(right_digit == left_digit);
	else
		{ 
		return 0;  
	        }
	variable2 = variable2/10;
	variable1 = variable1%(int)pow(10,digits-1);
	
	}

//number - palindrom

return 1;
}

//check if input number - even number

bool if_even(int number)
{
if (number==0) return false;
else
	{
	if(number%2==0) return true;
	else            return false;
	}
}

}