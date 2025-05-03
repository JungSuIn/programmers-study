#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab  = to_string(a)+to_string(b);
    int two_ab = 2*a*b;
    
    answer = ( stoi(ab) >= two_ab ) ? stoi(ab) : two_ab ;
    return answer;
}