#include <iostream>

/*
	�Լ� ���� ���ް� �ʱ�ȭ ���

	1. �Լ� ���� ���� �� ���� �ʱ�ȭ�� ����Ѵ�.
	2. Ư�� Ŭ���� ���� �� ���� �ʱ�ȭ�� ������� ���ϰ� �ϴ� ���� ���� ���� �ִ�.
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
	OFile f1("a.txt");	// �����ʱ�ȭ
	OFile f2 = "a.txt";	// �����ʱ�ȭ

	foo(f1);
	foo("hello");	// ok... OFile f = "hello"
}