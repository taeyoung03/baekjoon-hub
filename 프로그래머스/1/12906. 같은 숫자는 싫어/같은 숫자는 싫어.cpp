#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++){
        answer.push_back(arr[i]);
        if(i > 0 && answer.back() == answer[answer.size() - 2]){
            answer.pop_back();
        }
    }

    return answer;
}