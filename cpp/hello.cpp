/* "endl" character includes new-line character at the end of cout */

#include <iostream>
#if 1
using namespace std;
int main()
{
	int cnt = 10;
	cout << "Hello World\n" << cnt << endl;
	return 0;
}
#endif

#if 0
int main()
{
	int cnt = 10;
	std::cout << "Hello World\n" << cnt;
	return 0;
}
#endif
