#include <iostream>

/*
	���ǻ���

	��� �ʱ�ȭ ����Ʈ ���� x�� ���� �ʱ�ȭ �ȴ�

	| x |
	| y |

	1. �ʱ�ȭ ����
	-> �ʱ�ȭ ����Ʈ�� ������� �ʱ�ȭ���� �ʰ�
	-> ��� �����Ͱ� ���� ������� �ʱ�ȭ �ȴ�
*/

class Point
{
public:
	int x;
	int y;

	Point() : y(0), x(y) {}
};

int main()
{
	Point p;
	std::cout << p.x << std::endl;	// �̻��Ѱ� ����
}

