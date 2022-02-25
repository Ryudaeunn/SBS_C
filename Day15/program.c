//��� ���� ����
#include <stdio.h>
#include <string.h>

//�ʿ��� ���
#define MAX_LEN 10          //���� ���� �ִ밳��
#define True 1              //��
#define False 0             //����

//�޴� ��ȣ
#define Add 1               //�����߰�
#define Remove 2            //���� ����
#define Check 3             //���� ���� Ȯ��
#define Order 4             //���� ���� �ֹ�
#define End 0               //���α׷� ����

//���� ��ǰ �ڵ�
#define Americano 1
#define CafeLatte 2
#define Juice 3
#define Icecream 4
#define cancel 0

//���� ��ǰ ����
#define Americano_Price 1
#define CafeLatte_Price 2
#define Juice_Price 3
#define Icecream_Price 4

//���� ���� ����ü
typedef struct
{
    char *foods[MAX_LEN];       //��ǰ ��� (�ִ� 10��)
    int indexofFoods;           //��ǰ ��ȣ
    int totalPrice;             //��ü ����
} ItemList;

// �Լ� ����
void select();                      //���� �޴�
void showMenu();                    //���� �޴�
void addMenu(ItemList * itemList);  //���� �߰�
void addMenuProcess(ItemList * itemList, char* menu, int price);  //���� �߰� ó��

int main(){
    // ���� ���� �� �ʱ�ȭ
    ItemList itemList;
    itemList.indexofFoods = 0;
    itemList.totalPrice = 0;
    int choice;         //������ �޴� ��ȣ
    while(1)
    {
        //���� �޴� ���
        select();

        //�޴� ��ȣ �Է�
        printf("�޴� ��ȣ : ");
        scanf("%d", &choice); 

        //�޴� ����
        switch (choice)
        {   //1. ���� �߰�
            case Add:
                        //�Լ� ȣ��
                        printf("\n\n");
                        break;
           //2. ���� ����
            case Remove:
                        //�Լ� ȣ��
                        printf("\n\n");
                        break;
           //3. ���� ���� Ȯ��
            case Check:
                        //�Լ� ȣ��
                        printf("\n\n");
                        break;
           //4. ���� ���� �ֹ�
            case Order:
                        //�Լ� ȣ��
                        printf("\n\n");
                        break;
           //0. ���α׷� ����
            case End:
                        //�Լ� ȣ��
                        puts("���α׷��� �����մϴ�.");
                        return 0;
            
            default:
                        puts("( 0 ~ 4)���� ��ȣ�� �Է����ּ���.");
                        break;
        }
    }


    return 0;
}

//<�޴� ���� �Լ� ����
void select()
{
    /*���� �޴��� ����ϴ� �Լ�*/
    puts("***** SBS��ī���� ī��*****");
    puts("***** 1. ���� �߰�");
    puts("***** 2. ���� ����");
    puts("***** 3. ���� ���� Ȯ��");
    puts("***** 4. ���� ���� �ֹ�");
    puts("***** 0. ���α׷� ����");
    puts("***************************");
}

void showMenu()
{
    /*�ֹ��� �� �ִ� �޴��� ����ϴ� �Լ�*/
    puts("***************************");
    puts("***** 1. �Ƹ޸�ī�� (2000)");
    puts("***** 2. ī��� (2000)");
    puts("***** 3. �꽺 (2000)");
    puts("***** 4. ���̽�ũ�� (2000)");
    puts("***** 0. ���");
    puts("***************************");
}

//���� �߰�
void addMenu(ItemList * itemList)
{
    /*
    ����ڰ� �߰��� ���Ḧ �����ϸ�,
    - ItemList ����ü�� ��� �迭�� �ش� ���Ḧ �߰�
    - ����� �� ������ 1 ����
    - �ش� ������� ������ ��ü ���ݿ� ����
    */
   //������� �ִ� 10������ ����
   if( itemList -> indexofFoods >= MAX_LEN)
   {
       puts("�� �̻� �߰��� �� �����ϴ�. (�ִ� 10��)");
       return 0;
   }

   int choice;
   int i;
   //���� �޴� ���
   showMenu();
   printf("�޴� ��ȣ : ");
   scanf("%d", &choice);

   switch (choice)
   {
   case Americano:
                addMenuProcess(itemList, "�Ƹ޸�ī��", Americano_Price);
                break;
   case CafeLatte:
                addMenuProcess(itemList, "ī���", CafeLatte_Price);
                break;
   case Juice:
                addMenuProcess(itemList, "�꽺", Juice_Price);
                break;
   case Icecream:
                addMenuProcess(itemList, "���̽�ũ��", Icecream_Price);
                break;
   case cancel:
                puts("����մϴ�.");
                break;
   default:
                puts("�߸��� �Է��Դϴ�.");
                break;
   }
}

// ���� �߰� ó�� �Լ�
void addMenuProcess(ItemList * itemList, char* menu, int price)
{
    int i;
    printf("%s �߰�", menu);
    i = itemList ->indexofFoods;        // ���� �������� index
    itemList->foods[i] = menu;          //���� ��Ͽ� �޴� �߰�
    itemList->indexofFoods++;           //�� ���� + 1
    itemList->totalPrice += price;      //��ü���� + �ش� ���� ����
}


/*

<main �Լ�>
1. ���� ���� �� �ʱ�ȭ
2. ���� �޴� ���
3. �޴���ȣ �Է�
    (0 ~ 4)
4. �޴� ����
5. ���õ� �޴��� �Լ� ȣ��
    1 -> �߰�
    2 -> ����
    3 -> ���� ���� Ȯ��
    4 -> ���� ���� �ֹ�
    0 -> ����

*/

/*

<�޴� ���� �Լ� ����>
- ����� ���� �޴� ��� �Լ�

1. ���� �޴�
- �Լ� �̸� : select()
- ��� : ���� �޴��� ����ϴ� �Լ�

2. ���� �޴� 
- �Լ� �̸� : showMenu()
- ��� : �ֹ��� �� �ִ� �޴��� ����ϴ� �Լ�
*/

/*
���� �߰� �Լ� ����
�Լ� �̸� : addMenu(ItemLIst *itemList)
���
: ����ڰ� �߰��� ���Ḧ �����ϸ�,
- ItemList ����ü�� ��� �迭�� �ش� ���Ḧ �߰�
- ����� �� ������ 1 ����
- �ش� ������� ������ ��ü ���ݿ� ����

���� �߰� ó�� �Լ� ����
�Լ� �̸� : addMenuProcess(ItemList*itemList)
��� : ���� �߰� ó���� �ϴ� �Լ�

*/









