#include<stdio.h>

//지역변수 전역변수

//{ int a =10; }
void printResult() {

}
int main(void) {
    int i = 0;
    
    for (i=1;i<3; i++)
    {
   
        total = total + 1;
        printf("for 블록안의 변수 total의 값은 %d입니다.\n", total);

    }
}

void func_A() {
    int a = 10;
    int b = 20;
    name = 100;
    printf("func_A() 함수의 aaa 값 : %d\n", a);
    printf("func_A() 함수의 bbb 값 : %d\n", b);
    return;
}