// 008비트연산자beatoperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// int 는 음수까지 표현 가능
	// 인트를 비트모양으로 표현하면 이렇게 된다. 
	// 4Byte = 32bit 이기 때문에 0(비트)가 32개 
	int Left = 0b00000000000000000000000000001001;

	// 이게 왜 - 1 인지? 
	// 모든 비트가 1이면 -1 로 정했으며
	// 제일 앞 비트가 1일 경우, - 더하기를 한다 ex) + - 1 
	// 2의 보수법 
	// 32번째 비트가 1이고 이후의 비트가 모두 1이라면
	// 이 때부터는 음수로 더해주면 된다. 
	int Right = 0b11111111111111111111111111110110;
	int a = 0;

	// 비트반전
	// 비트 단항 연산자 
	// A = ~Test;
	// 어떠한 이름이 관리하는 메모리영역의 모든 비트를 반전시킨다.
	int Test = 0;
	a = ~Test;
	int Result = 0;
	
	int ValueL = 0b00000000000000000000000000000000;
	int ValueR = 0b00000000000000000000000000000000;
	
	// 비트 or
	// 위쪽과 아래쪽 비트를 하나하나 비교하여 하나라도 1이라면 1 아니면 0
	 ValueL = 0b00000000000000000000000000000000;
	 ValueR = 0b00000000000000000000000000000000;
    
	 Result = ValueL | ValueR;

	// 비트 and
	// 위쪽과 아래쪽 비트를 하나하나 비교하여 둘다 1이라면 1 아니면 0 
	 Result = ValueL & ValueR;

    // 비트 xor, 배타적논리합 이라고 한다.
	// 위쪽과 아래쪽 비트를 하나하나 비교 하여 두개의 비트가
	// 다르다면 1 아니라면 0	 
	 Result = ValueL ^ ValueR;

	 // 비트 왼쪽시프트 <<
	 // 비트를 한칸씩 왼쪽으로 민다.
	 // 비트 오른쪽 시프트 >>
	 // 비트를 한칸씩 오른쪽으로 민다.
	 
	



	 
	





}






