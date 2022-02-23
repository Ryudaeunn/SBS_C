#include <stdio.h>
#include <string.h>

/*
    # 구조체 배열
     : 배열의 요소가 구조체로 이루어진 배열

     * 배열 : 같은 자료형인 여러개의 데이터를 저장하는 변수
*/

// 구조체 정의
struct person
{
    //이름 나이
    char name[30];
    int age;
};
int main(){

    //구조체 배열 선언
    struct person boy[5] = 
    {
        {"김코딩", 12},
        {"이코딩", 20},
        {"류코딩", 22},
        {"민코딩", 11},
        {"곽코딩", 25}
    };

    //구조체 배열 선언
    struct person girl[5];
    strcpy( girl[0].name, "김코딩");
    strcpy( girl[1].name, "이코딩");
    strcpy( girl[2].name, "류코딩");
    strcpy( girl[3].name, "민코딩");
    strcpy( girl[4].name, "곽코딩");

    girl[0].age = 12;
    girl[1].age = 20;
    girl[2].age = 22;
    girl[3].age = 11;
    girl[4].age = 25;
    //출력

    for (int i = 0; i < 5; i++)
    {
        printf("boy 의 이름은 %s, 나이는 %d 입니다 \n", boy[i].name, boy[i].age);
        printf("girl 의 이름은 %s, 나이는 %d 입니다 \n\n", girl[i].name, girl[i].age);
    }

    return 0;
}