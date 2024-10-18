//var_local.c
#include <stdio.h>

int Sum(int x, int y) {
	return x + y; //0값 , null값 나올 수 있으므로 애초에 0으로 정의

}

int main(void) {
	int a = 3,
		b = 5;
	
	printf("%d+ %d = %d", a, b, Sum(a, b));
	return 0;
}