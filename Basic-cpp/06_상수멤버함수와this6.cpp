/*
	3. 상수 멤버 함수 안에서는 모든 멤버는 cosnt이다
	4. 함수를 선언과 구현으로 분리할 때는 선언과 구현 모두 const를 표기해야 한다.
	-> const 여부에 따라 다른 함수로 인식한다.
*/

class Test
{
	int data;
public:
	const int* getData() const
	{
		// data는 상수이다 -> const int data
		return &data;
	}

	/* int* getData() const
	{
		return &data; // error
	} */
};

int main()
{

}