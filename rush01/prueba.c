#include <stdio.h>
#include <unistd.h>

void	set_matrix(char ptr[6][6], int x, int y)
{
	int	count_x;
	int	count_y;

	count_x = 0;
	count_y = 0;
	while (count_y < y)
	{
		while (count_x < x)
		{
			ptr[count_x][count_y] = '0';
			count_x++;
		}
		count_x = 0;
		count_y++;
	}
}

void	print_matrix(char ptr[6] [6], int x, int y)
{
	int	count_x;
	int	count_y;

	count_x = 0;
	count_y = 0;
	while (count_y < y)
	{
		while (count_x < x)
		{
			write(1, &ptr[count_x][count_y], 1);
			write(1, " ", 1);
			count_x++;
		}
		count_x = 0;
		count_y++;
		write(1, "\n", 1);
	}	
}

void	fill_borders(int argc, char *borders, char ptr[6][6])
{
//	if (argc == 17)
//	{	
		ptr[0][0] = '#';
		ptr[0][5] = '#';
		ptr[5][0] = '#';
		ptr[5][5] = '#';
		ptr[1][0] = borders[0];
		ptr[2][0] = borders[2];
		ptr[3][0] = borders[4];
		ptr[4][0] = borders[6];
		ptr[5][1] = borders[24];
		ptr[5][2] = borders[26];
		ptr[5][3] = borders[28];
		ptr[5][4] = borders[30];
		ptr[1][5] = borders[8];
		ptr[2][5] = borders[10];
		ptr[3][5] = borders[12];
		ptr[4][5] = borders[14];
		ptr[0][1] = borders[16];
		ptr[0][2] = borders[18];
		ptr[0][3] = borders[20];
		ptr[0][4] = borders[22];
//	}
//	else
//	{
//		write(1, "Error", 5);
//		write(1, "\n", 1);
//	}
}

void	check_4(char ptr[6][6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if (ptr[0][count] == '4')
		{
			ptr[1][count] = '1';
			ptr[2][count] = '2';
			ptr[3][count] = '3';
			ptr[4][count] = '4';
		}
		if (ptr[5][count] == '4')
		{
			ptr[4][count] = '1';
			ptr[3][count] = '2';
			ptr[2][count] = '3';
			ptr[1][count] = '4';
		}
		if (ptr[count][0] == '4')
		{
			ptr[count][1] = '1';
			ptr[count][2] = '2';
			ptr[count][3] = '3';
			ptr[count][4] = '4';
		}
		if (ptr[count][5] == '4')
		{
			ptr[count][4] = '1';
			ptr[count][3] = '2';
			ptr[count][2] = '3';
			ptr[count][1] = '4';
		}
	count++;
	}	
}

void	check_1(char ptr[6] [6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if (ptr[0][count] == '1')
			ptr[1][count] = '4';
		if (ptr[5][count] == '1')
			ptr[4][count] = '4';
		if (ptr[count][0] == '1')
			ptr[count][1] = '4';
		if (ptr[count][5] == '1')
			ptr[count][4] = '4';
		count++;
	}
}

void	check_21(char ptr[6] [6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if ((ptr[0][count] == '2') && (ptr[5][count] == '1'))
			ptr[1][count] = '3';
		if ((ptr[5][count] == '2') && (ptr[0][count] == '1'))
			ptr[4][count] = '3';
		if ((ptr[count][0] == '2') && (ptr[count][5] == '1'))
			ptr[count][1] = '3';
		if ((ptr[count][5] == '2') && (ptr[count][0] == '1'))
			ptr[count][4] = '3';
		count++;
	}
}

void	check_32(char ptr[6][6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if ((ptr[0][count] == '3') && (ptr[5][count] == '2'))
			ptr[3][count] = '4';
		if ((ptr[5][count] == '3') && (ptr[0][count] == '2'))
			ptr[2][count] = '4';
		if ((ptr[count][0] == '3') && (ptr[count][5] == '2'))
			ptr[count][3] = '4';
		if ((ptr[count][5] == '3') && (ptr[count][0] == '2'))
			ptr[count][2] = '4';
		count++;
	}
}

void	check_31(char ptr[6][6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if ((ptr[0][count] == '3') && (ptr[5][count] == '1'))
			ptr[2][count] = '4';
		if ((ptr[5][count] == '3') && (ptr[0][count] == '1'))
			ptr[3][count] = '4';
		if ((ptr[count][0] == '3') && (ptr[count][5] == '1'))
			ptr[count][2] = '4';
		if ((ptr[count][5] == '3') && (ptr[count][0] == '1'))
			ptr[count][3] = '4';
		count++;
	}
}
/*
void	check_22_h(char ptr[6][6])
{
	int	count;

	count = 1;
	while (count < 5)
	{
		if((ptr[0][count] == '2' && (ptr[5][count] = '2'))
		{
			if((ptr[4][count] == 4]
		}
		if((ptr[1][count] == '2' && (ptr[2][count] = '4') )
				ptr[3][count] = '3';
		if((ptr[][count] == '2' && (ptr[2][count] = '4') && (ptr[0][count] == '2' && (ptr[5][count] = '2'))
				ptr[3][count] = '3';
		if((ptr[1][count] == '1' && (ptr[2][count] = '4' && (ptr[0][count] == '2' && (ptr[5][count] = '2))
				ptr[3][count] = '2';
		if((ptr[1][count] == '3' && (ptr[2][count] = '4'))
				ptr[3][count] = '1';
		if((ptr[1][count] == '2' && (ptr[2][count] = '1'))
				ptr[3][count] = '4';
		if((ptr[1][count]
}
*/
void	check_3(char ptr[6][6])
{
	int	count;
	int	county;
	int	sum;
	int	aux;
	int	change;

	change = 0;
	count = 1;
	county = 1;
	aux = 0;
	sum = 0;
	while (count < 5)
	{
		while (county < 5)
		{
			if (ptr[count][county] != '0')
				aux++;
			change = ((ptr[count][county]) - '0');
			sum = sum + change;
			county++;
		}
		if (aux == 3)
		{
			county = 1;
			while (ptr[count][county] != '0')
			{
				county++;
			}
			ptr[count][county] = 58 - sum;
		}
		count++;
		aux = 0;
		sum = 0;
		county = 1;
	}
}

void	play(char ptr[6][6])
{
	check_4(ptr);
	check_1(ptr);
	check_21(ptr);
	check_32(ptr);
	check_3(ptr);
}

int ft_check (char *a)
 {
 	int i;
	int result;

	i = 0;
	 while ( a[i] !='\0')
	 {
		if ((i%2!=0) && a[i] != ' ')
		result = 0;
		if (i%2==0)
		{	
	  	if (!((a[i] == '1') || (a[i] == '2') || (a[i]=='3') || (a[i] == '4')))
			result = 1;	
		}
		i++;	 
	 }
	if (i != 31)
		result = 2;
	
	return (result);
 }


int	main(int argc, char** argv)
{
	char	matrix[6][6];
	int		error;
	
	if (argc > 2)
	 {
		 write(1,"KO",2);
		 write(1," Demasiados parámetros",22);
		 return (0);
	 }
	 else if (ft_check(argv[1]) == 1 )
	{
		{ write(1,"KO No solo 1-4",14);
		 return (0);
		}
	} else if (ft_check(argv[1]) == 2 )
		{
		write(1,"KO Longitud incorrecta",22);
		return (0);
  		}

	printf("%i", argc);
	error = 0;
	set_matrix(matrix, 6, 6);
	fill_borders(argc, argv[1], matrix);
	play(matrix);
	print_matrix(matrix, 6, 6);
}
