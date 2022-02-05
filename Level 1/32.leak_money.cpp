// Programmers Level 1. 부족한 금액 계산하기
// https://programmers.co.kr/learn/courses/30/lessons/82612

#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count)
{
	long long answer = money;
	int i = 1;
	while (i <= count)
	{
		answer -= price * i;
		i++;
	}

	if (answer < 0)
		return -1 * answer;
	else
		return 0;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int price, money, count;
	price = 3, money = 20, count = 4;
	long long result;
	result = solution(price, money, count);
	cout << result << "\n";
	return 0;
}