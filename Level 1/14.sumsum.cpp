// Programmers Level 1. 자릿수 더하기
// https://programmers.co.kr/learn/courses/30/lessons/12931

#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
	int answer = 0;
	while (n != 0)
	{
		answer += n % 10;
		n /= 10;
	}

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 987;
	cout << solution(n) << '\n';
	return 0;
}