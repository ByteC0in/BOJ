#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int N; 
vector<int> answer_vec;
 
int main() 
{
    cin >> N;
 
    int sub; 
    cin >> sub; 
    answer_vec.push_back(sub);
 
    for (int n_idx = 1; n_idx < N; n_idx++) 
    {
        int sub; 
        cin >> sub; 
 
        int ans_vec_size = answer_vec.size();
        for (int conf_idx = ans_vec_size-1; conf_idx >=0 ; conf_idx--) 
        {
            if (answer_vec.at(conf_idx) < sub ) 
            {
                if (conf_idx == ans_vec_size - 1) answer_vec.push_back(sub);
                else answer_vec.at(conf_idx+ 1 ) = sub;
                break;
            } 
            if ( conf_idx == 0 ) answer_vec.at(0) = sub;
        }
 
    }
 
    cout << answer_vec.size();
 
    return 0;
}
