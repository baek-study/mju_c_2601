//1. 주석 
/*
	강  좌 :  
	파일명: week5_exam.c
	설  명: 5주차 연산자 및 조건문 기초 실습
	작성자: 
*/

//2. 전처리기
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exam1_incremental();      
void exam2_bitwise();          
void exam3_relation();         
void exam4_relation();         
void exam5_logic() ;           
void exam6_logic() ;           
void exam7_condition();        
void exam8_condition();        
void exam9_condition();        
void exam10_condition();       
void exam11_condition();      
void do_mission1();            
void do_mission2();            
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

    // switch-case 문을 활용한 14가지 분기 처리
    switch(choice) 
    {
        case 1:
            exam1_incremental(); 
            break;
        case 2:
            exam2_bitwise(); 
            break;
        case 3:
            exam3_relation(); 
            break;
        case 4:
            exam4_relation(); 
            break;
        case 5:
            exam5_logic() ;
            break;
        case 6:
            exam6_logic() ;  
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
            do_mission1(); 
            break;
        case 13:
            do_mission2(); 
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

void exam1_incremental()
{
	int x, y;
	
	//////////////////////전위증가    
	x = 10;
	y = ++x;
	printf("전위증가: x=%d, y=%d\n", x, y);
	
	//////////////////////후위증가
	x = 10;
	y = x++;
	printf("후위증가: x=%d, y=%d\n", x, y);
}

// 비트 연산자 예제 1
void exam2_bitwise()
{
	printf("4 << 1 = %d\n", 4 << 1);
	printf("4 >> 1 = %d\n", 4 >> 1);
}
   
// 관계 연산자 연습
void exam3_relation()
{
	//1. 변수 선언 - 정수 x, y
    int x, y;

	//2. 변수 입력
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	//3. 관계연산자 연습
	printf("%d == %d : %d\n", x, y, x == y);
	printf("%d != %d : %d\n", x, y, x != y);
	printf("%d >= %d : %d\n", x, y, x >= y);
	printf("%d <= %d : %d\n", x, y, x <= y);
	printf("%d > %d : %d\n", x, y, x > y);
	printf("%d < %d : %d\n", x, y, x < y);
}

// 두 실수 비교
void exam4_relation()
{
	double a, b;

	a = 0.3 * 3; 
	b = 0.9;

	// a와 b가 같은지 결과 출력 - 실행 결과 확인
	printf("단순 비교(a == b): %d \n", a == b);

	//비교시 실수 절대값 함수 fabs() 이용
	printf("오차 허용 비교(fabs(a - b) < 0.001): %d \n", fabs(a - b) < 0.001);
}

// 논리 연산자 연습  
void exam5_logic() 
{
    int x, y;
    
    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &x, &y); 

    //2. 논리 연산자 연습 
	printf("%d && %d = %d\n", x, y, x && y);
	printf("%d || %d = %d\n", x, y, x || y);
	printf("!%d = %d\n", x, !x);
	printf("!%d = %d\n", y, !y);
}

//논리 연산자 응용 2
void exam6_logic() 
{
	int x = 1;
	
	//1. x는 1,2,3 중의 하나 인가?
    printf("x == 1 || x == 2 || x == 3 : %d\n", x == 1 || x == 2 || x == 3);
	//2. x가 60 이상, 100 미만 이다
    printf("x >= 60 && x < 100 : %d\n", x >= 60 && x < 100);
	//3. x가 0도 아니고 1도 아니다 
    printf("x != 0 && x != 1 : %d\n", x != 0 && x != 1);
	
	// x가 2보다 크고, x가 5보다 작다
	//1. and 표현
    printf("x > 2 && x < 5 : %d\n", x > 2 && x < 5);
	//2. 가독성 높은 버전
    printf("(x > 2) && (x < 5) : %d\n", (x > 2) && (x < 5));
}

//단순 if 구문 연습  - 중괄호 이용
void exam7_condition()
{
	//1. 변수선언 - 정수 number
	int number;

	//2. 입력
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	//3.1 중괄호 있는 버전 - 추천
    if (number > 0)
    {
        printf("양수입니다\n");
    }
	
	//3.2 중괄호 없는 버전 (지시사항에 따라 모두 중괄호 적용)
    if (number > 0)
    {
        printf("양수입니다\n");
    }
	 
    //버전3 - 비권고버전
	if (number > 0)
    {
	    printf("%d는 양수입니다. - 만입이 없는 버전\n", number);	
    }

	printf("입력된 값은 %d 입니다 \n", number);

	// 만약  number가 0과 같거나 작으면? 
    if (number <= 0)
    {
        printf("양수가 아닙니다.\n");
    }
}

//단순 if 구문 연습  - 중괄호 이용
void exam8_condition()
{
	int number;

 	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	if (number > 0)
    {
        printf("양수입니다.\n");
    }

	if (number <= 0)
    {
        printf("양수가 아닙니다.\n");
    }
}

//if~else 버전
void exam9_condition()
{
	int number;

 	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	
	if (number > 0)
    {
        printf("양수입니다.\n");
    }
    else
    {
        printf("양수가 아닙니다.\n");
    }
}

//단순 if 구문 연습 - 일반 버전 
void exam10_condition()
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
void exam11_condition()
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
void do_mission1()
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
	
	//9. 조건1 - 평균이 60 이상이면 pass 그렇지 않으면 fail
    if (average >= 60)
    {
        printf("결과: pass\n");
    }
    else
    {
        printf("결과: fail\n");
    }

    //10.조건2 - 평균이 90 이상 이고, c 언어 점수가 100이면 전액 장학금입니다.
    if (average >= 90 && c_score == 100)
    {
        printf("축하합니다! 전액 장학금 대상자입니다.\n");
    }
}

//1. 화씨 온도를 입력 받아, 섭씨 온도로 출력
void do_mission2()
{
	//2.1 변수 선언 -  화씨 fahren - 정수
    int fahren;
	//2.2 변수 선언 -  섭씨 celsius - 실수
    float celsius;
	 
	//2.3 안내메시지 출력 - 화씨 온도를 입력 하시오  
    printf("화씨 온도를 입력 하시오: ");
	//2.4 사용자 입력 - faren
    scanf("%d", &fahren);

	//2.5 섭씨 계산 
    celsius = (fahren - 32) * 5.0f / 9.0f;
	 
	//2.6 출력
    printf("섭씨 온도 %.1f 입니다.\n", celsius);

	//2.7 if 구문 - 섭씨 온도가 30 이상 이면 "00도로 날씨가 덥습니다 출력
    if (celsius >= 30)
    {
        printf("%.1f도로 날씨가 덥습니다.\n", celsius);
    }
} 

// 마법아카데미 특별 입학시험
void do_challenge()
{
	float magic;
    int mana;
    
    printf("마력 지수를 입력하세요: ");
    scanf("%f", &magic);
    
    printf("기본 마나를 입력하세요: ");
    scanf("%d", &mana);
    
    if (magic >= 15.5 && mana >= 50)
    {
        printf("마법 아카데미 정식 입학을 축하합니다!\n");
    }
    else
    {
        mana = mana << 1; 
        printf("정규 입학 조건에 미달입니다.\n");
        printf("교장선생님의 마나 증폭 주문! 마나가 %d(으)로 2배 늘어났습니다.\n", mana);
        printf("특별 예비반으로 입학하셨습니다!\n");
    }
}
