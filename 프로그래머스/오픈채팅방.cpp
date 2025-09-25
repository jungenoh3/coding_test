#include <string>
#include <vector>
#include <map> 
#include <sstream>
#include <iostream> 

using namespace std;

vector<string> solution(vector<string> record) {
	map<string, string> m;
	vector<string> answer;
    
	for(string s: record){
    	string command;
		string key;
    	string name;
		
		stringstream ss(s);
    	
    	ss >> command >> key >> name;
    	
    	// Leave 때는 name이 없었다!!!! 
    	if (command.compare("Enter")==0 || command.compare("Change")==0){
    		m[key] = name;
		}
	}
	
	for(string s: record){
    	string command;
		string key;

		stringstream ss(s);
    	
    	ss >> command >> key;
    	if (command.compare("Enter") == 0){
    		answer.push_back(m[key] +"님이 들어왔습니다.");
		} else if (command.compare("Leave") == 0){
			answer.push_back(m[key] +"님이 나갔습니다.");
		}
	}

    return answer;
}

int main(){
	vector<string> v = {"Enter 1234 Muzi", "Enter 45 Prodo","Leave 1234","Enter 1234 Prodo","Change 45 Ryan"};
	vector<string> answer = solution(v);
	for(string s: answer){
		cout << s << "\n";
	}
}
