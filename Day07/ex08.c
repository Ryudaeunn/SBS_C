#include <stdio.h>
int main(){

    //약수 ?
    // : 어떤 수보다 작거나 같은 수로 나누었을 때,
    //   나눈 나머지가 0이 되는 수를 약수라고 한다.
    //6의 약수 : 1 2 3 6
    //6 % 1 = 0 
    //6 % 2 = 0 
    //6 % 3 = 0 
    //6 % 4 = 2 
    //6 % 5 = 1 
    //6 % 6 = 0 

    int input;
    printf("정수입력 : ");
    scanf("%d",&input);

    printf("%d의 약수 : ", input);

    //입력받은 정수의 약수를 구하여 순서대로 출력하세요.
    //1.입력값보다 작거나 같은 수들을 반복
    //2. (입력값 % 반복변수 ==0)조건을 만족할 때,
    //    반복변수 --> 약수

    for (int i = 1; i <= input; i++)
    {
        //약수
       if(input % i == 0)
            printf("%d",i);
        
    }
    printf("\n");
    

    return 0;
}