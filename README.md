C 언어 프로그래밍
자연교양(월 14:00) C 언어 수업시간의 요약 및 코드 배포를 위한 학습 공간입니다. 

<hr size = "10px", width ="500px">

## [🔵1주차 강의&nbsp;-&nbsp;C 언어 소개](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)

### [🔹 C 소개](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
<ul>
<li><b>특징:</b> 컴파일러 방식, 현대 프로그래밍 언어의 기반, 임베디드에 탁월 </li>
<li><b>통합 개발 환경:</b> Dev C++, Visual Studio, VS code 등 </li>  
</ul>

### [🔹 실습 환경 세팅 (Dev C++)](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
<ul>
<li>프로젝트생성-소스코드작성-컴파일-실행 수행 </li>
<li>단축키 : 컴파일(f9)-실행(f10)-<b>컴파일 후 실행(F11)</b></li>  
</ul>

### [🔹 첫 프로그램! hello, world](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
<ul>
  <li>
  // C 프로그램 : Hello, World <br> 
#include <stdio.h><br>
int main() <br>
{<br>
  &emsp;&emsp;printf("Hello, World\n");<br>
  &emsp;&emsp;return 0;<br>
}<br>  
  </li>
</ul>

<br>

## [🛠️2주차 강의&nbsp;-&nbsp;C 프로그램 구성 요소]()

### [🔹 프로그램 개발과정 및 알고리즘]()
<ul>
  <li>요구분석→설계→구현→테스트</li>
  <li>알고리즘: 설계로 문제를 해결하는 절차</li>
  <li>순서도: 알고리즘을 표준화된 기호로 표현 </li>
</ul>

### [🔹 C 프로그램 구성요소]()
<ul>
<li><b>주석</b> : 프로그램 설명글</li>
// C 프로그램 : Hello World    <br> 
<li><b>전처리기</b> : 필요한도구 가져오기</li>
#include <stdio.h><br>
<li><b> main 함수</b> -{ } 코드 울타리 </li>
int main() <br>
{ &emsp; //함수시작 <br> 
  &emsp;&emsp;printf("Hello World\n");<br>
  &emsp;&emsp;return 0;//문장끝은 세미콜론<br>
} &emsp; //함수끝 <br>
</ul>

### [🔹 표준출력함수 printf()]()
<ul>
  <li>printf("Hello World\n"); </li>
  <li>출력제어: printf("탭키 \t 줄바꿈 \n ");(</li>
</ul>

<br>

## [🔵3주차 강의&nbsp;-&nbsp;변수]()
### [변수](https://github.com/baek-study/C-Language/blob/main/source/week3_variable.c)
<ul>
  <li>변수 선언 :  int num;&ensp; char ch;&ensp; double pi;&ensp; <br>
   &emsp;=>  int(정수), char(문자), double(실수) 
  </li>
  <li>변수 값 저장 : num=10;&ensp; ch='a'; &ensp;pi=3.14; </li>
  <li>변수 초기화 : int num=10;&ensp; char ch='a';&ensp; double pi=3.14;</li>
</ul>

### [표준출력함수 printf()](https://github.com/baek-study/C-Language/blob/main/source/week3_printf.c)
<ul>
  <li>형식지정자:  %d(정수), %c(문자), %f(실수)  </li>
  <li> printf("%d, %c, %f \n", num,ch,pi);<br>
  &ensp;=> 형식지정자와 변수 갯수/자료형 일치</li>
  <li>필드폭(자릿수): %10d (10칸차지) </li>
  <li>정밀도: %.3f (소수점 3자리까지) </li>
</ul>

### [표준입력함수 scanf()](https://github.com/baek-study/C-Language/blob/main/source/week3_scanf.c)
<ul>
 <li>형식지정자 :  %d(정수), %c(문자), %lf(double), %f(float) </li>
 <li> scanf("%d %c %lf", &num, &ch &pi) ;<br>
  - 변수 앞에 주소연산자 & 필수!!<br>
  - double 변수에 형식지정자는 %lf 사용</li>
</ul>

<br>

## [🔵4주차 강의&nbsp;-&nbsp;연산자]()
### [기호상수- define/const](https://github.com/baek-study/C-Language/blob/main/source/week4_constant.c)
<ul>
  <li>기호상수선언 : #define 이용 <br>&ensp; ex) #define MAX 100   </li>
  <li>기호상수선언 :  const 키워드<br> &ensp; ex) const int MAX = 100;  </li>
</ul>

### [연산자-산술/증감/복합](https://github.com/baek-study/C-Language/blob/main/source/week4_operator.c)
<ul>
  <li>산술 연산자 : +, -, *, /, % (나머지) &ensp;<br>
  &ensp; => 정수/정수=정수, &ensp; 5/3 = 1 </li>
  <li>증감 연산자: x++, ++x( x 값 1 증가) <br>
  &ensp; x--, --x (x값 1 감소)</li>
  <li>복합 대입 연산자: +=, -=, *=, /=, %= 등 <br>
 &emsp;=>   x += 3;   // x = x+3; 를 축약한 표현
  </li>
</ul>

<br>

## [🔵5주차 강의&nbsp;-&nbsp;조건문 1]()
### [연산자-관계/논리](https://github.com/baek-study/C-Language/blob/main/source/week5_operator2.c)
<ul>
  <li>관계 : ==, !=, >=, <=, >, <  </li>
  <li>논리 : &&(and), ||(or), !(not) </li>
</ul>

### [조건문-if/if~else](https://github.com/baek-study/C-Language/blob/main/source/week5_if.c)
<ul>
  <li>단순 if : <b>if</b>(조건) { &emsp;  } </li>
  <li>if~else : <b>if</b>(조건) { &emsp;  } <br>
   &emsp; &emsp; &emsp;  <b>else</b> {&emsp;   } </li>
</ul>

<br>

## [🔵6주차 강의&nbsp;-&nbsp;조건문 2]()
### [조건문-다중if](https://github.com/baek-study/C-Language/blob/main/source/week6_multiIf.c)
<ul>
  <li>중첩 if : if 안에 if <br>
   &emsp; <b>if</b>(조건) {  if(조건) { } else { }  } <br>
   &emsp; <b>else</b> {  if(조건) { } else { }  } 
  </li>
  <li>연속 if : if ~ else if ~ else <br>
   &emsp; <b>if</b>(조건) { &emsp;  } <br>
   &emsp; <b>else if</b>(조건) { &emsp;  } <br>
   &emsp; <b> else</b> { &emsp;  } 
  </li>
</ul>

<br>

## [🔵7주차 강의&nbsp;-&nbsp;반복문]()
### [조건문-switch](https://github.com/baek-study/C-Language/blob/main/source/week7_switch.c)
<ul>
  <li>switch~case 문 : 여러조건 선택 <br>
   &emsp; <b>switch</b>(변수) { <br>
   &emsp; &emsp; <b>case 0 :</b>문장들; break; <br>
   &emsp; &emsp; <b>default:</b>문장들; break;  } 
  </li>
</ul>

### [조건연산자&형변환](https://github.com/baek-study/C-Language/blob/main/source/week7_condOperator.c)
<ul>
  <li>조건연산자 : 조건?참문장:거짓문<br>
   ex) absValue = a>0 ? a : -a ; </li>
   <li>형변환 : 캐스트/(int), (float) <br>
   ex) int i = (int)1.12;  </li>

</ul>

### [반복문-while](https://github.com/baek-study/C-Language/blob/main/source/week7_while.c)
<ul>
  <li>while : 조건반복 <br>
   초기값, 반복조건(끝), 증감 <br>
   int i=0; <b>while</b>(i<5) {  문장들; i++;  } <br>
  </li>
</ul>

<br>

## [🔵9주차 강의&nbsp;-&nbsp;반복문 2]() 
### [반복문-for](https://github.com/baek-study/C-Language/blob/main/source/week9_for.c)
<ul>
  <li>for 문 : 횟수반복(ex.10번) <br>
   - 초기값, 반복조건(끝), 증감 <br>
   <b>for</b>(i=0 ; i<5 ; i++) {  문장들; } <br>
  </li>
</ul>

<ul>
  <li>중첩 for 문 : for 안에 for 문 <br>
   <b>for</b>(i=2 ; i<9 ; i++) {  <br>
   &emsp; &emsp;  <b>for</b>(j=1 ; j<10 ; j++) {  문장들; } } <br>
  </li>
</ul>

<br>

## [🔵10주차 강의&nbsp;-&nbsp;함수]()
### [반복문-do~while](https://github.com/baek-study/C-Language/blob/main/source/week10_dowhile.c)
<ul>
  <li>do~while : 명령문 한번이상 실행 <br>
   <b>do</b> { 문장들; }<b>while(조건);</b>  <br>    
  </li>
</ul>

### [보조제어문](https://github.com/baek-study/C-Language/blob/main/source/week10_subControl.c)
<ul>
  <li>무한루프 & 보조 제어문 <br>
   <b>while</b>(1) { // 무한루프  <br>
   &emsp;  if(조건) break; // 제어를 벗어나기 위해 사용  <br>
   &emsp;  if(조건) continue; //  현재 반복을 중간하고 다음 반복을 시작 }  <br>
  </li>

</ul>

### [함수](https://github.com/baek-study/C-Language/blob/main/source/week10_function.c)
<ul>
  <li>함수 정의  <br>
   <b>int max(int x, int y)</b> {   <br>
   &emsp;  if(x>y) return x;  <br>
   &emsp;  else return y; }  <br>  
  </li>
  <li>함수 호출 <br>
    int value = max(10, 20); </li>
</ul>

<br>

## [🔵11주차 강의&nbsp;-&nbsp;함수 2]()
### [매개변수&인수](https://github.com/baek-study/C-Language/blob/main/source/week11_function_parameter.c)
<ul>
  <li>매개변수: 값을 전달받는 변수 <br>
    (함수정의) max(<b>int x, int y</b>)  
  </li>
  <li>인수:함수에 실제로 전달되는 값   <br>
    (함수호출)  max(<b>10, 20</b>)
  </li>
  <li>매개변수&인수 개수일치/타입일치 <br>
   int max(int x, int y)<br>
    &emsp; - max(10, 20)<br>
   double get_area(int radius)<br>
    &emsp; - get_area(10)<br>
    void print_ch(char ch)<br>
     &emsp; - print_ch('a')
  </li>
</ul>


### [반환값&결과대입](https://github.com/baek-study/C-Language/blob/main/source/week11_function_return.c)
<ul>
  <li>반환값:함수 결과로 돌려주는 값  <br>
   (함수정의) return x 
  </li>
  <li>결과대입변수:함수호출후 결과대입   <br>
    (함수호출)  <b>value</b> = max(10, 20)
  </li>
  <li>반환형&반환값&결과대입변수 일치 <br> 
    <b>int</b> max() { <b>int</b> ret; 문장들; return <b>ret</b>;} <br>
    - <b>int</b> value1 = max();<br>
    <b>double</b> area() { <b>double</b> ret; 문장들; return <b>ret</b>;}<br>
    - <b>double</b> value3 = area(); <br>
    <b>char</b> get() { <b>char</b> ret; 문장들; return <b>ret</b>;} <br>
    - <b>char</b> value2 = get();<br>
  </li>
</ul>

### [함수원형](https://github.com/baek-study/C-Language/blob/main/source/week11_function_prototyping.c)
<ul>
  <li>컴파일러에게 함수를 미리 알림
  </li>
  <li>함수헤더 + 세미콜론 <br>
   &emsp; int max(int x, int y);
  </li>
</ul>

### [라이브러리](https://github.com/baek-study/C-Language/blob/main/source/week11_library.c)
<ul>
  <li> 컴파일러에서 제공하는 함수<br>
 표준입출력(stdio.h), 표준유틸리티(stdlib.h), 수학(math.h), 시간(time.h), 문자열(string.h)등</li> 
  <li>난수발생: rand(), srand(time(NULL))<br>
   - rand() : 난수 생성, rand()%6 + 1<br>
   - srand(정수) : 기준점변경, srand(10) <br>   
   - tme(NULL) : 현재시간 초 반환<br>  
   - (unsigned)tme(NULL) : 0 이상<br> 
  </li>

  <li>수학함수:math.h를 사용 </li>
  - floor(실수)/ceil(실수) : 내림/올림<br>
  - sqrt(실수)/pow(실,실) : 제곱근/지수승 <br>
  - sin(실수) : 사인 함수 - 라디안 값 입력 <br>
  </li>
</ul>

<br>

## [🔵12주차 강의&nbsp;-&nbsp;배열]()
### [변수범위&생존기간](https://github.com/baek-study/C-Language/blob/main/source/week12_variable.c)
<ul>
  <li>변수속성: 변수 범위, 생존기간 <br>
    - 범위:지역(함수 안), 전역(함수 외)<br>
    - 생존(메모리존재)기간:임시, 영구<br>
  </li>
  <li>지역변수: 블록(함수)내 선언<br> 
    void sub() {int <b>local_x;</b>}<br>
    - 해당 블록내 사용, 자동 초기화 x <br>
    - 매개변수-지역변수(인수로초기화) <br>
  </li>
  <li>전역변수: 함수외 선언<br>
    <b>int globla_x</b>; void sub() { }<br>  
    - 프로그램 전체 사용, 자동 초기화(0) <br>
    - 같은 이름시 지역변수가 우선  
  </li>
  <li>static(정적)변수: 영구 생존<br>
     <b>static</b> int count = 0;<br>
     -저장유형지정자: static(영구), auto(임시, 기존 지역변수) 
  </li>
</ul>


### [배열](https://github.com/baek-study/C-Language/blob/main/source/week12_array.c)
<ul>
  <li>개념: 같은 자료형을 여러개 <br>
    메모리의 연속된 공간에 저장 
  </li>
  <li>배열선언: int scores[5]; // 대괄호 <br>
    - 인덱스 idx: 일련번호, 0부터 시작
  </li>
  <li>원소접근: scores[3]; //배열[idx]
  </li>
  <li>값저장: scores[3] = 20; <br> //배열[idx] = 값
  </li>
  <li>초기화: int scores[5]={10,20,30,40,50};
  </li>
</ul>

<br>

## [🔵13주차 강의&nbsp;-&nbsp;포인터]()
### [배열과반복](https://github.com/baek-study/C-Language/blob/main/source/week13_arrayFor.c)
<ul>
  <li>for구문으로 배열 원소 접근 <br>
    for(i=0; i<5; i++) <br>
    &emsp;printf("%d \n", scores[i]);
  </li>
  <li>배열 복사/비교 : 각각 원소를 처리</li>
  <li> 2차원: int data[3][5]; //[행][열] </li>
</ul>


### [배열과함수](https://github.com/baek-study/C-Language/blob/main/source/week13_arrayFunction.c)
<ul>
  <li>함수정의 : 배열(위치), 배열크기 <br>
    void getArr(int arr[], int size) { } 
  </li>
  <li>함수호출 : 배열이름, 배열크기 <br>
    getArr(scores, 5);   
  </li>
</ul>

### [포인터](https://github.com/baek-study/C-Language/blob/main/source/week13_pointer.c)
<ul>
  <li>개념: 기존 변수의 주소를 가짐 <br>
  </li>
  <li>선언: int * p; // 정수 포인터<br>
    char *pc; float *pf; double *pd;
  </li>
  <li> 값 저장 : int *p = &i;  <br> 
    //int i=10일때, i의 변수 주소 <br>
    printf("%d, %p, %p",i, &i, p);
  </li>
</ul>
<br>

## [🔵14주차 강의&nbsp;-&nbsp;구조체]()
### [포인터2](https://github.com/baek-study/C-Language/blob/main/source/week14_pointer.c)
<ul>
  <li> 간접참조 * : 포인터가 가리키는 값 <br>
    int* p = &i; printf("%d", <b>*p</b>); 
  </li>
  <li>포인터연산: 데이터 크기 만큼 증감 <br>
    char(1byte), int(4byte) 등 
  </li>
  <li> 포인터와 배열: 배열을 가리킬 때 <br>
    int a[2]={10,20}; //a는 배열 주소 <br>
    int *p = a;
  </li>
  <li> 포인터와 함수: 매개변수가 포인터 <br>
    void printX(int *){..}, printX(&a);//인수는 주소
  </li>
</ul>


### [문자열](https://github.com/baek-study/C-Language/blob/main/source/week14_string.c)
<ul>
  <li>문자열: char 배열, NULL(\0) 추가 <br>
    char str[4]="hi", char str[] = "hi"
  </li>
  <li>문자열 입출력 : %s 사용 <br>
    printf("%s", str); <br>
    scanf("%s", str);   
  </li>
  <li>문자열 복사 : 배열 복사(for 이용) <br>
     strcpy(target, source);   
  </li>  
  <li>문자열 선언: 포인터 이용 가능 <br>
     char *p = "HelloWorld";  
  </li>    
</ul>

<br>

