#include <iostream>

class Point
{
	int x;
	int y;
	const int cval;
	int& r;

public:
	Point(int a, int b, int c, int d) : x(a), y(b), cval(c), r(d) // �ʱ�ȭ
	{
		// x = a;	// ����
		// y = b;
		// cval = c; // ����
	}
};

int main()
{
	// Point p(1, 2);

	int a = 0;	// �ʱ�ȭ. ������ ȣ��

	int b;
	b = 0;
}