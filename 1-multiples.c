/*
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int find_sum(int top)
{
    int sum;
    int i;

    sum = 0;
    i = 0;
    while (i < top)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
        i++;
    }
    return (sum);
}

int main(void)
{
    int sum; 

    sum = find_sum(1000);
    printf("The sum of all the multiples of 2 or 5 below 1000 is %d\n", sum);
    return (0);
}