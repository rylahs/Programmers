// Programmers Level 1. 최대공약수와 최소공배수
// https://programmers.co.kr/learn/courses/30/lessons/12940

#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
	if (m == 0)
		return n;
	else
		return gcd(m, n % m);
}


vector<int> solution(int n, int m) {
	int gcdresult = gcd(n, m);
	
	vector<int> answer;
	answer.emplace_back(gcdresult);
	answer.emplace_back(n * m / gcdresult);
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v;
	int n, m;
	cin >> n >> m;
	v = solution(n, m);
	cout << "[";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i + 1 != v.size())
			cout << ",";
	}
	cout << "]";
	return 0;
}