// C program to find parity
// of an integer
# include <stdio.h>
# define bool int

/* Function to get parity of number n. It returns 1
if n has odd parity, and returns 0 if n has even
parity */
bool getParity(unsigned int n)
{
	bool parity = 0;
	while (n)
	{
        printf("%d %b\n",n,n);
		parity = !parity;
		// n	 = n & (n - 1);
            n >>= 1;

	}	
	return parity;
}

/* Driver program to test getParity() */
int main()
{
	unsigned int n = 8;
	printf("Parity of no %d = %s", n,
			(getParity(n)? "odd": "even"));
	printf("%d",(0 & 9));
	return 0;
}
