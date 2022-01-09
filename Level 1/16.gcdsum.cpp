// Programmers Level 1. 약수의 합
// https://programmers.co.kr/learn/courses/30/lessons/12928

#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i != 0)
			continue;
		else
			answer += i;
	}
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	n = 9;
	cout << solution(n) << '\n';
	return 0;
}