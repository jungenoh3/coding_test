#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
	1. ó�׿��� �Է� -> X�� char�� Y�� �ִ��� Ȯ���ϰ� -> ������ answer�� ���� -> ����
	�������� ���������� �ð� �ʰ��� ����
	2. �Է��� ���ʼ����� ������ ���� �ð� �ʰ��� ���µ�
	**��� ����**�� �ֱ���... 
*/ 


string solution(string X, string Y) {
	vector<int> countX(10, 0), countY(10, 0); // vector 10ĭ�� 0���� �ʱ�ȭ x2 
	string answer = "";
	
    for (char c: X) { countX[c - '0']++; } // �� ���� ��� ���Դ��� üũ 
    for (char c: Y) { countY[c - '0']++; }
    
    for(int i=9;  i>=0; --i){
    	int min = countX[i] < countY[i] ? countX[i] : countY[i]; // ���� ���� �� 
    	answer.append(min, i + '0'); // �ڿ� �� ���� ���¸�ŭ ���ϱ� 
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
