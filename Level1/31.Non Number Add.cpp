// Programmers Level 1. 없는 숫자 더하기 
// https://programmers.co.kr/learn/courses/30/lessons/86051

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers) {
	vector<int> v(10, 1);
	for (int i = 0; i < numbers.size(); i++)
		v[numbers[i]]--;
	int a = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != 0)
			a += i;
	}
	return a;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v = { 1,2,3,4,6,7,8,0 };
	cout << solution(v);

	return 0;
}