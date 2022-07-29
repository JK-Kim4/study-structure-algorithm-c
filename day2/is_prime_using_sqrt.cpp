#include <stdio.h>
#include <math.h> //sqat 함수 사용을 위해 import

int is_prime_using_sqrt(int n)
{
	int i, sqrn;
	sqrn = (int)sqrt(n); // sqrt()함수는 double 형을 return하며, int형으로 형 변환할 경우 보다 작은 최대 정수값을 얻을 수 있다.
	for ( i = 2; i <= sqrn; i++ )
	{
		if( n % i == 0)
		{
			return false;
		}
	}
	return true;
}
