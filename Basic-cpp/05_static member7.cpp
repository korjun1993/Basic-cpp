#include <iostream>

/*
	1. ���� ��� �Լ�
	-> ��ü ���� ȣ�� ������ ��� �Լ�
	-> Ŭ���� �̸�::�Լ��̸�()���� ȣ��

	2. ���� �⼭ �Լ��� ȣ���ϴ� 2���� ���
	-> Ŭ���� �̸����� ȣ��
	Car::getCount();

	-> ��ü �̸����� ȣ��
	c1.getCount();

	3. ��ü �̸����ٴ� Ŭ���� �̸��� ����ϴ� ���� ����
*/

class Car
{
	int speed;
	int color;
	static int cnt;

public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	static int getCount() { return cnt; }
};

int Car::cnt = 0;

int main()
{	
	std::cout << Car::getCount() << std::endl;
}