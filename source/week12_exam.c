/*
	파일명: week12_exam.c
	설  명: 12주차 배열 기초 실습
	작성자: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void do_exam1_array();
void do_exam2_array();
void do_exam3_array();
void do_exam4_array();
void do_exam5_array();
void do_exam6_array_more();
void do_exam7_array();
void do_exam8_string();
void do_exam9_string();
void do_exam10_string();
void do_mission1();

int main()
{
	printf("\n제 12 강 배열 실습 \n");
	
	int choice;
    printf("실행할 함수 번호를 입력하세요 (1 ~ 11): ");
    scanf("%d", &choice);

    switch(choice) 
	{
        case 1: 
            do_exam1_array(); 
            break;
        case 2: 
            do_exam2_array(); 
            break;
        case 3: 
            do_exam3_array(); 
            break;
        case 4: 
            do_exam4_array(); 
            break;
        case 5: 
            do_exam5_array(); 
            break;
        case 6: 
            do_exam6_array_more(); 
            break;
        case 7: 
            do_exam7_array(); 
            break;
        case 8: 
            do_exam8_string(); 
            break;
        case 9: 
            do_exam9_string(); 
            break;
        case 10: 
            do_exam10_string(); 
            break;
        case 11: 
            do_mission1(); 
            break;            
        default:
            printf("잘못된 입력입니다. 1에서 11 사이의 번호를 입력해주세요.\n");
            break;
    }
    return 0;
}

void do_exam1_array()
{
	int scores[60];
	float costs[12];
	char names[50];
	printf("\n 배열선언 완료!!\n");
}

void do_exam2_array()
{
	int scores[60];
	scores[0] = 10; 
    scores[1] = 20; 
    scores[2] = 30;
	printf("scores: %d, %d, %d\n", scores[0], scores[1], scores[2]);
	
	float costs[12];
	costs[0] = 0.2f; 
    costs[1] = 1.3f; 
    costs[2] = 5.6f;
	printf("costs: %.1f, %.1f, %.1f\n", costs[0], costs[1], costs[2]);
	
	char names[50];
	names[0] = 'a'; 
    names[1] = 'b'; 
    names[2] = 'c';
	printf("names: %c, %c, %c\n", names[0], names[1], names[2]);
} 

void do_exam3_array()
{
	int scores1[5] = {10, 20, 30, 40, 50};
	int scores2[5] = {10, 20, 30};
	int scores3[] = {10, 20, 30, 40, 50};
	int i;
	
	printf("scores1: ");
	for(i=0; i<5; i++) 
    {
        printf("%d ", scores1[i]);
    }
	
    printf("\nscores2: ");
	for(i=0; i<5; i++) 
    {
        printf("%d ", scores2[i]);
    }
	
    printf("\nscores3: ");
	for(i=0; i<5; i++) 
    {
        printf("%d ", scores3[i]);
    }
	printf("\n");
}

void do_exam4_array()
{
	int scores[5] = {10, 20, 30, 40, 50};
	int i;
	for(i=0; i<5; i++) 
    {
		printf("scores[%d] = %d\n", i, scores[i]);
	}
}

void do_exam5_array()
{
	int i, sum = 0;
	int grades[5];
	
	printf("5명 점수 입력: \n");
	for(i=0; i<5; i++) 
    {
		printf("%d번째 점수: ", i+1);
		scanf("%d", &grades[i]);
	}
	
	printf("입력된 점수: ");
	for(i=0; i<5; i++) 
    {
		printf("%d ", grades[i]);
		sum += grades[i];
	}
	printf("\n총합: %d\n", sum);
}

void do_exam6_array_more()
{
	int i;
	int scores[5];
	
	srand((unsigned int)time(NULL));
	
	for(i=0; i<5; i++) 
    {
		scores[i] = (rand() % 100) + 100;
	}
	
	printf("난수 배열 출력: ");
	for(i=0; i<5; i++) 
    {
		printf("%d ", scores[i]);
	}
	printf("\n");
}

void do_exam7_array()
{
	int i;
	int grades[5] = {23, 35, 67, 45, 21};
	int scores[5];
	
	for(i=0; i<5; i++) 
    {
		scores[i] = grades[i];
	}
	
	int equal = 1;
	for(i=0; i<5; i++) 
    {
		if(grades[i] != scores[i]) 
        {
			equal = 0;
			break;
		}
	}
	
	if(equal == 1) 
    {
        printf("두 배열은 같습니다.\n");
    }
	else 
    {
        printf("두 배열은 다릅니다.\n");
    }
}

void do_exam8_string()
{
	char str1[6] = "abc";
	char str2[4] = {'a', 'b', 'c', '\0'};
	char str3[] = "abc";
	char str4[4] = "abc"; 
	printf("문자열 초기화 완료\n");
}

void do_exam9_string()
{
	char str1[6] = "Seoul";
	char str2[3] = {'i', 's', '\0'};
	char str3[] = "the capital city of korea";
	
	printf("%s %s %s\n", str1, str2, str3);
}

void do_exam10_string()
{
	char source[6] = "hello";
	char target1[6];
	char target2[6];
	int i;
	
	for(i=0; i<6; i++) 
    {
		target1[i] = source[i];
	}
	
	strcpy(target2, source);
	
	printf("source: %s\n", source);
	printf("target1 (for): %s\n", target1);
	printf("target2 (strcpy): %s\n", target2);
}  

void do_mission1()
{
	int choice; 
    int balance = 0;
    int amount = 0;
	
	while(1) 
    {
		printf("\n 1. 입금하기\n");
		printf(" 2. 출금하기\n");
		printf(" 3. 잔액조회\n");
		printf(" 0. 카드 반환(종료)\n");
		printf("==================================\n");
		printf(">> 원하는 업무를 선택하세요: ");
		scanf("%d", &choice);
		
		switch(choice) 
        {
            case 1:
            	printf("\n[입금] 입금 로직이 실행됩니다...\n");
                printf("[입금] 입금할 금액을 입력해주세요: ");
                scanf("%d", &amount);
                balance += amount;
                printf("%d원이 입금되었습니다.\n", amount);
                break;

            case 2:
                printf("\n[출금] 출금 로직이 실행됩니다...\n");
                printf("[출금] 출금할 금액을 입력해주세요: ");
                scanf("%d", &amount);
                if (balance >= amount) 
                {
                    balance -= amount;
                    printf("출금이 완료되었습니다.\n");
                } 
                else 
                {
                    printf("잔액이 부족하여 출금할 수 없습니다.\n");
                }
                break;

            case 3:
            	printf("\n[잔액조회] 현재 고객님의 잔액은 %d 원입니다\n", balance);
                break;

            case 0:
                printf("\n카드를 반환합니다. 이용해 주셔서 감사합니다.\n");
                return;
                
            default:
                printf("\n잘못된 입력입니다. 0~3 사이의 숫자를 선택해주세요.\n");
                break;
		}	
	}	
}
