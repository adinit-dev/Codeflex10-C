====================================
      			 Codeflex10-C Session 9
====================================


// Q1. Take 5 elements from the user and store them in an array. 
// Then print the array in this format: {elem1, elem2, elem3, elem4, elem5}

#include<stdio.h>

int main(){
	int i;
	int arr[5]; 

	for(i = 0; i < 5; i++){
		printf("Enter element %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Array elements are : {");
	for(i = 0; i < 5; i++){
		printf("%d", arr[i]);
		if(i != 4){
			printf(", ");
		}
	}
	printf("}");

	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q2. Take 10 elements from the user and print only the even elements.

#include<stdio.h>

int main(){
	int arr[10];
	int i;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Even elements are: ");
	for(i = 0; i < 10; i++){
		if(arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q3. Take 10 elements from the user and count how many are odd.

#include<stdio.h>

int main(){
	int arr[10];
	int i, count = 0;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 10; i++){
		if(arr[i] % 2 != 0){
			count++;
		}
	}

	printf("Total odd numbers: %d", count);
	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q4. Take 10 elements from the user and find the maximum element.

#include<stdio.h>

int main(){
	int arr[10];
	int i, max;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for(i = 1; i < 10; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	printf("Maximum: %d", max);
	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q5. Take 10 elements from the user and print their total sum.

#include<stdio.h>

int main(){
	int arr[10];
	int i, sum = 0;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 10; i++){
		sum += arr[i];
	}

	printf("Total sum: %d", sum);
	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q6. Take 10 elements from the user and find the average of all elements.

#include<stdio.h>

int main(){
	int arr[10];
	int i, sum = 0;
	float avg;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 10; i++){
		sum += arr[i];
	}

	avg = sum / 10.0;
	printf("Total sum: %d\n", sum);
	printf("Average: %.2f", avg);

	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡

// Q7. Take 10 elements from the user and find the minimum element.

#include<stdio.h>

int main(){
	int arr[10];
	int i, min;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	for(i = 1; i < 10; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}

	printf("Minimum: %d", min);
	return 0;
}	

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q8. Take 10 elements from the user and count how many elements are greater than 50.

#include<stdio.h>

int main(){
	int arr[10];
	int i, count = 0;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 10; i++){
		if(arr[i] > 50){
			count++;
		}
	}

	printf("Number of elements greater than 50: %d", count);
	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡
// Q9. Take 10 elements from the user and count how many are divisible by 3.

#include<stdio.h>

int main(){
	int arr[10];
	int i, count = 0;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 10; i++){
		if(arr[i] % 3 == 0){
			count++;
		}
	}

	printf("Number of elements divisible by 3: %d", count);
	return 0;
}

#♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡♡

// Q10. Take 10 elements from the user and print only the prime numbers.

#include<stdio.h>

int main(){
	int arr[10];
	int i, j, isPrime;

	for(i = 0; i < 10; i++){
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Prime numbers: ");
	for(i = 0; i < 10; i++){
		if(arr[i] <= 1){
			continue;
		}
		isPrime = 1;
		for(j = 2; j * j <= arr[i]; j++){
			if(arr[i] % j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}

====================================