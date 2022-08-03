#include <stdio.h>

int global; // static variable (global variable)

void main()
{
	static int staticvar = 10; //static variable

	char* dynamic = new char[10]; //dynamic variable 생성
	//logic...
	delete [] dynamic; // dynavic variable 반납

	int local_var1 = 0; //automatic variable (local_var1) 생성
	if(local_var1 == 0 )
	{
		int local_var2; //automatic variable (local_var2) 생성
		local_var2 = 0;
	} //automatic variable (local_var2) 제거
} //automatic variable (local_var1) 제거
