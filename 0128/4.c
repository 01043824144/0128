#include<stdio.h>

//a란 값을 넣으면 a-z, b를 넣으면 b-z출력
//1.영문 소문자만 가능 a=99 / z=122 (ASCII) 97<=a<=122
//if~ else
//2. 입력된 소문자를 시작으로, z까지만 출력
//for / while / do while


void printChar(char seed);

int main(void) {
	printChar('d');
	return 0;
}

void printChar(char seed) {
	if (seed >= 97 && seed <= 122) {//입력문자가 97이상 122이하일때
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
	}
	else
	{
		printf("입력하신 값이 영문 소문자가 아닙니다.\n\n");
	}
}