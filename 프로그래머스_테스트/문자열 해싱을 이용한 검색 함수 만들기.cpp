#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

long long string_hash(string s){
	const int p = 31;
	const long long m = 1000000007;
	long long hash_value = 0;
	
	for(int i=0; i<s.size(); i++){
		hash_value += s[i] * (p^i);
	}
	
	return hash_value % m;
}

vector<bool> solution(vector<string> string_list, vector<string> query_list){
	set<long long> hash_set;
	vector<bool> answer;
	
	for(int i=0; i<string_list.size(); i++){
		hash_set.insert(string_hash(string_list[i]));
	}
	
	for(int i=0; i<query_list.size(); i++){
		cout << query_list[i] << " ";
		if (hash_set.find(string_hash(query_list[i])) != hash_set.end()){
			answer.push_back(true);
		} else {
			answer.push_back(false);
		}
	}
	cout << endl;
	
	return answer;
}

int main(){
	vector<string> string_list = {"apple", "banana", "cherry"};
	vector<string> query_list = {"banana", "kiwi", "melon", "apple"};
	
	vector<bool> answer = solution(string_list, query_list);
	
	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << " ";
	}
}
