#include <stdio.h>
int main(){

    char str[50];

    printf("���ڿ��� �Է�   : ");
    scanf("%s", str);               //�ּ� ������ &�� ������ �ʴ´�.
    //������?
    //�迭�� �̸� : �迭�� �ּҰ�

    printf("�Է¹��� ���ڿ� : %s\n", str);
    printf("�迭�� �ּҰ� (�迭�� �̸�) : %p\n", str);
    printf("�迭�� �ּҰ� (�ּҿ�����)  : %p\n", &str[0]);

    return 0;
}