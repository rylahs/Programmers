// Programmers Level 1. x만큼 간격이 있는 n개의 숫자
// https://programmers.co.kr/learn/courses/30/lessons/12954

#include <bits/stdc++.h>
using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer;
	long long a = 0;
	for (int i = 0; i < n; i++)
	{
		a += x;
		answer.emplace_back(a);
	}
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x, n;
	cin >> x >> n;
	vector<long long> v;
	v = solution(x, n);
	cout << "[";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i + 1 != v.size())
			cout << ',';
	}
	cout << "]";
	return 0;
}