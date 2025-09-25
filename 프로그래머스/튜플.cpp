#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<vector<int>> answer;
    vector<int> numbers;
    string number;
    
    for(int i=1; i<s.length()-1; i++){
        if(s[i] == '{'){
            numbers.clear();
        } else if (s[i] == ','){
            if(number.length() > 0){
                numbers.push_back(stoi(number));
                number.clear();
            }
        } else if (s[i] == '}'){
            if(number.length() > 0){
                numbers.push_back(stoi(number));
            }
            answer.push_back(numbers);
        } else {
            number+= s[i];
        }
    }
    
    sort(answer.begin(), answer.end(), [](vector<int> a, vector<int> b){
        return a.size() < b.size();
    });
    
	unordered_set<int> us;
    for(int i=0; i<answer.size(); i++){
        for(int j=0; j<answer[i].size(); j++){
            us.insert(answer[i][j]);
        }
    }
    

	for(auto it: us){
		cout << it << " ";
	}
    
    return answer[0];
}

int main(){
	solution("{{2},{2,1},{2,1,3},{2,1,3,4}}");
}
