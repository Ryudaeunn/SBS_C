#include <stdio.h>
    //�Լ� ����
    //��ȯŸ�԰� �Ű����� ��� ���� �Լ�
void printf_line();
int main(){

    printf_line();
    printf("�й�\t\t�̸�\t����\t\n");
    printf("202103606\t������\t����Ʈ������а�\n");
    printf("202103605\tȫ�浿\t����Ʈ������а�\n");
    printf("202103604\t�л�3\t����Ʈ������а�\n");
    printf_line();
    return 0;
}

//�Լ� ����
void printf_line(){
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");   
}