#include <algorithm>
#include <vector>

using namespace std;

bool compare(const pair<int, double> &a, const pair<int, double> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<pair<int, double>> v;
    vector<int> stageCount(N+1, 0);

    for(int i=0; i<stages.size(); i++){
        stageCount[stages[i]]++;
    }
    
    int total = stages.size(); // 이걸 N으로 처리했고
    for(int i=1; i<=N; i++){
        if(total == 0){
            v.push_back(make_pair(i, 0));
            continue;
        }
        
        v.push_back(make_pair(i, (double)stageCount[i]/total)); // 형변환 안했고
        total -= stageCount[i];
    }
    
    sort(v.begin(), v.end(), compare);
    
    vector<int> answer;
    
    for(int i=0; i<v.size(); i++){
        answer.push_back(v[i].first);
    }
    
    return answer;
}
