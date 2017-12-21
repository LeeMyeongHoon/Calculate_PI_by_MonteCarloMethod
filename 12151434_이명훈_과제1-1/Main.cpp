/******************************************************************************************************

[	파일명	]	Main.cpp
[	작성자	]	12151434_컴퓨터공학과_이명훈
[	목  적	]	몬테 카를로 방법으로 원주율을 계산한다.
[	특이점	]	줄번호42~45는 오버플로우을 확인하기위해서 중간연산결과를 추적하는 코드인데 주석처리 되어있다.

*******************************************************************************************************/			 												   
				

												 												   
#include <iostream>											 												   
#include <cstdlib>											 												   
#include <iomanip>

using namespace std;

int main(void)
{
	
	int randomX, randomY;						// 랜덤으로 생성될 점의 x,y좌표										
	int Radius;									// 원의 반지름														   
	unsigned int PointInCircle_Count = 0;		// 점이 원 내부에 들어간 횟수 
	unsigned int CreatePoint_Count;				// 랜덤으로 점을 생성할 횟수

	// 사용자로부터 반지름과 반복횟수를 입력받음
	cout << "반지름 : ";
	cin >> Radius;
	cout << "반복횟수 : ";
	cin >> CreatePoint_Count;


	for (size_t i = 0; i < CreatePoint_Count; i++)
	{	
		randomX = rand() % (Radius * 2 + 1) - Radius;			// 정사각형 안 쪽에 점의 X 좌표를 랜덤하게 생성
		randomY = rand() % (Radius * 2 + 1) - Radius;			// 정사각형 안 쪽에 점의 Y 좌표를 랜덤하게 생성

		if ((randomX*randomX + randomY*randomY) <= (Radius*Radius))		// 점이 원 안에 있는 경우, Counting
			PointInCircle_Count++;

		// 밑에 주석된 코드를 활성화하고, 반지름을 46340 보다 크게 입력했을때 오버플로우가 발생함을 확인할 수 있다. 보고서[1.3.3]참고)
		/**************************************************************************************************************************
		cout << "\n"
			<< "X : "  << randomX << '\t' << "Y : "  << randomY << "\n\n"
			<< "X^2 : " << randomX*randomX << "\t" << "Y^2 : " << randomY*randomY << "\t" << "R^2 : " << Radius*Radius
			<< "\n\n-------------------------------------------------------------------;\n" << endl;
		**************************************************************************************************************************/
	}


	// PI 값 계산
	const double PI = 4 * static_cast<double>(PointInCircle_Count) / CreatePoint_Count;

	// PI 값 출력
	cout << "PI : " << setprecision(15) << PI << endl;

	return 0;

}
