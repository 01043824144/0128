#include<stdio.h>


//함수의 종류
//1.리턴값이 있는
//2.리턴값이 없는

//반환 (리턴데이터타입) 함수명 (인자){
//함수몸체 (실행문들) }

//리턴값이 없는 모양
//void printAdd(){}
//리터 값 있는 모양
//char


//함수의 원형
int add(int x, int y); 
int minus(int x, int y);
int multiplr(int x, int y);
void addPrint(int x, int y);
void printAtoZ();

int main_1(void) {
	int a = 10, b = 20;
	int result = a + b;

	printf("함수전 = %d\n", result);

	result = add(a, b);

	printf("함수후 = %d\n", result);
	
	addPrint(a, b);
	//함수의 호출 
	printAtoZ();

	return 0;

}
// A to Z까지 출력 구현부분
void printAtoZ() {
	for (int i = 65; i <= 90; i++) {
		printf("%c", i);
	} printf("\n");
	printf("TEST");
}

void addPrint(int x, int y) {
	printf("%d+%d=%d\n", x, y, x + y);
}

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiplr(int x, int y) {
	return x * y;
}
