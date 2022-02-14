#include <stdio.h>
int main(){
    
    int score = 0;
    char grade = 'F';
    printf("점수 : ");
    scanf("%d", &score);

    //점수 : 90~100
    if( score >= 90 && score <= 100){
        grade = 'A';
    }
    //점수 : 80~90
    if( score >= 80 && score < 90){
        grade = 'B';
    }
    //점수 : 70~80
    if( score >= 70 && score < 80){
        grade = 'C';
    }
    //점수 : 60~70
    if( score >= 60 && score < 70){
        grade = 'D';
    }
    //점수 : ~60
    if(score < 60){
        grade = 'F';
    }
    

    printf("등급은 %c 입니다. \n",grade);


    return 0;
}