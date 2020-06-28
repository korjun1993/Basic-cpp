/*
	정적 멤버 데이터

	c++11부터 일반 멤버 데이터는 멤버 필드 초기화를
	사용 가능하지만 정적멤버 데이터는 필드 초기화를
	사용할 수 없다.
	-> 클래스 외부에 정의에서 초기값을 지정해야 한다.

								외부 정의	멤버필드초기화
	non static member data	|		x			o
	static member data		|		o			x
	static const 정수계열	|		x			o
	static const 비정수계열	|		o			x
	static constexpr		|		x			o
	inline static			|		x			o

*/

class Test
{
public:
	int data = 0;

	// static int sdata = 0; // error

	static int sdata1; // 선언 (declaration)

	static const int		sdata2 = 0;	// ok
	static const double		sdata3 = 0;	// error
	static constexpr int	sdata4 = 0;	// ok
	static constexpr double sdata5 = 0;	// ok
	inline static int		sdata6 = 0; // ok C++17
};

int Test::sdata1 = 0; // 정의(definition)

int main()
{
}