/*
	3. ��� ��� �Լ� �ȿ����� ��� ����� cosnt�̴�
	4. �Լ��� ����� �������� �и��� ���� ����� ���� ��� const�� ǥ���ؾ� �Ѵ�.
	-> const ���ο� ���� �ٸ� �Լ��� �ν��Ѵ�.
*/

class Test
{
	int data;
public:
	const int* getData() const
	{
		// data�� ����̴� -> const int data
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