// Programmers Level 1. 콜라츠 추측
// https://programmers.co.kr/learn/courses/30/lessons/12944

#include <bits/stdc++.h>
using namespace std;

int solution(int num)
{
	int answer = 0;
	while (num != 1 && answer < 500)
	{
		if (num % 2 == 0)
			num /= 2;

		else if (num % 2 == 1)
			num = num * 3 + 1;
		
		answer++;
	}
	if (answer >= 500)
		answer = -1;
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int num;
	cin >> num;
	int collartz = solution(num);
	cout << collartz << '\n';
	return 0;
}