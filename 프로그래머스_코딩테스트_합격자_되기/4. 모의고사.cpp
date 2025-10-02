#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> counts(3, 0);
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == first[i % first.size()]){
            counts[0]++;
        }
        if(answers[i] == second[i % second.size()]){
            counts[1]++;
        }
        if(answers[i] == third[i % third.size()]){
            counts[2]++;
        }
    }
    
    int maxScore = *max_element(counts.begin(), counts.end());    
    vector<int> answer;
    
    for(int i=0; i<3; i++){
        if(counts[i] == maxScore){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}
