#include <stdio.h>
int N = 5;              //��������
int max(int* arr);      //�Լ� ����

int main(){
    int arr[5];
    int result = 0;

    printf("���� 5�� �Է� : ");
    for (int i = 0; i < N; i++)
    {
        //�迭�� �Է�
        scanf("%d", &arr[i]);
    }

    //�ִ밪 = �Լ�ȣ�� -- �迭 ����
    //�迭�� �̸� : ù��° ����� �ּҰ�
    result = max(arr);

    //��� - �ִ�
    printf("�ִ� : %d\n", result);

    return 0;
}

//�ִ��� ���ϴ� �Լ�
//������ ���� : �ּҰ��� �����ϴ� ����
int max(int* arr)
{
    int result = 0;

    result = arr[0];
    for (int i = 0; i < N; i++)
    {
        // arr[i] : 1 2 3 4 5
       if(result < arr[i])
       {
           result = arr[i];
       }
    }
    
    return result;
    
}
