// Programmers Level 1. 문자열을 정수로 바꾸기
// https://programmers.co.kr/learn/courses/30/lessons/12925

#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
	int answer = stoi(s);
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s = "1234";
	string s1 = "-1234";

	cout << solution(s) << '\n';
	cout << solution(s1) << '\n';

	return 0;
}