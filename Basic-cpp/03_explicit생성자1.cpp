#include <iostream>

/*
	함수 인자 전달과 초기화 방법

	1. 함수 인자 전달 시 복사 초기화를 사용한다.
	2. 특정 클래스 설계 시 복사 초기화를 사용하지 못하게 하는 것이 좋을 때가 있다.
*/

class OFile
{
	FILE* file;

public:
	OFile(const char* filename)
	{
		file = fopen(filename, "wt");
	}
	~OFile() { fclose(file); }
};

void foo(OFile f) {}

int main()
{
	OFile f1("a.txt");	// 직접초기화
	OFile f2 = "a.txt";	// 복사초기화

	foo(f1);
	foo("hello");	// ok... OFile f = "hello"
}