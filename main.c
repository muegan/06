#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void)
{
	int n,r;
	
	
	return result;
}

int factorial()
{
	int res=1;
	int n;
	int i;
	
	for(i=1; i<=n; i++)
	{
		res=res*i;
		}
	return res;
}

int combination(int n, int r)
{
	
	int a,b,c;
	
	a=factorial(n);
	b=factorial(r);
	c=factorial(n-r);
	
	return a/(b*c);
}


int get_integer(int n, int r, int res)
{
	printf("n을 입력하시오");
	scanf("%i",&n);
	
	printf("r을 입력하시오");
	scanf("%i",&r);
	
	res=combination(n,r);
	printf("결과값은 %i입니다.",res);
	
	return 0;
}
