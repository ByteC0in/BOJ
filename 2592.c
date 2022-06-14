#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, most[101] = {0, }, max = 0, num;
	for(i = 1; i <= 10; i++){
		cin >> num;
		sum += num;
	most[num / 10]++;
	}
	for(i = 1; i <= 100; i++){
        if(max < most[i])            
            max = i;
    }
    cout << sum / 10<<"\n"<< max * 10;
}
