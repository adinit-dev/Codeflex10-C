====================================
				   Codeflex10-C Session 3
===================================
// Q1 - Check if character is Vowel, Consonant, or Not Alphabet
#include<stdio.h>
int main() {
	char x;
	printf("Enter input : ");
	scanf("%c", &x);

	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
		    x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
			printf("Vowel");
		} else {
			printf("Consonant");
		}
	} else {
		printf("Not Alphabet");
	}
	return 0;
}
################################

// Q2 - Check if input is integer, and then whether it is even or odd
#include<stdio.h>
int main() {
	int n;
	int result;
	printf("Enter input: ");
	result = scanf("%d", &n);

	if (result == 1) {
		if (n % 2 == 0) {
			printf("Even");
		} else {
			printf("Odd");
		}
	} else {
		printf("Invalid number");
	}
	return 0;
}

################################

// Q3 - Check character type: Uppercase, Lowercase, Digit, or Other
#include<stdio.h>
int main() {
	char ch;
	printf("Enter input: ");
	scanf(" %c", &ch);

	if (ch >= 'a' && ch <= 'z') {
		printf("Lowercase");
	} else if (ch >= 'A' && ch <= 'Z') {
		printf("Uppercase");
	} else if (ch >= '0' && ch <= '9') {
		printf("Digit");
	} else {
		printf("something else");
	}
	return 0;
}
################################
// Q4 - Find max among 3 numbers
#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);

	if (a > b) {
		if (a > c)
			printf("A is max");
		else
			printf("C is max");
	} else {
		if (b > c)
			printf("B is max");
		else
			printf("C is max");
	}
	return 0;
}
################################
// Q5 - Compare two numbers
#include<stdio.h>
int main() {
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	if (a > b) {
		printf("A is greater");
	} else if (a < b) {
		printf("B is greater");
	} else {
		printf("Equal");
	}
	return 0;
}
################################

// Q6 - Check if number is divisible by 7
#include<stdio.h>
int main() {
	int a;
	printf("Enter a: ");
	scanf("%d", &a);

	if (a % 7 == 0) {
		printf("a is multiple of 7");
	} else {
		printf("Not multiple of 7");
	}
	return 0;
}

################################

// Q7 - Check if sum of two numbers is odd or even
#include<stdio.h>
int main() {
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	if ((a + b) % 2 == 0) {
		printf("Even sum");
	} else {
		printf("Odd Sum");
	}
	return 0;
}

################################

// Q8 - Check if number is a 3-digit number
#include<stdio.h>
int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	if (n >= 100 && n <= 999) {
		printf("Is it three digit num : Yes");
	} else {
		printf("Is it three digit num : No");
	}
	return 0;
}
################################
// Q9 - Check sign and parity (positive/negative and odd/even)
#include<stdio.h>
int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	if (n > 0) {
		if (n % 2 == 0)
			printf("Positive Even");
		else
			printf("Positive Odd");
	} else if (n < 0) {
		if (n % 2 == 0)
			printf("Negative Even");
		else
			printf("Negative Odd");
	} else {
		printf("Zero");
	}
	return 0;
}	

################################

// Q10 - Print multiplication table of a number
#include<stdio.h>
int main() {
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}

====================================