#include <iostream>

/*
	1. mutable ��� ������
	-> ��� ��� �Լ� �ȿ����� ���� ������ �� �ִ�.


*/

class Point
{
public:
	int x, y;
	mutable int cnt = 0;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const
	{
		++cnt;
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	const Point pt(1, 1);	// ��� ��ü
	pt.print();			// error (�����Ϸ��� ���� �ٲ���� �ȹٲ���� �𸥴�)
						// ��, print()�� ��� �Լ���� ok...
}