#include <stdio.h>
#include <stdlib.h>

/* 
 �Է� ���� ���ڿ��� �޸𸮸� �����Ҵ��Ͽ�
 ������ �� ����ϰ�, �����ϴ� ���α׷��� �ۼ��غ�����.
*/

char * getSTring(){
    //�޸� ���� �Ҵ�
    char * str = (char*) malloc (sizeof(char) * 100);
    printf("���� �����ϴ� ���� : ");
    gets(str);
    return str;             //���ڿ��� �Է¹޴� �Լ�
}

int main(){
    //���ڿ� �Է� �Լ� ���� : getSTring()
    char* result = getSTring();
    printf("���� �����ϴ� ������ ? %s \n", result);

    // NULL : "�����Ͱ� ����"
    if( result != NULL);    //!�� NULL�� �ƴҶ��� �ǹ��Ѵ�.
        free(result);       //�Ҵ� ���� �޸� ����

    return 0;
}