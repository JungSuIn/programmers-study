#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    k=0;

    sort(score.begin(), score.end(),greater<int>());

    int n = static_cast<int>(score.size());
    int fullBoxes = n/m;
    for(int b=0; b < fullBoxes; ++b){
        int start = b*m;
        int lowest = score[start + m -1];
        answer += lowest * m;
    }

    return answer;
}
