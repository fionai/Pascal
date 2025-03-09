#include <iostream>
using namespace std;
//#define PASCAL_ARR
#define PASCAL_CLEAR


void main()
{
	setlocale(LC_ALL, "");

#ifdef PASCAL_ARR

	int n, k;
	int num[22], num2[22]; // num - ���������� ������, num2 - �����, ����������� � ������ ������

	cout << "����������� �������\n";
	cout << "������� ������ ������������ (���������� �����), �� ����� 20: ";
	cin >> n;

	while (n > 20)
	{
		cout << "������� �����, �� ������, ��� 20: ";
		cin >> n;
	}


	for (int i = 0; i < n; i++) //�������, �� �� ����� ������� ������, �� �� ���������� ��������� ��������� ���������� ������
	{
		k = 0;
		for (int j = 0; j < n - i; j++)
		{
			if (j == n - i - 1) // ������� ������� ������� ����� ������
			{
				num2[k] = 1;
				cout << num2[k] << "     ";
				k++;
				for (int f = 0; f < i; f++) //����� ������� ����� ���������� ������ �� i ���������
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
		cout << endl << endl;

		for (int j = 0; j <= k; j++) //���������� ������� ������
			num[j] = num2[j];
	}
#endif // PASCAL_ARR

#ifdef PASCAL_CLEAR


	int n;
	double num; // ����� ���.�����, ����� �� ���� ������������ ��������
	int num2, len;

	cout << "����������� �������\n";
	cout << "������� ������ ������������ (���������� �����): ";
	cin >> n;


	for (int i = 0; i < n; i++) //�������, �� �� ����� ������� ������, �� �� ���������� ��������� ��������� ���������� ������
	{
		for (int j = 0; j < n - i; j++)
		{
			if (j == n - i - 1) // ������� ������� ������� ����� ������
			{
				cout << 1 << "       ";
				for (int f = 1; f <= i; f++) //����� ������� ����� ���������� ������ �� i ���������
				{
					//���������� ��������
					num = 1;
					for (int x = 0; x < (i - f); x++)
					{
						num *= (i - x);
						num /= (x + 1);
					}

					num2 = num;
					cout << num2;

					//��������� ����� �����
					len = 0;
					while (num2)
					{
						len++;
						num2 /= 10;
					}
					
					for (int l = 0; l < (8 - len); l++)
						cout << " ";
				}
			}
			else
				cout << "    "; // ���� �������� �� 30 �����, ��� ������� ������ 4 ����� �� ���� �������
		}
		cout << endl;// << endl;
	}
#endif // PASCAL_CLEAR


}