// Programmers Level 1. 자연수 뒤집어 배열로 만들기
// https://programmers.co.kr/learn/courses/30/lessons/12932

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	while (n != 0)
	{
		answer.emplace_back(n % 10);
		n /= 10;
	}
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	n = 12345;
	vector<int> v;
	v = solution(n);

	for (auto& e : v)
		cout << e;


	return 0;
}