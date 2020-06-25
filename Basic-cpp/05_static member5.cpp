/*
	1. 일반 멤버 데이터에 접근하는 방법.
	-> "객체 이름으로만 접근 가능"

	2. 정적 멤버 데이터에 접근하는 방법
	-> "객체 이름을 사용"하거나 "클래스 이름을 사용"해서 접근할 수 있다.
	-> 되도록이면 "클래스 이름을 사용해서 접근하는 것이 좋다" :: 가독성측면
*/

class Car
{
public:
	int speed;
	int color;

	static int cnt;
};

int Car::cnt = 0;

int main()
{
	Car::cnt = 0;

	Car c;
	c.speed = 0;

	c.cnt = 0;
	Car::cnt = 0;
}