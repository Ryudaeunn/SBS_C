#include <stdio.h>
int main(){
    
    int score = 0;
    char grade = 'F';
    printf("���� : ");
    scanf("%d", &score);

    //���� : 90~100
    if( score >= 90 && score <= 100){
        grade = 'A';
    }
    //���� : 80~90
    else if( score >= 80){
        grade = 'B';
    }
    //���� : 70~80
    else if( score >= 70){
        grade = 'C';
    }
    //���� : 60~70
    else if( score >= 60){
        grade = 'D';
    }
    //���� : ~60
    else {
        grade = 'F';
    }
    

    printf("����� %c �Դϴ�. \n",grade);


    return 0;
}