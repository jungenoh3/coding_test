#include <vector>
#include <string>
#include <iostream>

using namespace std;


int solution(string str1, string str2){
	int n = str1.length();
	int m = str2.length();
	
	vector<vector<int>> v(n+1, vector<int>(m+1, 0));
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(str1[i] == str2[j]){
				v[i][j] = v[i-1][j-1] + 1;
			} else {
				v[i][j] = max(v[i-1][j], v[i][j-1]);
			}
		}
	}
	
	return v[n][m];
}

int main(){
	cout << solution("AGGTAB","GXTXYAB");
}
