#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int num = 7423;
	int i;
	for(i=1;i<num;i++) if(num%i == 0) printf("%d x %d = %d\n",i,num/i,num);
}
