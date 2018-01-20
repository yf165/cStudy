#include <stdio.h>
#include "yf.h"
int main(void)
{
	int sum =0;
	
	func1();
	sum = func2(1,2);
	printf("1+2 = %d\n",sum);
	return 0;
	
}