====================================
                 Codeflex10-C Session 1 
====================================

// Q1 : Write a program to print your name, age, and city using printf().

#include<stdio.h>
int main( ){
    printf("Name : Aditya Singh\n");
    printf("Age : 20\n");
    printf("City : Gaziabad\n");
    
    return 0;
}

// Q2 : Take two integer inputs from the user and print their sum.
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    
    printf("%d", a + b);

    return 0;
}	

//Q3 : Declare an integer, a float, and a string. Print them using printf().

#include<stdio.h>

int main() {
    int a = 5;
    float b = 4.1;
    char c[] = "ram";

    printf("%d\n", a);     // prints integer
    printf("%f\n", b);     // prints float
    printf("%s\n", c);     // prints string

    return 0;
}

// Q4 : Take length and breadth of a rectangle as input, calculate its area, and print the result.

#include<stdio.h>

int main() {
    int l, b;

    printf("enter l : ");
    scanf("%d", &l);

    printf("enter b : ");
    scanf("%d", &b);

    printf("Area of rectangle is %d\n", l * b);

    return 0;
}

// Q
//5 : Take temperature in Celsius as input and convert it to Fahrenheit using the formula:

> F = (9/5) × C + 32

#include<stdio.h>

int main() {
    float F, C;

    printf(" Enter temp is °C : ");
    scanf("%f", &C);

    F = (9.0 / 5) * C + 32;  // use 9.0 to avoid integer division
    printf("Temp in °F is : %f\n", F);

    return 0;
}


//Q6: Take a character as input and print its ASCII value.

#include<stdio.h>

int main() {
    char ch;

    printf(" Enter ch : ");
    scanf("%c", &ch);

    printf("%d", ch);  // ASCII value of the character

    return 0;
}

// Q7 : Take three float marks as input and print their average.

#include<stdio.h>

int main() {
    float a, b, c;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b : ");
    scanf("%f", &b);

    printf("Enter c : ");
    scanf("%f", &c);

    printf("Average Marks %f\n", (a + b + c) / 3);

    return 0;
}

// Q8 : Swap two integers using a third (temporary) variable and print values after swapping.

#include<stdio.h>

int main() {
    int a = 5, b = 8;
    int x;

    x = a;  // store original a
    a = b;  // assign b to a
    b = x;  // assign stored a to b

    printf("%d \n", a);  // prints 8
    printf("%d\n", b);   // prints 5

    return 0;
}

// Q9 : Take four integers a, b, c, d as input.
Print the result of the expression:

> (a + b) * c - d

#include<stdio.h>

int main() {
    int a, b, c, d;

    printf(" Enter a : ");
    scanf("%d", &a);

    printf(" Enter b : ");
    scanf("%d", &b);

    printf(" Enter c : ");
    scanf("%d", &c);

    printf(" Enter d : ");
    scanf("%d", &d);

    printf("%d\n", (a + b) * c - d);

    return 0;
}

//Q10 : Print the following pattern using loops:

* 
* * 
* * * 
* * * *

#include<stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


====================================