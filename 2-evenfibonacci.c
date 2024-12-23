/*
Each new term in the Fibonacci sequence is generated by
adding the previous two terms.
By starting with $1$ and $2$, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
By considering the terms in the Fibonacci sequence whose values do
not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>

int	fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (fibonacci(index - 2) + fibonacci(index - 1));
}

size_t	even_sum(int top)
{
	size_t	sum;
	int		i;

	sum = 0;
	i = 0;
	while (fibonacci(i) <= top)
	{
		if (fibonacci(i) % 2 == 0)
			sum += fibonacci(i);
		i++;
	}
	return (sum);
}

int	main(void)
{
	int		top;
	size_t	sum;

	top = 4000000;
	sum = even_sum(top);
	printf("The sum of the even-valued terms is: %ld\n", sum);
    return (0);
}
