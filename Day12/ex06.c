#include <stdio.h>
#include <stdlib.h>

/* 
 입력 받은 문자열을 메모리를 동적할당하여
 저장한 뒤 출력하고, 해제하는 프로그램을 작성해보세요.
*/

char * getSTring(){
    //메모리 동적 할당
    char * str = (char*) malloc (sizeof(char) * 100);
    printf("내가 좋아하는 색깔 : ");
    gets(str);
    return str;             //문자열의 입력받는 함수
}

int main(){
    //문자열 입력 함수 정의 : getSTring()
    char* result = getSTring();
    printf("내가 좋아하는 색깔은 ? %s \n", result);

    // NULL : "데이터가 없다"
    if( result != NULL);    //!은 NULL이 아닐때를 의미한다.
        free(result);       //할당 받은 메모리 해제

    return 0;
}