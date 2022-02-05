// Programmers Level 1. 문자열 내림차순으로 배치하기
// https://programmers.co.kr/learn/courses/30/lessons/12917

#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
	sort(s.begin(), s.end(),greater<>());
	return s;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "Zbcdefg";
	string s1 = "ZCDGHfnjowh";

	cout << solution(s) << '\n';
	cout << solution(s1) << '\n';
	return 0;
}