#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int res;
    for (int i = 0; i < n; i++){
	res += i+1;
    }
    return res;
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1){
	printf("Enter value more than 0");
	return 1;
    }
    int sum = sum_to_n(n);
    printf("Result: %d", sum);
    printf("\n");
    return 0;
}
