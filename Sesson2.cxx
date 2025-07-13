====================================
  // CodeFlex10 – C Session 2
//   Conditional Statements Practice
====================================
// Q1 – Greater of two numbers
#include<stdio.h>
int main() {
    int a, b ;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);	
    if (a > b ){
        printf("first is greater ");
    }
    else if ( a == b ){
        printf("Equal");
    }
    else{
        printf("second is greater");
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q2 – Check even or odd
#include<stdio.h>
int main() {
    int n ;
    printf("Enter a num n to check even : ");
    scanf("%d", &n);
    if ( n % 2 == 0 ) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0 ;
}

-----------------------------------------------------------------------------
// Q3 – Divisible by 3, 5, both or none
#include<stdio.h>
int main() {
    int n ;
    printf("Enter a num : ");
    scanf("%d", &n);
    if ( n % 3 == 0 && n % 5 == 0) {
        printf("Divisible by both 3 and 5");
    }
    else if ( n % 3 == 0 ){
        printf("Divisble only by 3");
    }
    else if ( n % 5 == 0 ){
        printf("Divisble only by 5");
    }
    else {
        printf("Not divisble by both 3 n 5");
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q4 – Greatest of 3 numbers
#include<stdio.h>
int main() {
    int a , b , c ;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    if ( a > b && a > c ){
        printf("a is greatest");
    }
    else if ( b > c ){
        printf("b is greatest");
    }
    else {
        printf("c is greatest");
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q5 – Positive, Negative or Zero
#include<stdio.h>
int main() {
    int a  ;
    printf("Enter a : ");
    scanf("%d", &a);
    if ( a > 0 ){
        printf("positive");
    }
    else if ( a == 0){
        printf("Zero");
    }
    else {
        printf("Negative");
    }
    return 0;
}
-----------------------------------------------------------------------------

// Q6 – Leap year or not
#include<stdio.h>
int main() {
    int y  ;
    printf("Enter year : ");
    scanf("%d", &y);
    if (( y % 400 == 0 ) || (y %4 == 0 && y % 100 != 0)) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}
-----------------------------------------------------------------------------

// Q7 – Absolute value
#include<stdio.h>
int main() {
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
    if ( n >= 0 ) {
        printf("%d", n);
    }
    else {
        printf("%d", -n);
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q8 – Simple calculator
#include<stdio.h>
int main() {
    int a, b  ;
    char op ;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf(" enter operator : ");
    scanf(" %c", &op);
    if ( op == '+'){
        printf("%d", a + b );
    }
    else if ( op == '-'){
        printf("%d", a - b );
    }
    else if ( op == '*'){
        printf("%d", a * b );
    }
    else if ( op =='/'){
        printf("%d", a / b );
    }
    else{
        printf("invalid operator");
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q9 – Character type: uppercase/lowercase/other
#include<stdio.h>
int main() {
    char ch ;
    printf(" enter ch : ");
    scanf(" %c", &ch);
    if ( ch >= 'A' && ch <= 'Z' ){
        printf("\nUppercase");
    }
    else if ( ch >= 'a' && ch <= 'z' ){
        printf("\nLowercase");
    }
    else {
        printf("\nNot Character");
    }
    return 0;
}

-----------------------------------------------------------------------------
// Q10 – Grade based on marks
#include<stdio.h>
int main() {
    int mark ;
    printf("Enter Marks( 0 - 100) : ");
    scanf("%d", & mark);
    if (mark <=100 && mark >= 0){
        if ( mark >= 90){
            printf("A+");
        }
        else if ( mark >= 80){
            printf("A");
        }
        else if ( mark >= 70 ){
            printf("B+");
        }
        else if ( mark >= 60){
            printf("B");
        }
        else if ( mark >= 50){
            printf("C");
        }
        else if ( mark >= 40){
            printf("D");
        }
        else{
            printf("Fail");
        }
    }
    else {
        printf("Invalid input");
    }
    return 0;
}

====================================