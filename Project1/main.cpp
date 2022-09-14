# include <iostream> // '<파일이름>' << 표준
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


	// 더하기 함수 
	int Sum = AddInt(2, 3);
	cout << Sum << endl;

	// 스왑 함수 
	cout << "바꾸기전 " << First <<  Second << endl;
	cout << "ㅇㅇ" << Swap(First, Second) << endl; // return 값 두개 가져오기?
	cout << "바꾼후 " << First << Second << endl; // 주소값 가져오자



	return 0;
}