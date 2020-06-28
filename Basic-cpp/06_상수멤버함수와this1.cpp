#include <iostream>

/*
	1. ��� ��� �Լ�
	-> �Լ� ���� �� ������ �Լ� ��ȣ () �ڿ� const�� �ٴ� �Լ�
	-> void print() const

	2. ��� ��� �Լ��� Ư¡
	-> ��� ��� �Լ� �ȿ����� ��� ����� ��� ����Ѵ�
	-> ��� �������� ���� ���� ���� ������ ������ ���� ����

	3. ��� ��� �Լ��� ����ϴ� ����
	-> �ڵ� �ۼ��� ������
	-> �� ��� ��ü�� ��� ��� �Լ��� ȣ���� �� �ִ� 

*/

class Point
{
	int x, y;

public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const // ��� ��� �Լ�
	{
		x = 10; // error
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{

}