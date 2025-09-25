#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
	1. 처믕에는 입력 -> X의 char이 Y에 있는지 확인하고 -> 있으면 answer에 넣음 -> 정렬
	형식으로 진행했으나 시간 초과가 나서
	2. 입력을 차례순으로 했으나 역시 시간 초과가 났는데
	**계수 정렬**이 있구나... 
*/ 


string solution(string X, string Y) {
	vector<int> countX(10, 0), countY(10, 0); // vector 10칸을 0으로 초기화 x2 
	string answer = "";
	
    for (char c: X) { countX[c - '0']++; } // 각 수가 몇번 나왔는지 체크 
    for (char c: Y) { countY[c - '0']++; }
    
    for(int i=9;  i>=0; --i){
    	int min = countX[i] < countY[i] ? countX[i] : countY[i]; // 가장 작은 거 
    	answer.append(min, i + '0'); // 뒤에 그 수가 나온만큼 더하기 
	}
    
    if (answer.empty()){
    	return "-1";
	}
	
	if(answer.front() == '0'){
		return "0";
	}

    return answer;
}

int main(){
	cout << solution("12321", "42531");
}
