/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/

#include <stdio.h>
#include <stdlib.h>

size_t	ft_sqrt(size_t nb)
{
	size_t	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= nb)
		i++;
	return (i - 1);
}

int	is_prime(size_t num)
{
	size_t	i;

    if (num < 2)
        return (0);
    if (num == 2)
        return (1);
    if (num % 2 == 0)
        return (0);
    i = 3;
    while (i <= ft_sqrt(num))
    {
        if (num % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

size_t  largest_prime_factor(size_t num)
{
    size_t  largest_factor;
    size_t  i;
    size_t  sqrt_num;

    largest_factor = 0;
    while (num % 2 == 0)
    {
        largest_factor = 2;
        num /= 2;
    }
    i = 3;
    sqrt_num = ft_sqrt(num);
    while (i <= sqrt_num)
    {
        while (num % i == 0)
        {
            largest_factor = i;
            num /= i;
            sqrt_num = ft_sqrt(num);
        }
        i += 2;
    }
    if (num > 2)
        largest_factor = num;
    return (largest_factor);
}

int main(void)
{
    size_t  num;
    size_t  largest_factor;

    num = 13195;
    largest_factor = largest_prime_factor(num);
    printf("The largest prime factor of %ld is %ld\n", num, largest_factor);
    return (0);
}
