/*
	1. ����� ���� Ÿ���� �Լ��� ������ ��
	-> call by value ���ٴ� call by reference�� ����.

	2. const reference�� ���� �޴� ��� ��� ��ü�̴�
	-> ��� ��ü�� ��ü�� ���¸� ���� ���� �־�� �Ѵ�.
	
	"��ü�� ���¸� �������� ���� ��� ��� �Լ��� �ݵ�� ��� ��� �Լ��� ������ �Ѵ�."
*/

class Rect
{
	int xpos, ypos, width, height;

public:
	Rect(int x = 0, int y = 0, int w = 0, int h = 0) :
		xpos(x), ypos(y), width(w), height(h) {}

	// int getArea() { return width * height; }
	int getArea() const { return width * height; }

};

// void foo(Rect r) -> call by value
void foo(const Rect& r)
{
	int n = r.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10);

	int n = r.getArea();

	foo(r);
}