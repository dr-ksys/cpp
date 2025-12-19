#include <iostream>

using namespace std;

int main() {
	int res = 1;
	for (int i = 1; i <= 5; ++i)
		res *= 7;
	cout << "Число горстей зерна равно: " << res << endl;
	return 0;
}
