# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long sum(int* a, int n)
{
	long long summ = 0;

	
	for (int i = 0; i < n; i++)
	{
		summ += a[i];


	}
	
	return summ;
}

int main(void)
{
	int k = 10;
	int* a= &k;
	int n = 2;
	printf("%d", sum(a, n));
	

	


}


