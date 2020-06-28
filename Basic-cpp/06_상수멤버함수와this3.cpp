/*
	1. 사용자 정의 타입을 함수로 전달할 때
	-> call by value 보다는 call by reference가 좋다.

	2. const reference로 전달 받는 경우 상수 객체이다
	-> 상수 객체라도 객체의 상태를 읽을 수는 있어야 한다.
	
	"객체의 상태를 변경하지 않은 모든 멤버 함수는 반드시 상수 멤버 함수로 만들어야 한다."
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