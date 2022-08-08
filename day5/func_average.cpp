int average1(int m[][3]) //int average(int *m[3], int n)과 동일
{
	int i, j;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum += m[i][j];
		}
	}
	return sum/(3*3);
}

int array[3][3];
int result = agerage(array);

int average2(int *m, int n1, int n2)
{
	int i, j;
	int sum = 0;
	for ( i = 0; i < n1; i++)
	{
		for ( j = 0; j < n2; j++)
		{
			sum += m[i*n2 + j];
		}
	}
	return sum/(n1*n2);
}

int array[3][3];
int result = average(&array[0][0], 3, 3);
