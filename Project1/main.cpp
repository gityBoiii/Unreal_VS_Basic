# include <iostream> // '<�����̸�>' << ǥ��
using namespace std;

int AddInt(int First, int Second)
{

	int Sum = First + Second;
	
	return Sum;
}

int Swap(int First, int Second)
{
	int Temp = First;
	First = Second;
	Second = Temp;

	return (First, Second);
}

int main()
{
	int First = 1;
	int Second = 2;


	// ���ϱ� �Լ� 
	int Sum = AddInt(2, 3);
	cout << Sum << endl;

	// ���� �Լ� 
	cout << "�ٲٱ��� " << First <<  Second << endl;
	cout << "����" << Swap(First, Second) << endl; // return �� �ΰ� ��������?
	cout << "�ٲ��� " << First << Second << endl; // �ּҰ� ��������



	return 0;
}