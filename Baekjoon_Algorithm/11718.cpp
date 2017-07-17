/*
문제 : 입력 받은 대로 출력하는 프로그램을 작성하시오.

입력 : 입력이 주어진다. 
입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 
또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.

출력 : 입력받은 그대로 출력한다.
*/

#include <iostream>
using namespace std;

int main()
{
	char arr[100][100] = {};
	int word = 0;
	int line = 0;
	char buffer;

	while (true)
	{
		cin >> buffer;
		if (buffer == EOF) break;
		arr[line][word++] = buffer;
		
		if (word >= 100)
		{
			word = 0;
			++line;
			if (line >= 100) break;
		}
	}

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < 100; ++i)
			cout << arr[i][j];
	}
}