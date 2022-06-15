#include <iostream>

using namespace std; 

int main() 
{ 
  int T; // 테스트 케이스 개수  
  int A, B;  
  char c; 
  cin >> T; 
  for(int i=0;i<T;i++) 
  { 
    cin >> A >> c >> B; 
    cout << A + B << "\n"; 
  } 
} 
