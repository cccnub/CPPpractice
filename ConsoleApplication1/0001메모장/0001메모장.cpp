// 0001메모장.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
   //형상관리 프로그램이란?
   //소프트웨어 개발 시 개발완료된 코드를 형상화 하여 변경시점
   //이나 관리를 체계적으로 할 수 있도록 도와주는 프로그램이다.

    //컴파일 과정
    //전처리기 > 컴파일러 > 어셈블러 > 링커

    //전처리기의 역할
    //주석삭제, include를 통한 코드의 복사 붙여넣기
    
    //컴파일러의 역할
    //코드를 인간이 보기는 어렵지만 컴퓨터가 읽기 쉽도록 변환
    
    //프로그램
    //exe파일 하나를 프로그램 이라고 한다.
    //이 파일이 실행되어 RAM에 등재되면 그것을 프로세스 라고 한다.

    //자료형
    // int , bool , char
    // int = 4바이트 정수형
    // bool = 1바이트 논리형
    // char = 1바이트 문자형

    //연산자
    //산술연산자
    //- , + , * , / , %(나머지)
    //비교연산자
    //< , > , <= , >= , != (다르니) , ==(같니)

    //논리연산자
    //논리형and
    //&& , 오른쪽 왼쪽을 비교하여 둘다 참이라면 참
    //논리형or
    //|| , 오른쪽 왼쪽을 비교하여 둘중 하나라도 참이라면 참
    //논리형부정
    //!a , 우측의 있는 값의 반대 값 
    
    //비트연산자
    //비트and
    //& 위와 아래의 비트를 하나하나 비교하여 둘다 1이라면 1 아니면0
    //비트or
    //| 위와 아래 비트를 하나하나 비교하여 둘중하나가 1이라면 1 아니면 0
    //비트xor (배타적논리합)
    // ^ , 위와 아래 비트를 하나하나 비교하여
    // 두개가 다르다면 1 아니라면 0
    // 배타적논리합 , 위아래 비트를 하나하나 비교하여 두개가 다르면!!
    // 다르면!! 1 아니면 0 

    //포인터
    int a = 0;
    int *PtrA = &a;

    int b = 1;

    //꼴로 사용하며 a가 내가 된다.
    //PtrA 는 a의 주소값을 가지게 된다.
    //포인터를 사용하는 이유는 나중에 호출하는 함수의 크기가 크기때문에
    //그냥 사용하게 되면 그 값을 다 받아와서 사용해야한다.
    //그렇기 때문에 포인터로 해당 함수의 주소값만 불러와서 사용하게 된다.
    

    //축약연산자
    a -= b;
    //위 꼴로 사용하며
    //a에서 b를 뺀 값이 내가 된다 라는 뜻.
    //귀찮아서 만들어짐 

    //사이즈확인법
    int PointerSize = sizeof(PtrA);
    //sizeof(); 를 사용한다. 
    int c = 0;

    //배열

    int Arr[10] = {};
    //위의 꼴로 사용하며 초기화는 {0}; 을 넣으면 된다.

    //if = 반복문
    if (true)
    {
        
    }
    //위 꼴로 사용하게 되며, () 안에 값이 참이라면 아래 코드가 실행
    //거짓이라면 실행되지 않는다.
    else if (true)
    {

    }
    //else if와 세트로 사용하게 되며, else if 는 위의 if 코드가
    //모두 거짓일 경우 실행 되는 함수이다. 

        
    

}
    

