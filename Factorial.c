/*
#include<stdio.h>
int find_factorial(int); //prototype
int main()
{
    int num, fact;
    //Ask user for the input and store it in num
    printf("\nEnter any integer number:");
    scanf_s("%d", &num);

    //Calling our user defined function
    fact = find_factorial(num);

    //Displaying factorial of input number
    printf("\nfactorial of %d is: %d", num, fact);
    return 0;
}
int find_factorial(int n)
{
    //Factorial of 0 is 1 
    if (n == 0) //exit condition
        return(1);

    //Function calling itself: recursion
    return(n * find_factorial(n - 1));
}
*/
/*
#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Enter an integer: ");
    scanf_s("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}
*/