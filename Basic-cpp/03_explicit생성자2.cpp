#include <iostream>

/*
	explicit ������

	1. ��ü�� �ʱ�ȭ�� �� ���� �ʱ�ȭ�� ����� �� �ְ�, ���� �ʱ�ȭ�� ����� �� ����.
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
	OFile f1("a.txt");		// ok... �����ʱ�ȭ
	// OFile f2 = "a.txt";	// error... �����ʱ�ȭ

	foo(f1);				// ok... �����ʱ�ȭ (�Ϲݻ�����x, ���������)
	// foo("hello");		// error... �����ʱ�ȭ
}