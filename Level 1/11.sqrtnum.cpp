// Programmers Level 1. 정수 제곱근 판별
// https://programmers.co.kr/learn/courses/30/lessons/12934

#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
	long long answer;
	long long sqrtN = sqrt(n);
	
	if (sqrtN * sqrtN == n)
		answer = (sqrtN + 1) * (sqrtN + 1);
	else
		answer = -1;
	
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n = 121;
	long long n1 = 3;
	cout << solution(n) << '\n';
	cout << solution(n1) << '\n';

	return 0;
}