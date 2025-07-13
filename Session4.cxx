====================================
					Codflex10- C Session 4 
====================================

Q1. Print all even numbers from 1 to n
#include<stdio.h>
int main(){
    int n, i;
    printf("enter n : ");
    scanf("%d", &n);
    for ( i = 1 ; i <= n ; i++){
        if ( i % 2 == 0 ){
            printf("%d\t", i );
        }
    }
    return 0;
}

----------------------------------------------------------------------------

Q2. Print all odd numbers from 1 to n
#include<stdio.h>
int main(){
    int n, i;
    printf("enter n : ");
    scanf("%d", &n);
    for ( i = 1 ; i <= n ; i++){
        if ( i % 2 != 0 ){
            printf("%d\t", i );
        }
    }
    return 0;
}
----------------------------------------------------------------------------

Q3. Sum of all even numbers from 1 to n
#include<stdio.h>
int main(){
    int n, i , sum = 0;
    printf("enter n : ");
    scanf("%d", &n);
    for ( i = 1 ; i <= n ; i++){
        if ( i % 2 == 0 ){
            sum += i;
        }
    }
    printf("Total sum is %d", sum);
    return 0;
}
#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇



Q4. Sum of all odd numbers from 1 to n
#include<stdio.h>
int main(){
    int n, i , sum = 0;
    printf("enter n : ");
    scanf("%d", &n);
    for ( i = 1 ; i <= n ; i++){
        if ( i % 2 != 0 ){
            sum += i;
        }
    }
    printf("Total sum is %d", sum);
    return 0;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

Q5. Find the sum of digits of a number
#include<stdio.h>
int main(){
    int n, digit, sum = 0;
    printf("enter n : ");
    scanf("%d", &n);
    while ( n > 0 ) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    printf("Total sum is %d", sum );
    return 0;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

Q6. Reverse the digits of a number
#include<stdio.h>
int main(){
    int a, rev, digit;
    printf("enter a :");
    scanf("%d" , &a);
    
    rev = 0;
    while (a > 0){
        digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }
    printf("Reversed a : %d", rev);
    return 0;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

Q7. Check if a number is Palindrome

#include<stdio.h>
int main(){
    int a, rev, digit, original;
    printf("enter a :");
    scanf("%d" , &a);
    
    rev = 0;
    original = a;
    while (a > 0){
        digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }
    if (original == rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

Q8. Find factorial of a number using loop
#include<stdio.h>
int main(){
    int a, i, fact;
    printf("enter a :");
    scanf("%d" , &a);
    
    fact = 1;
    for (i = 1; i <= a; i++){
        fact = i * fact;
    }
    printf("Factorial : %d", fact);
    return 0;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

Q9. Print this pattern using *
#include<stdio.h>

int main(){
	int a, i ,  fact ;
	
	printf("enter a :");
	scanf("%d" , &a );
	
	fact = 1;
	for ( i = 1 ; i <= a ; i++){
		fact = i * fact ;
	}
	printf("Factorial : %d", fact);
	return 0 ;
}

#◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
	Q10. Print right-angled triangle pattern using * (stars)

For a = 6

*
**
***
****
*****
******

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
#===================================