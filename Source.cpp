#include <iostream>
using namespace std;

//=======================================
// ��� �������� �� ������
//=======================================

void main()
{
	setlocale(LC_ALL, "");

	int n, k;
	int s = 0; // "������" �������
	int num[22], num2[22]; // num - ���������� ������, num2 - �����, ����������� � ������ ������

	cout << "����������� �������\n";
	cout << "������� ������ ������������ (���������� �����), �� ����� 20: ";
	cin >> n;

	while (n > 20)
	{
		cout << "������� �����, �� ������, ��� 20: ";
		cin >> n;
	}


	for (int i = 0; i < n; i++)
	{
		k = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (j == n - i - 1)
			{
				cout << 1 << "     ";
				num2[k] = 1;
				k++;
				for (int f = 0; f < s; f++)
				{
					num2[k] = num[k - 1] + num[k];
					cout << num2[k];

					if (num2[k] < 10) cout << "     ";
					else if (num2[k] < 100) cout << "    ";
					else if (num2[k] < 1000) cout << "   ";
					else if (num2[k] < 10000) cout << "  ";
					else if (num2[k] < 100000) cout << " ";
					k++;
				}
			}
			else
				cout << "   "; // ����������, ��� � ����� ������ ��� ������� ���� 3 ����� �� ���� �������
		}
		num2[k] = 0;
		s = k; // ���������� ���������� ��������� ��������� �������� �������
		cout << endl << endl;
		for (int j = 0; j <= s; j++)
			num[j] = num2[j];
	}

}