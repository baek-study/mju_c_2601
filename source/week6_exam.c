//1. 주석 
/*
	강  좌 :  
	파일명: week6_exam.c
	설  명: 6주차 조건문 심화 실습
	작성자: 
*/

//2. 전처리기
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exam1_condition();      
void exam2_condition();      
void exam3_condition();      
void exam4_condition();      
void exam5_condition();      
void exam6_review();        

void exam7_condition();     
void exam8_condition();     
void exam9_condition();     
void exam10_condition();    
void exam11_condition();    
 
void do_mission1_if();       
void do_mission1_switch();   
void do_challenge();

//3. main 함수
int main()
{
	//system("chcp 65001");   // change code page(table)  utf-8 (65001)
	printf("\n");
	printf("hello world! 테스트\n");
	
	int choice;

    // 사용자에게 입력 받기
    printf("실행할 함수 번호를 입력하세요 (1 ~ 14): ");
    scanf("%d", &choice);

    // switch-case 문을 활용한 분기 처리
    switch(choice) 
    {
        case 1:
            exam1_condition(); 
            break;
        case 2:
            exam2_condition();  
            break;
        case 3:
            exam3_condition(); 
            break;
        case 4:
            exam4_condition();  
            break;
        case 5:
            exam5_condition(); 
            break;
        case 6:
            exam6_review(); 
            break;
        case 7:
            exam7_condition(); 
            break;
        case 8:
            exam8_condition(); 
            break;
        case 9:
            exam9_condition();
            break;
        case 10:
            exam10_condition();
            break;
        case 11:
            exam11_condition();
            break;
        case 12:
            do_mission1_if(); 
            break;
        case 13:
            do_mission1_switch() ; 
            break;
        case 14:
            do_challenge();   
            break;            
        default:
            printf("잘못된 입력입니다. 1에서 14 사이의 번호를 입력해주세요.\n");
            break;
    }
    
    return 0;
}

//단순 if 구문 연습  - 중괄호 이용
void exam1_condition()
{
	int number;

	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
    if (number > 0)
    {
        printf("양수입니다\n");
    }
	
    if (number <= 0)
    {
        printf("양수가 아닙니다.\n");
    }
}

//단순 if 구문 연습  - 중괄호 이용
void exam2_condition()
{
	int number;

 	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	if (number > 0)
    {
        printf("양수입니다\n");
    }

	if (number <= 0)
    {
        printf("양수가 아닙니다\n");
    }
}

//if~else 버전
void exam3_condition()
{
	int number;

 	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	if (number > 0)
    {
        printf("양수입니다\n");
    }
    else
    {
        printf("양수가 아닙니다\n");
    }
}

//단순 if 구문 연습 - 일반 버전 
void exam4_condition()
{
	int score; 

	printf("점수를 입력하시오 : ");
    scanf("%d", &score);

	if (score >= 60)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
}

// if~ else :  짝수/ 홀수
void exam5_condition()
{	
	int number;

 	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
    {
        printf("짝수입니다.\n");
    }
    else
    {
        printf("홀수입니다.\n");
    }
}

//미션1 : 나만의 성적표 계산기 만들기 
void exam6_review()
{
	char initial;
    int kor_score, c_score, diff;
    float last_average, average;
	
	printf("영문 이니셜을 입력하세요: ");
    scanf(" %c", &initial);
	printf("국어 점수를 입력하세요: ");
    scanf("%d", &kor_score);
	printf("C 언어 점수를 입력하세요: ");
    scanf("%d", &c_score);
	printf("지난 학기 평균을 입력하세요: ");
    scanf("%f", &last_average);
	
	average = (kor_score + c_score) / 2.0f;
    diff = average - last_average;
	
    printf("\n%c 학생의 국어 점수는 %d, C언어 점수는 %d 입니다.\n", initial, kor_score, c_score);
	printf("평균은 %.1f 이고, 지난 학기와의 차이는 %d 입니다.\n", average, diff);
	
    if (average >= 60)
    {
        printf("결과: pass\n");
    }
    else
    {
        printf("결과: fail\n");
    }

    if (average >= 90 && c_score == 100)
    {
        printf("축하합니다! 전액 장학금 대상자입니다.\n");
    }
}

// [5] if ~ else if ~ else 문 
void exam7_condition()
{
	int score;

	printf("성적을 입력하시오 : ");
	scanf("%d", &score);
	
	if (score >= 90)
    {
        printf("A 학점입니다.\n");
    }
    else if (score >= 80)
    {
        printf("B 학점입니다.\n");
    }
    else if (score >= 70)
    {
        printf("C 학점입니다.\n");
    }
    else if (score >= 60)
    {
        printf("D 학점입니다.\n");
    }
    else
    {
        printf("F 학점입니다.\n");
    }
}

// [6]중첩 if 연습 - if 안에 if 구문
void exam8_condition() 
{
    int score;
    
    printf("점수를 입력하세요: ");
    scanf("%d", &score);
    
    if (score >= 80)
    {
        if (score >= 90)
        {
            printf("성적은 A 입니다.\n");
        }
        else
        {
            printf("성적은 B 입니다.\n");
        }
    }
    else
    {
        if (score >= 70)
        {
            printf("성적은 C 입니다.\n");
        }
        else
        {
            printf("성적은 C 이하(D 또는 F) 입니다.\n");
        }
    }
}

//switch~case 문  
void exam9_condition() 
{
	int number = 1;
	
	switch (number)
    {
        case 0:
            printf("number는 0입니다.\n");
            break;
        case 1:
            printf("number는 1입니다.\n");
            break;
        case 2:
            printf("number는 2입니다.\n");
            break;
        default:
            printf("number는 0, 1, 2가 아닙니다.\n");
            break;
    }
}

//switch~case 문 -  성적  
void exam10_condition() 
{
	int score;
    
    printf("점수를 입력하세요(0~100): ");
    scanf("%d", &score);
	
	switch (score / 10)
    {
        case 10:
        case 9:
            printf("A 등급입니다.\n");
            break;
        case 8:
            printf("B 등급입니다.\n");
            break;
        case 7:
            printf("C 등급입니다.\n");
            break;
        case 6:
            printf("D 등급입니다.\n");
            break;
        default:
            printf("F 등급입니다.\n");
            break;
    }
}

//switch~case 문 -   달의 일수 계산
void exam11_condition() 
{
	int month;
    
    printf("월을 입력하세요(1~12): ");
    scanf("%d", &month);
	
	switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d월은 31일까지 있습니다.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d월은 30일까지 있습니다.\n", month);
            break;
        case 2:
            printf("%d월은 28일(또는 29일)까지 있습니다.\n", month);
            break;
        default:
            printf("잘못된 입력입니다.\n");
            break;
    }
}

// do mission 1 - 연속 if 
void do_mission1_if() 
{
	int month;
	 
	printf("월을 입력하시오(1~12): ");
    scanf("%d", &month);
	
	if (month >= 1 && month <= 3)
    {
        printf("%d월은 1사분기입니다.\n", month);
    }
    else if (month >= 4 && month <= 6)
    {
        printf("%d월은 2사분기입니다.\n", month);
    }
    else if (month >= 7 && month <= 9)
    {
        printf("%d월은 3사분기입니다.\n", month);
    }
    else if (month >= 10 && month <= 12)
    {
        printf("%d월은 4사분기입니다.\n", month);
    }
    else
    {
        printf("잘못된 월을 입력하셨습니다.\n");
    }
}

void do_mission1_switch() 
{
	int month;
	 
	printf("월을 입력하시오(1~12): ");
    scanf("%d", &month);
	
	switch (month)
    {
        case 1: case 2: case 3:
            printf("%d월은 1사분기입니다.\n", month);
            break;
        case 4: case 5: case 6:
            printf("%d월은 2사분기입니다.\n", month);
            break;
        case 7: case 8: case 9:
            printf("%d월은 3사분기입니다.\n", month);
            break;
        case 10: case 11: case 12:
            printf("%d월은 4사분기입니다.\n", month);
            break;
        default:
            printf("잘못된 월을 입력하셨습니다.\n");
            break;
    }
}

// 마법아카데미 특별 입학시험
void do_challenge()
{
	int score;
    int major_code;
    
    printf("종합 점수를 입력하세요(0~100): ");
    scanf("%d", &score);
    
    printf("전공 코드를 입력하세요(1: 원소, 2: 치유, 3: 소환): ");
    scanf("%d", &major_code);
    
    if (score >= 90)
    {
        printf("S등급입니다!\n");
        if (score == 100)
        {
            printf("축하합니다! 특별 수석 장학생으로 선발되셨습니다.\n");
        }
    }
    else if (score >= 80)
    {
        printf("A등급입니다.\n");
    }
    else if (score >= 70)
    {
        printf("B등급입니다.\n");
    }
    else
    {
        printf("C등급입니다.\n");
    }
    
    switch (major_code)
    {
        case 1:
            printf("배정된 전공: 원소 마법\n");
            break;
        case 2:
            printf("배정된 전공: 치유 마법\n");
            break;
        case 3:
            printf("배정된 전공: 소환 마법\n");
            break;
        default:
            printf("알 수 없는 전공 코드입니다.\n");
            break;
    }
}
