#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> v = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int idx = -1;
    for(int i=1; i<=a; i++){
        if(i==2){
            for(int j=1; j<=29; j++){
                idx++;
                if(i==a && j==b){
                    break;
                }
            }
        }
        else if(i==4 || i==6 || i==9 || i==11){
            for(int j=1; j<=30; j++){
                idx++;
                if(i==a && j==b){
                    break;
                }
            }
        }
        else{
            for(int j=1; j<=31; j++){
                idx++;
                if(i==a && j==b){
                    break;
                }
            }
        }
    }
    string answer = v[idx%7];
    return answer;
}