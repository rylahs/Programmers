// Programmers Level 1. 제일 작은 수 제거하기
// https://programmers.co.kr/learn/courses/30/lessons/12935

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &arr) {
	arr.erase(min_element(arr.begin(), arr.end()));
	if (arr.empty())
		arr.emplace_back(-1);
	return arr;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> v = { 10 };
	v = solution(v);

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