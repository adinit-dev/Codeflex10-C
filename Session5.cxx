====================================
 				  Codeflex10-C Session 5
====================================

// Question1:
// Take an integer input and calculate both the sum of its digits and the number of digits.

#include<stdio.h>

int main(){
	int n, i, digit, sum, count ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	sum = 0;
	count = 0;
	while( n > 0 ){
		digit = n % 10 ;
		count += 1;
		sum += digit ;
		n = n / 10 ;
	}
	printf("Sum : %d\n", sum );
	printf("Count : %d", count);
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

// Que 2:
// Take an integer input. Check whether the number is a palindrome or not.

#include<stdio.h>

int main(){
	int n, i, digit, rev, original ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	original = n ;
	rev = 0 ;
	
	while ( n > 0 ){
		digit = n % 10 ;
		rev = rev * 10 + digit ;
		n = n / 10 ;
	}
	printf("Reverse : %d\n", rev );
	
	if ( original == rev ){
		printf("Palindrome ");
	}
	
	else {
		printf("Not a Palindrome");
	}
	

	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧


// Question 3:
// Take a number as input and count how many even and how many odd digits it contains.

#include<stdio.h>

int main(){
	int n , digit , evencount, oddcount  ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	evencount = 0;
	oddcount = 0 ;
	
	while( n > 0 ){
		digit = n % 10 ;
		n = n / 10 ;
		if ( digit % 2 == 0 ){
			evencount += 1;
		}
		
		else{
			oddcount += 1;
		}
	}
	printf("No. of even num : %d\n", evencount);
	printf("No. of odd num : %d\n", oddcount );
	
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 4:
// Take a number as input and find the product of all its digits, ignoring any 0.

#include<stdio.h>

int main(){
	int n , digit , prod  ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	prod = 1;
	while( n> 0){
		digit = n % 10;
		n = n /10;
		if ( digit == 0 ){
			continue ;
		}
		
		else{
			prod = prod * digit ;
		}
	}
	printf("Product : %d", prod);
	
	
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 5:
// Take a number, find the product of its digits (excluding 0) and check if the product is a palindrome.

#include<stdio.h>

int main(){
	int n , digit , prod , rev , original, digit1 ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	rev = 0 ;
	prod = 1;
	
	while( n > 0 ){
		digit = n % 10 ;
		n = n / 10 ;
		prod = prod * digit ;
	}
	printf(" Product : %d\n", prod);
	
	original = prod;
	
	while ( prod > 0 ){
		digit1 = prod % 10 ;
		rev = rev * 10 + digit1 ;
		prod = prod / 10 ;
	}
		
	if ( original == rev ){
		printf("Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
	return 0;
}	

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 6:
// Take a number, find the sum of its digits and check if the sum is a palindrome.

#include<stdio.h>

int main(){
	int n , digit , sum  ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	sum = 0 ;
	while( n > 0 ){
		digit = n % 10 ;
		sum += digit ;
		n = n / 10 ;
	}
	printf("Sum : %d\n", sum );

	
	int rev = 0 ;
	int original = sum ;
	
	while ( original > 0 ){
		digit = original % 10 ;
		rev = rev * 10 + digit ;
		original = original / 10 ;
	}
	printf("Reversed : %d\n", rev);
	
	if ( rev == sum ){
		printf("Sum is palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 7:
// From a number, calculate:
// 1. Sum of digits at even positions
// 2. Sum of digits at odd positions
// 3. Count of even position digits
// 4. Count of odd position digits

#include<stdio.h>

int main(){
	int n , digit , evensum, oddsum, evencount, oddcount, pos;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	evensum = 0;
	oddsum = 0;
	evencount = 0;
	oddcount = 0;
	pos = 1;
	
	while ( n > 0 ){
		digit = n % 10 ;
		
		if ( pos % 2 == 0){
			evensum += digit ;
			evencount+=1;
		}
		else{
			oddsum += digit ;
			oddcount += 1;
		}
		n = n / 10;
		pos +=1 ;
	}
	printf("Sum of num at even pos : %d\n", evensum);
	printf("Sum of num at odd pos : %d\n", oddsum);
	printf("Num of odd pos :%d\n", oddcount);
	printf("Num of even pos : %d\n" , evencount);
	
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 8:
// Input a number. For each digit from last to first, print that many stars on one line.

#include<stdio.h>

int main(){
	int n , digit,  i ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	while ( n > 0 ){
		digit = n % 10 ;
		
		for( i = 1 ; i <= digit ; i++){
			printf("*");
		}
		printf("\n");
		n = n / 10 ;
	}
	
	return 0;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 9 :
// Take a number and print a triangle star pattern of that many lines.

#include<stdio.h>

int main(){
	int a, i, j ;

	printf("enter a :");
	scanf("%d" , &a );
	
	for ( i = 1; i <= a ; i++ ){
		for ( j = 1; j <= i ; j ++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0 ;
}

#♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧♧

//Que 10:
// Input a number. For each digit (from last to first), print that many stars on one line.	
#include<stdio.h>

int main(){
	int n , digit,  i ;
	
	printf("enter n : ");
	scanf("%d", &n );
	
	while ( n > 0 ){
		digit = n % 10 ;
		
		for( i = 1 ; i <= digit ; i++){
			printf("*");
		}
		printf("\n");
		n = n / 10 ;
	}
	
	return 0;
}

====================================