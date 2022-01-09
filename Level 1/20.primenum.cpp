// Programmers Level 1. 소수 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12921

#include <bits/stdc++.h>
using namespace std;
int prime[1000002];

int solution(int n) {
	for (int i = 2; i <= n; i++)
		prime[i] = i;
	for (int i = 2; i <= n; i++) 
	{
		if (prime[i] == 0)
			continue;
		for (int j = i + i; j <= n; j += i)
			prime[j] = 0;
	}
	int answer = 0;
	for (int i = 2; i <= n; i++)
		if (prime[i] != 0)
			answer++;
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cout << solution(n) << '\n';

	return 0;
}