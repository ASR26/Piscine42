#include <unistd.h>
#include <stdio.h>
int *init(int *arg)
{
	int	i;
	int	j;
	int *ini;
	char space;
	int arr[16];

	ini = &arr[0];
	space = '\n';
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			*(ini + i + j) = '0';
		//	*(ini + i + j) = (i*4+j)+'0';
			write (1, (ini + i + j), 1);
			j++;
		}
		write (1, &space , 1);
		j = 0;
		i++;
	}
/*
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j<4)
		{
			if(*(arg[i*4+j] = 4))
					{
					}
		}
	}*/
	return (&ini[0]);
}

int main ()
{
	int a[] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	init(a);	
}
