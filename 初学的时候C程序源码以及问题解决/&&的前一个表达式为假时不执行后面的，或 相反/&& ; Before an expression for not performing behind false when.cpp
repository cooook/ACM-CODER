/*2013年7月25日 12:35:14
  目的：&&的前一个表达式为假时不执行后面的，||前面为真后面不执行
  注意:C语言判断 1为真 0为假!
*/
#include<stdio.h>

int main (void)
{
	int i = 10;
	int k = 20;
	int m;

	m = (1>2) ||(k = 5);//当&&（并且）前一表达式为假是不执行后面的表达式，不含有分号的是表达式，含有分号的是语句 

	printf ("m = %d, k = %d", m, k);

	return 0;
}
/*在vs2012中的输出结果：
-----------------------------
m = 0,k = 20
-----------------------------
*/