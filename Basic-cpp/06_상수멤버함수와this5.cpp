/*
	2. 동일 이름의 상수 멤버 함수와 비 상수 멤버 함수
	를 만들 수 있다.
*/

class Test
{
public:
	void foo() {}	// 1
	void foo() const {}	// 2
};

int main()
{
	Test t1;
	t1.foo();	// 1번 호출, 없으면 2번 호출

	const Test t2;
	t2.foo();	// 1번 호출, 없으면 error
}