/*
  2013年7月31日 14:12:05
  目的：输出二维数组的值
*/

#include<stdio.h>

int main (void)
{
	int a[3][4] = 
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf ("%d  ",a[i][j]);
		}
		printf ("\n");
	}


	return 0;
}

/*
  在vs2012中的输出结果：
  ——————————————————
  1  2  3  4
5  6  7  8
9  10  11  12
请按任意键继续. . .
  ——————————————————
*/