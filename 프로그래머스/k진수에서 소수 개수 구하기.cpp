#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

string covertToKdecimal(int n, int k){
    if (n == 0) return "0";
    string converted = "";
    while(n > 0){
        converted += to_string(n % k);    
        n /= k;
    }
    reverse(converted.begin(), converted.end());
    return converted;
}

bool isPrimeNumber(int number){
    if(number <= 1){
        return false;
    }
    
    for(int i=2; i*i<=number; i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string kDecimal = covertToKdecimal(n, k);
    cout << kDecimal << endl;
    
    string a = "";
    for(int i=0; i<kDecimal.length(); i++){
        if(kDecimal[i] == '0'){
            if(a.empty()){ // Áß¿ä
                continue;
            }
            if (isPrimeNumber(stoi(a))){
            	cout << a << endl; 
                answer++;
                a.clear();
            }
        } else {
            a += kDecimal[i];
        }
    }
    
    return answer;
}

int main(){
	int a = solution(437674, 3);
	
	cout << a;
}
