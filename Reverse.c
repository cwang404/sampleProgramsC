#include <stdio.h>

int while_reverse(int num);

int main() {
    int num, reverse1, reverse2;

    //User would input the number
    printf("\nEnter any number:");
    scanf_s("%d", &num);

    //Calling user defined functions to perform reverses
    reverse1 = while_reverse(num);
    printf("\nReversed number using while loop is: %d", reverse1);
    reverse2 = reverse_function(num);
    printf("\nReversed number using recursion is: %d", reverse2);

    system("pause\n");
    return 0;
}

int while_reverse(int num) {            //take num = 1234 as example
    int rem, reverse_num = 0;
    while (num >= 1)
    {
        rem = num % 10;                         //1234%10, rem =4
        reverse_num = reverse_num * 10 + rem;   //0*10 + 4, reverse_num = 4
        num = num / 10;                         //num = 123
    }
    return reverse_num;
}

int sum = 0, rem;
reverse_function(int num) {
    if (num) {
        rem = num % 10;
        sum = sum * 10 + rem;
        reverse_function(num / 10);
    }
    else
        return sum;
    return sum;
}

