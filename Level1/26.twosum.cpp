// Programmers Level 1. 문자열 내 마음대로 정렬하기
// https://programmers.co.kr/learn/courses/30/lessons/12915

#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	long long maxNum = max(a, b);
	long long minNum = min(a, b);
	answer = ((maxNum * (maxNum + 1)) / 2) - (((minNum - 1) * minNum) / 2);
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	cout << solution(a, b) << '\n';
	return 0;
}