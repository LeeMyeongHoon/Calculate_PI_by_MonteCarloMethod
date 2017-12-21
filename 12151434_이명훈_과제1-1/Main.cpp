/******************************************************************************************************

[	���ϸ�	]	Main.cpp
[	�ۼ���	]	12151434_��ǻ�Ͱ��а�_�̸���
[	��  ��	]	���� ī���� ������� �������� ����Ѵ�.
[	Ư����	]	�ٹ�ȣ42~45�� �����÷ο��� Ȯ���ϱ����ؼ� �߰��������� �����ϴ� �ڵ��ε� �ּ�ó�� �Ǿ��ִ�.

*******************************************************************************************************/			 												   
				

												 												   
#include <iostream>											 												   
#include <cstdlib>											 												   
#include <iomanip>

using namespace std;

int main(void)
{
	
	int randomX, randomY;						// �������� ������ ���� x,y��ǥ										
	int Radius;									// ���� ������														   
	unsigned int PointInCircle_Count = 0;		// ���� �� ���ο� �� Ƚ�� 
	unsigned int CreatePoint_Count;				// �������� ���� ������ Ƚ��

	// ����ڷκ��� �������� �ݺ�Ƚ���� �Է¹���
	cout << "������ : ";
	cin >> Radius;
	cout << "�ݺ�Ƚ�� : ";
	cin >> CreatePoint_Count;


	for (size_t i = 0; i < CreatePoint_Count; i++)
	{	
		randomX = rand() % (Radius * 2 + 1) - Radius;			// ���簢�� �� �ʿ� ���� X ��ǥ�� �����ϰ� ����
		randomY = rand() % (Radius * 2 + 1) - Radius;			// ���簢�� �� �ʿ� ���� Y ��ǥ�� �����ϰ� ����

		if ((randomX*randomX + randomY*randomY) <= (Radius*Radius))		// ���� �� �ȿ� �ִ� ���, Counting
			PointInCircle_Count++;

		// �ؿ� �ּ��� �ڵ带 Ȱ��ȭ�ϰ�, �������� 46340 ���� ũ�� �Է������� �����÷ο찡 �߻����� Ȯ���� �� �ִ�. ����[1.3.3]����)
		/**************************************************************************************************************************
		cout << "\n"
			<< "X : "  << randomX << '\t' << "Y : "  << randomY << "\n\n"
			<< "X^2 : " << randomX*randomX << "\t" << "Y^2 : " << randomY*randomY << "\t" << "R^2 : " << Radius*Radius
			<< "\n\n-------------------------------------------------------------------;\n" << endl;
		**************************************************************************************************************************/
	}


	// PI �� ���
	const double PI = 4 * static_cast<double>(PointInCircle_Count) / CreatePoint_Count;

	// PI �� ���
	cout << "PI : " << setprecision(15) << PI << endl;

	return 0;

}
