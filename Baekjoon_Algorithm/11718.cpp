/*
���� : �Է� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� : �Է��� �־�����. 
�Է��� �ִ� 100�ٷ� �̷���� �ְ�, ���ĺ� �ҹ���, �빮��, ����, ���ڷθ� �̷���� �ִ�. 
�� ���� 100���ڸ� ���� ������, �� ���� �־����� �ʴ´�. 
��, �� ���� �������� �������� �ʰ�, �������� ������ �ʴ´�.

��� : �Է¹��� �״�� ����Ѵ�.
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