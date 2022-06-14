#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int threeNum = 0;
	int fiveNum = 0;

	int n;
	cin >> n;

	if (n % 5 == threeNum) {
		cout << n / 5;
	}
	else {
		threeNum++;
		while (n - 3 * threeNum>0) {
			if ((n - 3 * threeNum) % 5 == 0) {
				break;
			}
			threeNum++;
		}
		if ((n - 3 * threeNum) % 5 == 0) {
			fiveNum = (n - 3 * threeNum) / 5;
			cout << threeNum + fiveNum;
		}
		else cout << "-1";
	}
    return 0;
}
