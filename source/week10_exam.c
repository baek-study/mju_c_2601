/*
   파일명: week10_exam.c
   설  명: 10주차 함수 정의 실습
   이  름: 
*/

#include <stdio.h>

void print_stars()
{
	int i;
	for(i=0; i<30; i++) 
    {
		printf("*");
	}
	printf("\n");
}

int get_sum(int x, int y)
{
	return x + y;
}

int max(int x, int y)
{
	if(x > y) 
    {
        return x;
    }
	else 
    {
        return y;
    }
}

float get_area(int radius)
{
	return radius * radius * 3.14f;
}

void do_exam()
{
	printf("do_exam() 실행\n");
}

void happy_birthday()
{
	printf("생일 축하합니다\n");
}

void print_stars_num(int num)
{
	int i;
	for(i=0; i<num; i++) 
    {
		printf("*");
	}
	printf("\n");
}

void max_print(int x, int y)
{
	if(x > y) 
    {
        printf("큰 수: %d\n", x);
    }
	else 
    {
        printf("큰 수: %d\n", y);
    }
}

int my_abs(int x)
{
	if(x < 0) 
    {
        return -x;
    }
	else 
    {
        return x;
    }
}

void even()
{
	printf("짝수\n");
}

void odd()
{
	printf("홀수\n");
}

int oddWithRet()
{
	printf("홀수\n");
	return 1;
}

int decideOdd(int x)
{
	if(x % 2 == 0) 
    {
        return 0;
    }
	else 
    {
        return 1;
    }
}
