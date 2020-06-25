#include <iostream>

/*
	1. ���� �����ڶ�?
	-> �ڽŰ� ������ Ÿ�� �� ���� ���ڷ� ������ ������

	2. ����ڰ� ���� �����ڸ� ������ ������
	-> �����Ϸ��� ����
	-> ����Ʈ ���� ������ (default copy constructor)
	-> ��� ����� �����Ѵ�
*/

class Point
{
public:
	int x;
	int y;

	Point()				: x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	// ����ڰ� ����� ���� ������
	Point(const Point& p) : x(p.x), y(p.y) { std::cout << "copy ctor" << std::endl; }
};

int main()
{
	Point p1;			// ok (1)
	Point p2(1, 2);		// ok (2)
	// Point p3(1);		// error
	Point p4(p2);		// ok Point(Point p) ?

	std::cout << p4.x << std::endl;	// 1
	std::cout << p4.y << std::endl;	// 2
}