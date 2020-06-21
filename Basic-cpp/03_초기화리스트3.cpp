
/*
	반드시 멤버 초기화 리스트를 사용해야 하는 경우

	1. 클래스 안에 데이터가 "const 또는 reference"로 되어 있을 때

	2. 클래스 안에 "디폴트 생성자가 없는 타입이 멤버 데이터로" 있을 때

	생성자 블럭을 사용해야 하는 경우

	1. if문 switch 문 등으로 값을 조사할 때
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
		// p1(a, b);	// 함수호출으로 인식
	}
};

int main()
{
	Rect r;	// p1 Point() 생성자
		// p2 Point() 생성자
		// Rect() 생성자
}