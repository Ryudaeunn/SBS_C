#include <stdio.h>

int main(){
    
    //복합 대입 연삽
    int x = 10;
    int y = 20;

    x += 10;
    y -= 10;

    printf("x : %d\n",x);       // x = x + 10;
    printf("y : %d\n",y);       // y = y - 10;

    x *= 2;                     // x = x * 2;
    y /= 2;                     // y =y / 2;

    printf("x : %d\n",x);
    printf("y : %d\n",y);


}