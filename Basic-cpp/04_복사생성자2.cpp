#include <iostream>

/*
	���� �����ڰ� ȣ��Ǵ� 3���� ���
	
	1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ�� ��
	-> Point p2(p1)
	-> Point p2{p1}
	-> Point p2 = p1;	// explicit�� �ƴ� ��츸

	2. �Լ� ���ڸ� call by value�� ���� ���
	-> �Լ� ���ڸ� const reference�� ����ϸ� ���纻�� ������ �����Ƿ� (���� ������ + �Ҹ���)�� ȣ����� �ʴ´�

	3. �Լ��� ��ü�� ������ ��ȯ�� ��
	| x | 0 |	->	| x | 0 | ( ���Ͽ� �ӽ� ��ü�� ����)
	| y | 0 |	->	| y | 0 | ( �̶� ���� ������ ȣ��)

	-> ������ ��ȯ�ϸ� ���Ͽ� �ӽð�ü�� �������� �ʴ´�
	-> ��, ���������� ������ ��ȯ�ϸ� �ȵȴ�
*/

class Point
{
public:
	int x;
	int y;

	Point(int a, int b) : x(a), y(b)
	{
		std::cout << "ctor" << std::endl;
	}

	
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

// void foo(Point pt)		// Point pt = p1		-> ��������� ȣ�� O
void foo(const Point& pt)	// const Point& pt = p1	-> ��������� ȣ�� X
{

}

Point p;

// Point goo()
Point& goo()
{
	return p;
}

int main()
{
	Point p1(1, 2);		// ������
	Point p2(p1);		// ���� ������
	Point p3{ p1 };		// �����ʱ�ȭ
	Point p4 = { p1 };	// �����ʱ�ȭ
	Point p5 = p1;		// �����ʱ�ȭ

	foo(p1);
	goo(); // ���Ͽ� �ӽ� ��ü�� �����ٿ��� �ı�
}