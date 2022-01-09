// Programmers Level 1. ���� ������������ ��ġ�ϱ�
// https://programmers.co.kr/learn/courses/30/lessons/12933

#include <bits/stdc++.h>
using namespace std;

// ó�� �õ� Counting Sort �Ʒ��� �� �����ϴ�.
long long solution_first_try(long long n) {
	long long cSort[10] = { 0, };
	int cnt = 0;
	while (n != 0)
	{
		cSort[n % 10]++;
		n /= 10;
		cnt++;
	}
	string str = "";
	for (int i = 9; i >= 0; i--)
	{
		if (cSort[i] > 0)
		{
			while (cSort[i] != 0)
			{
				str += to_string(i);
				cSort[i]--;
			}
		}
	}

	long long answer = stoll(str);
	return answer;
}

// greater<> �������� ���� string
long long solution(long long n) {
	string str = to_string(n);
	sort(str.begin(), str.end(), greater<>());

	long long answer = stoll(str);
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n = 118372;
	cout << solution(n) << '\n';

	return 0;
}