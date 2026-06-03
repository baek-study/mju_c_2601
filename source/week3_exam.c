//1. 주석 
/*
	강  좌 :  
	파일명: week3_exam.c
	설  명: 3주차 변수 및 출력 함수 실습
	작성자: 
	
	// [참고] 도구 > 컴파일러 추가 명령 > -fexec-charset=cp949
*/

//2. 전처리기
#include <stdio.h>
#include <stdlib.h>

int exam1_variables(); // 변수선언 & 값저장
int exam2_variables(); // 변수 동시 선언
int exam3_variables(); // 변수 값 변경
int exam4_init();      // 변수 초기화
int exam5_constant();  // 상수
void exam6_printf();   // 형식/서식 지정자 연습
void exam7_printf();   // 형식/서식 지정자 연습
void exam8_printf();   // 필드폭과 정밀도
void doMission1();     // 미션1 수행 

//3. main 함수
int main()
{
	//system("chcp 65001");   // change code page(table)  utf-8 (65001)
	printf("\n");
	printf("hello world! 테스트\n");
	
	int choice;

    // 사용자에게 입력 받기
    printf("실행할 함수 번호를 입력하세요 (1 ~ 9): ");
    scanf("%d", &choice);

    // switch-case 문을 활용한 분기 처리
    switch(choice) 
    {
        case 1:
            exam1_variables();
            break;
        case 2:
            exam2_variables();
            break;
        case 3:
            exam3_variables();
            break;
        case 4:
            exam4_init();
            break;
        case 5:
            exam5_constant();
            break;
        case 6:
            exam6_printf();
            break;
        case 7:
            exam7_printf();
            break;
        case 8:
            exam8_printf();
            break;
        case 9:
            doMission1();
            break;
        default:
            // 1~9 이외의 값이 입력되었을 때 예외 처리
            printf("잘못된 입력입니다. 1에서 9 사이의 번호를 입력해주세요.\n");
            break;
    }
    
	return 0; 
}

//변수 선언 & 값 저장
int exam1_variables()
{
	//1.정수형 변수 number 선언
	int number;
	//2.문자형 변수 ch 선언
	char ch;
	//3.정수형 변수 height 선언
	int height;
	//4.실수형 변수 interest_rate 선언
	float interest_rate;
	
	//5."exam1: 변수 선언 완료" 출력
	printf("exam1: 변수 선언 완료\n");
	
	//6. 정수형 변수 number에 정수 값 10 저장
	number = 10;
	//7. 문자형 변수 ch에 문자 값 'a' 저장
	ch = 'a';
	//8. 정수형 변수 height에  정수 값 180 저장
	height = 180;
	//9. 실수형 변수 interest_rate에 실수 값 4.9 저장
	interest_rate = 4.9f;
	
	//10."exam1: 변수 값 저장 완료" 출력
	printf("exam1: 변수 값 저장 완료\n");
	
	//11. ch에 문자 값 'b' 저장
	ch = 'b';
	//12. height에  정수 값 175 저장
	height = 175;
	//13. interest_rate에 실수 값 2.7 저장
	interest_rate = 2.7f;
	
	//14."exam1: 변수 값 변경 완료" 출력	
	printf("exam1: 변수 값 변경 완료\n");
	
	return 0;
}

//변수 동시 선언 
int exam2_variables()
{
	//1.정수형 변수 height, width 선언 (같이)
	int height, width;
	//2.정수형 변수, x,y,sum 선언 (동시에)
	int x, y, sum;
	//3."exam2: 변수 선언 완료" 출력
	printf("exam2: 변수 동시 선언 완료\n");
	
	return 0;
}

//변수 값 변경 가능
int exam3_variables()
{
	//1. 정수형 변수 value1 선언
	int value1;
	
	//2. value1에 정수값 10 저장
	value1 = 10;
	printf("value1 = %d\n", value1);
	
	//3. value1에 정수값 20 변경
	value1 = 20;
	printf("값 변경 후: value1 = %d\n", value1);
	
	//1. 정수형 변수 value2 선언
	int value2;
	//2. value2에 value1 값 저장
	value2 = value1;
	//3. "exam3: 값 변경 완료" 출력
	printf("exam3: 값 복사 완료 (value2 = %d)\n", value2);
	
	return 0;
}

//변수 초기화 
int exam4_init()
{
	//1. 문자형 변수 ch를 선언 후, 문자 값 'a' 저장
	char ch = 'a';
	//2. 정수형 변수 height를 선언 후,  정수 값 180 저장
	int height = 180;
	//3. 실수형 변수 interest_rate를 선언 후, 실수 값 4.9 저장
	float interest_rate = 4.9f;
	
	//4. 동일한 타입, 같은 줄에 초기화 가능 
	// 정수형 변수, width, height2 선언 후 값을 각각 100, 200으로 초기화
	int width = 100, height2 = 200;
	
	printf("exam4: 변수 초기화 완료\n");
		
	return 0;
}

// 상수 선언
int exam5_constant()
{
	// 1. PI를 실수형 기호 상수로 값은 3.14 할당
	const float PI = 3.14f;
	
	// 2. EXCHANGE_RATE를 상수로 1120 -- define 사용
    #define EXCHANGE_RATE 1120
	
    printf("PI: %f, 환율: %d\n", PI, EXCHANGE_RATE);
    return 0;
}

// ## 출력함수 - 형식지정자 연습 ##
void exam6_printf()
{
	//1. 변수 초기화  - 정수 num, 10값    
	int num = 10;
	//2. 출력 함수 이용 - 형식지정자  %d (정수) 
	printf("%d\n", num);
}

// ## 출력함수 - 형식지정자 연습 ##
void exam7_printf()
{
	//1. 변수 초기화  - 정수 number(23), 실수 grade(3.99)    
	int number = 23;
    float grade = 3.99f;
    
	//2. 출력 함수 이용 -  number -  형식지정자  %d (정수) 
	printf("number = %d\n", number);
	
	//3. 출력 함수 이용 - grade - 형식지정자  %f (실수) 
	printf("grade = %f\n", grade);
	
	//4. 한 출력 함수에 2개 다 출력 
    printf("number = %d, grade = %f\n", number, grade);
}

//필드폭과 정밀도 연습
void exam8_printf()
{
	//1. 기본 ..- 123 출력
	printf("%d\n", 123);
	//2. 10칸, 오른쪽 정렬  - 123 출력
	printf("%10d\n", 123);
	//3. 10칸, 왼쪽 정렬 - 123 출력
	printf("%-10d\n", 123);
	
	// 기본 
	printf("%f\n", 1.23456789);
	// 정밀도만 3으로 - 소수점 3자리 - 1.23456789
	printf("%.3f\n", 1.23456789);
	// 필드폭 10, 정밀도를 3으로 
	printf("%10.3f\n", 1.23456789);
	// 필드폭 10, 정밀도를 3으로,  왼쪽 정렬 
	printf("%-10.3f\n", 1.23456789);
}

//////////////////////////////////////////////
//미션1
////////////////////////////////////////////////
void doMission1()
{
	//1. 변수선언
	char* name;
	//2. 변수에 값 저장 
	name = "홍길동";
	//3. 변수값 출력
	printf("안녕하세요! 제 이름은 %s입니다.\n\n", name);
    printf("잘 부탁드립니다!\n");
}
