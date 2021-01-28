#include<stdio.h>

int action_add(int a, int b) {
	return a + b;
}

int Add2(int a, int b) {
	return 1;
}

void printAAA() {
	printf("AAAA");
	return;
}

void action(int a) {
	int result = 0;
	if (a == 10) { //a가 10일때만 출력코드가 실행되고 아닐시 프린트 자체를 하지 않겠다.
		result = a;
	}
	else
	{
		return;
	}
	printf("%d\n", result);
}

int main(void) {
	//더하기
	int add_result = action_add(1, 2);
	printf("%d\n", Add2(1, 2));
	return 0;
}

