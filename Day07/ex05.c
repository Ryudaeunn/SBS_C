#include <stdio.h>
int main(){

    //중첩 for문 작성하기
    //구구단 출력하기

    for (int i = 2; i < 9; i++)
    {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n");
        
    }
    


    return 0;
}