#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Lab02
int main(int argc, char *argv[]) {
	int i = 10;
	char c='a';
	int* iptr=&i;
	char* cptr=&c;
	int* iptr2;
	iptr2=iptr;
	
	printf("i : %p\n%p (size : %i)\n", iptr, &i, sizeof(iptr));
	printf("c : %p\n%p (size : %i)\n", cptr, &c, sizeof(cptr));
	printf("iptr : %p, %i\n", iptr2, *iptr2);
	return 0;
}*/

/*Lab03
void main(){
	int i = 300;
	int* pi = &i;
	char* pc = &i;
	
	printf("%i, %i, %i\n", i, *pi, *pc);
}*/

/*Lab04*/
void swap1 (int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap2 (int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
main(){
	int a = 3;
	int b = 5;
	
	swap1(a, b);
	printf("a : %i, b : %i\n", a, b);
	
	swap2(&a, &b);
	printf("a : %i, b : %i\n", a, b);
}
