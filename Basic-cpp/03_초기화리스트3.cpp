
/*
	�ݵ�� ��� �ʱ�ȭ ����Ʈ�� ����ؾ� �ϴ� ���

	1. Ŭ���� �ȿ� �����Ͱ� "const �Ǵ� reference"�� �Ǿ� ���� ��

	2. Ŭ���� �ȿ� "����Ʈ �����ڰ� ���� Ÿ���� ��� �����ͷ�" ���� ��

	������ ���� ����ؾ� �ϴ� ���

	1. if�� switch �� ������ ���� ������ ��
*/

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

class Rect
{
	Point p1;
	Point p2;
public:
	Rect(int a, int b, int c, int d) : p1(a, b), p2(c, d)
	{
		// p1(a, b);	// �Լ�ȣ������ �ν�
	}
};

int main()
{
	Rect r;	// p1 Point() ������
		// p2 Point() ������
		// Rect() ������
}