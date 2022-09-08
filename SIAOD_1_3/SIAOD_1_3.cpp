#include <iostream>
using namespace std;
int bitMultiply(int i)
{
	i = i << 9;
	return i;
}
int main()
{
	cout << "Pease, enter yout num: " << endl;
	int n;
	cin >> n;
	cout << "After multiplying num by 512: " << bitMultiply(n);
}