#include <iostream>
using namespace std;
int main(void) {
    int K = 0, N = 0, M = 0;
    cin >> K;
    cin >> N;
    cin >> M;
    cout << (K * N - M > 0 ? ~(M - K * N) + 1 : 0);
 
}
