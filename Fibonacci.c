/*
#include<stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1 , next_term, i;

    //Ask user to input number of terms 
    printf("Enter the number of terms:\n");
    scanf_s("%d", &count);

    printf("First %d terms of Fibonacci series:\n", count);
    for (i = 0; i < count; i++)
    {
        if (i <= 1)
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        printf("%d\n", next_term);
    }

    return 0;
}

*/


#include<stdio.h>
int fibonacci_series(int);
int main()
{
   int count, c = 0, i;
   printf("Enter number of terms:");
   scanf("%d",&count);

   printf("\nFibonacci series:\n");
   for ( i = 1 ; i <= count ; i++ )
   {
      printf("%d\n", fibonacci_series(c));
      c++;
   }

   return 0;
}
int fibonacci_series(int num)
{
   if ( num == 0 ) //exit condition
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return ( fibonacci_series(num-1) + fibonacci_series(num-2) );
}
