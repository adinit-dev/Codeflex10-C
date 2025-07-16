====================================
				  Codeflex10-C Session 6
====================================

// Q1: Create a function named `printHello` that prints "Hello World".
// Call the function 5 times from `main()` using a loop.

#include<stdio.h>

void printHello();

int main(){
	int i ;
	for ( i = 1 ; i <= 5 ; i++){
		printHello();
	}
}

void printHello() {
	printf("Hello World\n");
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q2: Create a function that takes two integers as parameters and prints their sum.
// Call this function from main() with any two values.

#include<stdio.h>

void printsum(int x , int y );

int main(){
	int a , b  ;
	
	printf("Enter a : ");
	scanf("%d", &a);
	
	printf("Enter b : ");
	scanf("%d", &b);
	
	printsum( a , b );

	return 0;
}

void printsum( int x , int y){
	printf(" sum : %d", x + y  );
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q3: Modify the previous question to return the sum instead of printing inside the function.

#include<stdio.h>

int sum(int x , int y );

int main(){
	int a , b  ;
	
	printf("Enter a : ");
	scanf("%d", &a);
	
	printf("Enter b : ");
	scanf("%d", &b);

	int result = sum(a, b );
	printf("%d", result );

	return 0;
}

int sum( int x , int y){
	return x + y ;
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q4: Create a function that takes two integers and returns their product.

#include<stdio.h>

int prod( int x , int y );

int main(){
	int a , b ;
	printf("enter a : ");
	scanf("%d", &a);
	
	printf("enter b : ");
	scanf("%d", &b);
	
	int result = prod( a, b );
	printf("product : %d", result);
	
	return 0;
}

int prod ( int x , int y ) {
	return x * y ;
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q5: Create a function that takes one integer and prints whether it's even or odd.

#include<stdio.h>

void evencheck( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	evencheck( n );

	return 0;
}

void evencheck( int n ){
	if ( n % 2 == 0){
		printf("Even");
	} else {
		printf("Odd");
	}
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q6: Create a function that checks whether a number is prime.
// Return 1 if prime, else return 0.

#include<stdio.h>

int primecheck( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = primecheck( n );
	printf("%d", result);
	
	return 0;
}

int primecheck( int n ){
	int i ;
	for ( i = 2 ; i < n ; i ++ ){
		if ( n % i == 0 ){
			return 0 ;
		}		
	}
	return 1;
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q7: Create a function that takes a number and prints its multiplication table up to 10.

#include<stdio.h>

int table( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	table( n );
	
	return 0;
}

int table( int n ){
	int i ;
	for (i = 1 ; i <= 10 ; i ++ ){
		printf(" %d ×  %d =  %d\n", i , n , n * i);
	}
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q8: Create a function to calculate the factorial of a number (using void return type).

#include<stdio.h>

int fact( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	fact ( n );
	return 0;
}

int fact( int n ){
	int fact = 1 ;
	int i ;
	for( i = n; i >= 1 ; i-- ){
		fact = fact * i;
	}
	printf("%d ", fact );
}

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q9: Modify the previous factorial code to return the factorial instead of printing inside the function.

#include<stdio.h>

int fact( int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	int result = fact ( n );
	printf("%d", result);
	
	return 0;
}

int fact( int n ){
	int fact = 1 ;
	int i ;
	for( i = n; i >= 1 ; i-- ){
		fact = fact * i;
	}
	return fact ;
}	

#●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●

// Q10: Create a function that takes an integer n and prints a right-angled triangle pattern of stars.

#include<stdio.h>

void printstar(int n );

int main(){
	int n  ;
	printf("enter n : ");
	scanf("%d", &n);
	
	printstar(n);
	
	return 0;	 
}

void printstar( int n ){
	int i , j ;
	char ch = '*';
	for ( i = 1 ; i <= n ; i++){
		for ( j = 1 ; j <= i ; j++){
			printf("%c", ch );
		}
		printf("\n");
	}
}

====================================