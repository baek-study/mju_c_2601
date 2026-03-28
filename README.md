C 언어 프로그래밍
자연교양(월 14:00) C 언어 수업시간의 요약 및 코드 배포를 위한 학습 공간입니다. 

<hr size = "10px", width ="500px">

## 3주차 실습 - 변수와 표준출력
### [변수개념과 자료형]()
<ul>
  <li><b>변수</b> : 데이터를 저장하는 공간 </li>
  <li>이름 규칙 : 알파벳, 숫자, 밑줄(_)로 구성 <br>
  - 시작시 숫자 안됨, 공백/예약어 안됨 </li>
   <li>자료형: 정수, 실수, 문자</b> <br>
    int(4byte), double(8byte), char(1byte)
    </li> 
</ul>

### [C 프로그램의 변수선언/사용]()
<ul>
  <li>변수 선언 :  int num;&ensp; char ch;&ensp; double pi;&ensp; <br>
   &emsp;=>  int(정수), char(문자), double(실수) 
  </li>
  <li>변수 값 저장 : num=10;&ensp; ch='a'; &ensp;pi=3.14; </li>
  <li>변수 초기화 : int num=10;&ensp; char ch='a';&ensp; double pi=3.14;</li>
</ul>

### [상수(Constant)]()
<ul>
  <li> 값이 변할수 없는 데이터 </li>
  <li> <b>const</b> double PI = 3.14; </li>
  <li> <b>#define</b> PI 3.14 // =, ; 없음 </li>
</ul>


### [printf()로 변수 출력]()
<ul>
  <li>형식지정자:  %d(정수), %c(문자), %f(실수)  </li>
  <li> printf("%d, %c, %f \n", num,ch,pi);<br>
  &ensp;=> 형식지정자와 변수 갯수/자료형 일치</li>
  <li>필드폭(자릿수): %10d (10칸차지) </li>
  <li>정밀도: %.3f (소수점 3자리까지) </li>
</ul>

<br>


## [1주차 강의&nbsp;-&nbsp;C 언어 소개](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)

### [C 소개](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
<ul>
<li><b>특징:</b> 컴파일러 방식, 현대 프로그래밍 언어의 기반, 임베디드에 탁월 </li>
<li><b>통합 개발 환경:</b> Dev C++, Visual Studio, VS code 등 </li>  
</ul>

### [실습 환경 세팅 (Dev C++)](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
<ul>
<li>프로젝트생성-소스코드작성-컴파일-실행 수행 </li>
<li>단축키 : 컴파일(f9)-실행(f10)-<b>컴파일 후 실행(F11)</b></li>  
</ul>

### [첫 프로그램! hello, world](https://github.com/baek-study/mju_c_2601/blob/main/source/week1_hello.c)
// C 프로그램 : Hello, World <br> 
#include <stdio.h><br>
int main() <br>
{<br>
  &emsp;&emsp;printf("Hello, World\n");<br>
  &emsp;&emsp;return 0;<br>
}<br>
<br>

## [2주차 강의&nbsp;-&nbsp;C 프로그램 구성 요소]()

### [프로그램 개발과정 및 알고리즘]()
<ul>
  <li>요구분석→설계→구현→테스트</li>
  <li>알고리즘: 설계로 문제를 해결하는 절차</li>
  <li>순서도: 알고리즘을 표준화된 기호로 표현 </li>
</ul>

### [C 프로그램 구성요소]()
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

### [표준출력함수 printf()]()
<ul>
  <li>printf("Hello World\n"); </li>
  <li>출력제어: printf("탭키 \t 줄바꿈 \n ");(</li>
</ul>

<br>

