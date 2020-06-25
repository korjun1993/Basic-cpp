#include <iostream>

/*
	explicit 생성자

	1. 객체를 초기화할 때 직접 초기화만 사용할 수 있고, 복사 초기화는 사용할 수 없다.
*/

class OFile
{
	FILE* file;

public:
	explicit OFile(const char* filename)
	{
		file = fopen(filename, "wt");
	}
	~OFile() { fclose(file); }
};

void foo(OFile f) {}

int main()
{
	OFile f1("a.txt");		// ok... 직접초기화
	// OFile f2 = "a.txt";	// error... 복사초기화

	foo(f1);				// ok... 복사초기화 (일반생성자x, 복사생성자)
	// foo("hello");		// error... 복사초기화
}