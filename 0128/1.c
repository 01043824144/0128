#include<stdio.h>


//�Լ��� ����
//1.���ϰ��� �ִ�
//2.���ϰ��� ����

//��ȯ (���ϵ�����Ÿ��) �Լ��� (����){
//�Լ���ü (���๮��) }

//���ϰ��� ���� ���
//void printAdd(){}
//���� �� �ִ� ���
//char


//�Լ��� ����
int add(int x, int y); 
int minus(int x, int y);
int multiplr(int x, int y);
void addPrint(int x, int y);
void printAtoZ();

int main_1(void) {
	int a = 10, b = 20;
	int result = a + b;

	printf("�Լ��� = %d\n", result);

	result = add(a, b);

	printf("�Լ��� = %d\n", result);
	
	addPrint(a, b);
	//�Լ��� ȣ�� 
	printAtoZ();

	return 0;

}
// A to Z���� ��� �����κ�
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
