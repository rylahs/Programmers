// Programmers Level 1. Æò±Õ ±¸ÇÏ±â
// https://programmers.co.kr/learn/courses/30/lessons/12944

#include <bits/stdc++.h>
using namespace std;
double solution(vector<int> arr) {
	return (double)accumulate(arr.begin(), arr.end(), 0) / arr.size(); // #include <numeric> accumulate function
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> arr;
	arr.emplace_back(1);
	arr.emplace_back(2);
	arr.emplace_back(3);
	arr.emplace_back(4);

	double avg = solution(arr);
	cout << avg << '\n';
	return 0;
}