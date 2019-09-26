#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("input two integar\n");
	scanf("%d %d",&x,&y);
	
	printf("x+y=%d, x-y=%d, x*y=%d, x/y=%d, x%%y=%d",x+y,x-y,x*y,x/y,x%y);
}
