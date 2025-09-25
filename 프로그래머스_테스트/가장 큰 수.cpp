#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    long long max_num = 0;
    
    sort(numbers.begin(), numbers.end());
    
    do {
        string num = "";
        for(int i=0; i<numbers.size(); i++){
            num += to_string(numbers[i]);
        }
        long long a = stoull(num);
        cout << a << endl;
        if(a > max_num){
            max_num = a;
        }
    } while(next_permutation(numbers.begin(), numbers.end()));

    return to_string(max_num);
}

int main(){
	cout << solution({6, 10, 2});
}
