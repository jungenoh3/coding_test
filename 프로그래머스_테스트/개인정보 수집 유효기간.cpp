#include <string>
#include <unordered_map>
#include <vector>
#include <iostream> 

using namespace std;

int convertToDays(string date){
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8,2));
    
    return (((year * 12) + month) * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> um;
    
    int todayDays = convertToDays(today);
    
    for(int i=0; i<terms.size(); i++){
        um[terms[i][0]] = stoi(terms[i].substr(2));
    }
    
    for(int i=0; i<privacies.size(); i++){
        string date = privacies[i].substr(0, 10);
        char term = privacies[i][11];
        
        int days = convertToDays(date);
        cout << "day before add: " << days << endl;
        
        days += (um[term] * 28);
        days--;
        
        cout << "day: " << days << " today: " << todayDays << endl;
        if (days < todayDays){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}

int main(){
	vector<string> terms = {"A 6", "B 12", "C 3"};
	vector<string> privacies = {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"};
	vector<int> a = solution("2022.05.19", terms, privacies);
	
	for(int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
}
