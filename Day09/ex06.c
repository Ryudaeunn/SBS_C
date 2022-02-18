#include <stdio.h>
    //함수 선언
    //반환타입과 매개변수 모두 없는 함수
void printf_line();
int main(){

    printf_line();
    printf("학번\t\t이름\t전공\t\n");
    printf("202103606\t류다은\t소프트웨어공학과\n");
    printf("202103605\t홍길동\t소프트웨어공학과\n");
    printf("202103604\t학생3\t소프트웨어공학과\n");
    printf_line();
    return 0;
}

//함수 정의
void printf_line(){
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");   
}