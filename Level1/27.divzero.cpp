// Programmers Level 1. 나누어 떨어지는 숫자 배열
// https://programmers.co.kr/learn/courses/30/lessons/12910

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;

	for (auto& e : arr)
		if (e % divisor == 0)
			answer.emplace_back(e);
	if (answer.empty())
		answer.emplace_back(-1);
	sort(answer.begin(), answer.end(),less<>());
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v = { 5, 9, 7, 10 };
	int divisor = 5;
	vector<int> solve;
	solve = solution(v, divisor);
	for (auto e : solve)
		cout << e << ' ';
	cout << '\n';


	return 0;
}