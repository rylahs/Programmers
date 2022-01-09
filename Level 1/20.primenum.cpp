// Programmers Level 1. 소수 찾기
// https://programmers.co.kr/learn/courses/30/lessons/12921
 
#include <bits/stdc++.h>
using namespace std;
int prime[1000002];

int solution(int n) { // 에라토스테네스의 체 이용
	for (int i = 2; i <= n; i++) // 전역 배열에 각 항의 숫자 입력, 소수는 2부터 시작
		prime[i] = i;
	for (int i = 2; i <= n; i++)  
	{
		if (prime[i] == 0) // 0인 항목은 제외
			continue;
		for (int j = i + i; j <= n; j += i) // i의 배수인 모든 배열 항목을 0으로 정리 
			prime[j] = 0;
	}
	int answer = 0;
	for (int i = 2; i <= n; i++) // 0이 아닌 배열의 수를 count
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
