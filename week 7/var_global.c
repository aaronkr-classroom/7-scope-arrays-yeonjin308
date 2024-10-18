//var_global.c
#include <stdio.h>
//전역변수

int result = 0;

void Sum(int x, int y) {
	result = x + y; //0값 , null값 나올 수 있으므로 애초에 0으로 정의

}

int main(void) {
	int a = 3,
		b = 5;
	Sum(a, b);
	printf("%d+ %d = %d", a, b, result);

	getch();

	return 0;
}