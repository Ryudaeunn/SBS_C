#include <stdio.h>
#include <string.h>

/*
    # ����ü �迭
     : �迭�� ��Ұ� ����ü�� �̷���� �迭

     * �迭 : ���� �ڷ����� �������� �����͸� �����ϴ� ����
*/

// ����ü ����
struct person
{
    //�̸� ����
    char name[30];
    int age;
};
int main(){

    //����ü �迭 ����
    struct person boy[5] = 
    {
        {"���ڵ�", 12},
        {"���ڵ�", 20},
        {"���ڵ�", 22},
        {"���ڵ�", 11},
        {"���ڵ�", 25}
    };

    //����ü �迭 ����
    struct person girl[5];
    strcpy( girl[0].name, "���ڵ�");
    strcpy( girl[1].name, "���ڵ�");
    strcpy( girl[2].name, "���ڵ�");
    strcpy( girl[3].name, "���ڵ�");
    strcpy( girl[4].name, "���ڵ�");

    girl[0].age = 12;
    girl[1].age = 20;
    girl[2].age = 22;
    girl[3].age = 11;
    girl[4].age = 25;
    //���

    for (int i = 0; i < 5; i++)
    {
        printf("boy �� �̸��� %s, ���̴� %d �Դϴ� \n", boy[i].name, boy[i].age);
        printf("girl �� �̸��� %s, ���̴� %d �Դϴ� \n\n", girl[i].name, girl[i].age);
    }

    return 0;
}