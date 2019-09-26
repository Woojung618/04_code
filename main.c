#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("input two integar:");
	scanf("%d %d",&x,&y);
	
	printf(" + result is %d\n - result if %d\n * result is %d\n / result is %d\n %% result is %d\n",x+y,x-y,x*y,x/y,x%y);
}
