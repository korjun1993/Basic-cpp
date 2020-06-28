/*
	���� ��� ������

	c++11���� �Ϲ� ��� �����ʹ� ��� �ʵ� �ʱ�ȭ��
	��� ���������� ������� �����ʹ� �ʵ� �ʱ�ȭ��
	����� �� ����.
	-> Ŭ���� �ܺο� ���ǿ��� �ʱⰪ�� �����ؾ� �Ѵ�.

								�ܺ� ����	����ʵ��ʱ�ȭ
	non static member data	|		x			o
	static member data		|		o			x
	static const �����迭	|		x			o
	static const �������迭	|		o			x
	static constexpr		|		x			o
	inline static			|		x			o

*/

class Test
{
public:
	int data = 0;

	// static int sdata = 0; // error

	static int sdata1; // ���� (declaration)

	static const int		sdata2 = 0;	// ok
	static const double		sdata3 = 0;	// error
	static constexpr int	sdata4 = 0;	// ok
	static constexpr double sdata5 = 0;	// ok
	inline static int		sdata6 = 0; // ok C++17
};

int Test::sdata1 = 0; // ����(definition)

int main()
{
}