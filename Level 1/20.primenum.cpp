// Programmers Level 1. �Ҽ� ã��
// https://programmers.co.kr/learn/courses/30/lessons/12921
 
#include <bits/stdc++.h>
using namespace std;
int prime[1000002];

int solution(int n) { // �����佺�׳׽��� ü �̿�
	for (int i = 2; i <= n; i++) // ���� �迭�� �� ���� ���� �Է�, �Ҽ��� 2���� ����
		prime[i] = i;
	for (int i = 2; i <= n; i++)  
	{
		if (prime[i] == 0) // 0�� �׸��� ����
			continue;
		for (int j = i + i; j <= n; j += i) // i�� ����� ��� �迭 �׸��� 0���� ���� 
			prime[j] = 0;
	}
	int answer = 0;
	for (int i = 2; i <= n; i++) // 0�� �ƴ� �迭�� ���� count
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
