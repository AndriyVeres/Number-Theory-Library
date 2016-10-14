# Number Theory Version 1.0
                                            
This is a library, that contains a some functions from a mathematical number theory. Library have static and dynamic versions.    
                                             
## Function description

**namespace: NumberTheory**

### 1) bool if_perfect (int number);

Returns logical **TRUE** if input number - perfect number.

*Perfect number - number, which equal to sum of his proper dividers.*


### 2) bool if_friendly (int number_a, int number_b);

Returns logical **TRUE** if input numbers - friendly numbers.

Friendly numbers - numbers which have the **next features**:
1.  Proper dividers sum of first number = second number;
2.  Proper dividers sum of second number = first number.


### 3) bool if_in_sufficient (int number);

Returns logical **TRUE** if input number - insufficient number.

*Insufficient number - number, which greater, than sum of his proper dividers.*


### 4) bool if_relatively_prime (int number_a, int number_b);

Returns logical **TRUE** if input numbers - relatively prime numbers.

*Relatively prime numbers - numbers, that have the similar proper greater divider, that equal to 1.*


### 5) bool if_Armstrong (int number);

Returns logical **TRUE** if input number - Armstrong`s number.

*Armstrong`s number - number, which equal to sum of his all digits raised to the power the number of digits in the number.*


### 6) bool if_palindrom (int number);

Returns logical **TRUE** if input number - palindrom number.

*Palindrom - number, that reads the same in both directions (from left to right and vise versa).*

### 7) bool if_even (int number);

Returns logical **TRUE** if input number - even number.
