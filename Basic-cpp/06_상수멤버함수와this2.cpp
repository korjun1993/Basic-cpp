#include <iostream>

/*
	1. ��� ��� �Լ��� �ʿ��� ����
	-> ��� ��ü�� ��� ��� �Լ��� ȣ���� �� �ִ�.

	2. const Point pt(1,1);
	-> ��� ��ü�̹Ƿ� ��ü�� ���¸� ������ �� ����� �Ѵ�.
	-> ������ ���¸� ��ų� ����� ���� �־�� �Ѵ�.
	-> print ��� �Լ��� �ݵ�� ��� ��� �Լ��� �ؾ� �Ѵ�.
*/

class Point
{
public:
	int x, y;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	const Point pt(1, 1);	// ��� ��ü
	pt.x = 10;			// error (��� ���� �����ϴϱ�)
	pt.set(10, 10);		// error (��� ���� �����ϴϱ�)
	pt.print();			// error (�����Ϸ��� ���� �ٲ���� �ȹٲ���� �𸥴�)
						// ��, print()�� ��� �Լ���� ok...
}