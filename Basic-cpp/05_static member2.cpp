#include <iostream>

/*
	���� ��� ������
	
	1. ��� �����͸� ����ؼ� ��ü�� ������ �����ϴ� ���
	-> ��� �����ʹ� "��ü�� �ϳ��� ������ �޸� ����" ���

	-> ��ü�� ������ "�׻� 1"�̴�.

	2. ���� ������ ����ؼ� ��ü�� ������ �����ϴ� ���
	-> ���� ������ "�޸𸮿� �ϳ��� �ְ�, ��� ��ü�� ����"
*/

int cnt = 0;

class Car
{
	int speed;
	int color;

public:
	// int cnt = 0;
	
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;
	Car c3;

	cnt = 0;	// ����ڰ� cnt�� ������ �� ���� -> ������ ����

	// std::cout << c1.cnt << std::endl;
	std::cout << cnt << std::endl;
}