====================================
				    Codeflex10-C Session 8
====================================


// Q1: Print the first 'n' terms of the Fibonacci series using recursion

#include<stdio.h>

int fab(int n);

int main(){
	int n, i;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	for ( i =0 ; i < n; i++){
		printf("%d  ", fab(i));
	}
	
	return 0;
}

int fab( int n){
	if ( n == 0 ){
		return 0;
	} 
	else if(n == 1){
		return 1;
	}
	else{
		return fab(n-1) + fab(n-2);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q2: Return the nth Fibonacci number using recursion

#include<stdio.h>

int fab(int n);

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int result = fab(n);
	printf("%d  ", result);
	
	return 0;
}

int fab( int n){
	if ( n == 0 ){
		return 0;
	} 
	else if(n == 1){
		return 1;
	}
	else{
		return fab(n-1) + fab(n-2);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q3: Check if a number is a palindrome using recursion

#include<stdio.h>

int revnum(int n, int rev);

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int original = n ;
	int result = revnum(n, 0);
	
	if ( original == result){
		printf("Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
	return 0;
}

int revnum(int n, int rev){
	if ( n == 0 ){
		return rev;
	}
	else{
		return revnum(n/10, rev *10 + n%10);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q4: Find sum of digits and then digital root using recursion

#include<stdio.h>

int sumdigit(int n );
int digitroot(int n);

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int result = sumdigit(n);
	printf("sum: %d\n", result);
	
	int result1 =  digitroot(sumdigit(n));
	printf("Finalsum : %d", result1);
	
	return 0;
}

int sumdigit(int n){
	if (n<=0){
		return 0;
	}
	else{
		return n%10 + sumdigit(n/10);
	}
}

int digitroot(int n){
	if( n < 10){
		return n;
	}
	else {
		return  digitroot(sumdigit(n));
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q5: Count how many times digit 5 appears in a number using recursion

#include<stdio.h>

int countdigit(int n);

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int result = countdigit(n);
	printf("%d", result);
	
	return 0;
}

int countdigit(int n){
	if (n == 0){
		return 0;
	}
	
	int digit = n % 10;
	if (digit == 5){
		return 1 + countdigit(n / 10);
	}
	else{
		return countdigit(n / 10);
	}
}
#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q6: Find the sum of even digits in a number using recursion

#include<stdio.h>

int evensum(int n );

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int result = evensum(n);
	printf("evensum : %d", result);
	
	return 0;
}

int evensum(int n ){
	if (n == 0){
		return 0;
	}
	
	int digit = n % 10;
	if (digit % 2 == 0){
		return digit + evensum(n / 10);
	}
	else{
		return evensum(n / 10);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q7: Count the number of odd digits in a number using recursion

#include<stdio.h>

int odddigit(int n );

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	int result = odddigit(n);
	printf("no. of odd digit : %d", result);
	
	return 0;
}

int odddigit(int n ){
	if (n == 0){
		return 0;
	}
	
	int digit = n % 10;
	if (digit % 2 != 0){
		return 1 + odddigit(n / 10);
	}
	else{
		return odddigit(n / 10);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q8: Reverse a number using recursion (print reverse)

#include<stdio.h>

void revnum(int n );

int main(){
	int n ;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	revnum(n);
	
	return 0;
}

void revnum(int n  ){
	if ( n > 0){
		printf("%d", n % 10 );
		revnum(n / 10);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q9: Find sum of even and odd digits separately using recursion

#include<stdio.h>

int evensum(int n);
int oddsum(int n);

int main(){
	int n;
	
	printf("Enter n : ");
	scanf("%d", &n);
	
	int result1 = evensum(n);
	int result2 = oddsum(n);
	
	printf("sum of even : %d\n", result1);
	printf("sum of odd : %d", result2 );
	
	return 0;
}

int evensum(int n){
	if( n == 0){
		return 0;
	}
	int digit = n % 10;
	if (digit % 2 == 0){
		return digit + evensum(n / 10);
	}
	else{
		return evensum(n / 10);
	}
}

int oddsum(int n){
	if (n == 0){
		return 0;
	}
	int digit = n % 10;
	if (digit % 2 != 0){
		return digit + oddsum(n / 10);
	}
	else{
		return oddsum(n / 10);
	}
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Q10: Count number of zeroes in a number using recursion

#include<stdio.h>

int countzero(int n);

int main(){
	int n;
	
	printf("Enter n : ");
	scanf("%d", &n);
	
	int result1 = countzero(n);
	
	printf("no. of zero : %d\n", result1);

	return 0;
}

int countzero(int n){
	if (n == 0){
		return 0;
	}
	int digit = n % 10;
	if (digit == 0){
		return 1 + countzero(n / 10);
	}
	else{
		return countzero(n / 10);
	}
}

====================================