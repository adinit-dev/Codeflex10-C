====================================
				   Codeflex10-C Session 7
====================================

// 🧩 Q1
// Write a function that takes two integers as input and returns their sum.
// Use that return value in main() to display the result.

#include<stdio.h>

int sumnum( int a , int b );

int main(){
	int a, b  ;
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b : ");
	scanf("%d", &b);
	
	int result = sumnum( a , b);
	printf("sum : %d", result);

	return 0;	 
}	

int sumnum( int a , int b ){
	return a + b ;
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■
// 🧩 Q2
// Write a recursive function to calculate the factorial of a number.

#include<stdio.h>

int fact( int a );

int main(){
	int a  ;
	printf("enter a : ");
	scanf("%d", &a);
	
	int result = fact( a );
	printf("Factorial : %d", result);

	return 0;
}
	 
int fact( int a ){
	if ( a == 0 ){
		return 1;
	}
	else {
		return a * fact(a - 1);
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q3
// Write a recursive function to find the sum of digits of a number.

#include<stdio.h>

int sumdigit( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = sumdigit(n);
	printf("Sum : %d", result);		

	return 0;
}
	 
int sumdigit( int n ){
	if ( n == 0 ){
		return 0;
	}
	else{
		return n % 10 + sumdigit( n / 10);
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q4
// Write a recursive function to calculate n raised to the power m.

#include<stdio.h>

int power( int n, int m );

int main(){
	int n, m  ;
	printf("enter n : ");
	scanf("%d", &n);
	printf("enter m : ");
	scanf("%d", &m);
	
	int result = power( n , m );
	printf("power : %d", result);

	return 0;
}
	 
int power(int n, int m){
	if ( m == 0 ){
		return 1;
	}
	else{
		return n * power( n, m - 1);
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q5
// Write a recursive function to multiply two numbers without using * operator.

#include<stdio.h>

int prod( int n, int m);

int main(){
	int n , m ;
	printf("enter n : ");
	scanf("%d", &n);
	printf("enter m : ");
	scanf("%d", &m);
	
	int result = prod( n, m );
	printf("%d", result);
	
	return 0;
}

int prod( int n , int m){
	if ( m == 0 ){
		return 0;
	}
	else{
		return n + prod( n , m - 1);
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q6
// Write a recursive function to count the number of digits in a number.

#include<stdio.h>

int count_digit( int n );

int main(){
	int n ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = count_digit( n );
	printf("no. of digit : %d", result);
	
	return 0;
}

int count_digit( int n ){
	if ( n == 0 ){
		return 0;
	}
	else{
		return 1 + count_digit( n / 10 );
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q7
// Write a recursive function to calculate the sum of first n natural numbers.

#include<stdio.h>

int sum_natural( int n );

int main(){
	int n ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = sum_natural( n );
	printf("sum : %d", result);
	
	return 0;
}

int sum_natural( int n ){
	if( n == 0 ){
		return 0;
	}
	else{
		return n + sum_natural( n - 1 );
	}
}

// 🧩 Q8
// Write a recursive function to reverse a number.

#include<stdio.h>

int rev_num( int n, int rev );

int main(){
	int n ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = rev_num( n, 0 );
	printf("rev: %d", result);
	
	return 0;
}

int rev_num( int n , int rev ){
	if( n == 0 ){
		return rev ;
	}
	else{
		return  rev_num( n / 10, rev * 10 + n % 10);
	}
}

#■■■■■■■■■■■■■■■■■■■■■■■■■■

// 🧩 Q9
// Write a recursive function to generate the nth term of the Fibonacci series.

#include<stdio.h>

int fab(int n);

int main(){
	int n ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = fab(n);
	printf("%d", result);
	
	return 0;
}

int fab( int n ){
	if (n == 0){
		return 0;
	}
	else if ( n == 1){
		return 1;
	}
	else{
		return fab(n-1) + fab(n-2);
	}
}
#■■■■■■■■■■■■■■■■■■■■■■■■■■
// 🧩 Q10
// Write a recursive function to print numbers from 1 to n.

#include<stdio.h>

void printnum( int n );

int main(){
	int n ;
	printf("enter n : ");
	scanf("%d", &n);
	
	printnum(n);

	return 0;
}

void printnum( int n ){
	if (n == 0){
		return;
	}
	printnum(n - 1);
	printf("%d ", n);
}

//===================================
