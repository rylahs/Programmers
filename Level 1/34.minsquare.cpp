// Programmers Level 1. 최소직사각형
// https://programmers.co.kr/learn/courses/30/lessons/86491

#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
	for (int i = 0; i < sizes.size(); i++)
	{
		if (sizes[i][0] > sizes[i][1])
			swap(sizes[i][0], sizes[i][1]);
	}
	int maxW = 0, maxH = 0;

	for (int i = 0; i < sizes.size(); i++)
	{
		maxW = max(maxW, sizes[i][0]);
		maxH = max(maxH, sizes[i][1]);
	}

	int answer = maxW * maxH;
	return answer;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<vector<int>> v = { {60, 50}, {30, 70}, {60, 30}, {80, 40} };
	sort(v.begin(), v.end());


	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << "\n";
	}
	cout << solution(v) << "\n";
	return 0;
}