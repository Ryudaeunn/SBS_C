#include <stdio.h>
void fune(int *a, int *b)
{
    *a = 100;
    *b = 200;
}
int main(){
    int a = 10, b =20;
    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d\t b : %d\n",a,b);

/*  ������ ���� ���� ( call by reference)
  : ������ ���� �����ϴ� �� �ƴ϶�,
    �ش� ������ ������ �� �ִ� �ּҰ��� ����
*/         fune(&a ,&b);

    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d\t b : %d\n",a,b);

    return 0;
}