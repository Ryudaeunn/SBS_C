#include <stdio.h>
int main(){

    //�л��� �� N�� �Է¹ް�,
    //�� �л��� ������ N����ŭ �Է� �޾Ƽ�,
    //������ �հ�� ����� ���Ͻÿ�.
    int N;
    printf("�л��� �� : ");
    scanf("%d", &N);

    int student[N];
    int sum = 0;                  //�հ�
    double avg = 0.0;             //���
    //(�Ҽ����� ��Ÿ���� �� �˷��ֱ����� 0.0�� �� 0���� �ᵵ ��� �� ����������)
    for (int i = 0; i < N; i++)
    {
        printf("�л� %d�� ���� : ", i+1);
        scanf("%d", &student[i]);
        sum = sum + student[i];
    }

    //(���) = (�հ�) / (����)
    avg = (double) sum / N;

    printf("�л� ������ �հ� : %d\n", sum);
    printf("�л� ������ ��� : %f\n", avg);

    return 0;
}