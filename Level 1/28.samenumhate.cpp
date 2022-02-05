// Programmers Level 1. 같은 숫자는 싫어
// https://programmers.co.kr/learn/courses/30/lessons/12906

#include <bits/stdc++.h>
using namespace std;

vector<int> firstsolution(vector<int> arr) {
	vector<int> answer;
	int a = -1;
	for (int i = 0; i < (int)arr.size(); i++)
	{
		if (a != arr[i])
		{
			a = arr[i];
			answer.emplace_back(arr[i]);
		}
		else
			continue;
	}
	return answer;
}
vector<int> solution(vector<int> arr) {
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	return arr;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v = { 4,3,4,3,4,3,4,3,4,3 };
	vector<int> solve;

	solve = solution(v);
	for (auto& e : solve)
		cout << e << ' ';
	cout << '\n';
	return 0;
}