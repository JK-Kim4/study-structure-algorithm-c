#include <stdio.h>

int is_prime(int n)
{
	int i;
	for ( i = 2; i <= n-1; i++)
	{
		if( n % i == 0 ) 
			return false; // 나누어 떨어지는 수가 있을 경우 false(0) return
	}
	return true; //1
}
