#include <iostream>
#include <vector>
#include <string>
#include <memory>

int main()
{
	std::string s1("hello");		// ok
	std::string s1 = "hello";		// ok

	std::vector<int> v1(10);		// ok
	// std::vector<int> v2 = 10;		// error
	std::vector<int> v3 = { 10 };	// ok (���� �ٸ� ������ ȣ��)

	std::shared_ptr<int>	p1(new int);	// ok
	// std::shared_ptr<int>	p2 = new int;	// error

}