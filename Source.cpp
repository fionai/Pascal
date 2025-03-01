#include <iostream>
using namespace std;

//=======================================
// Ѕ≈« ћј——»¬ќ¬ Ќ≈ —ћќ√Ћј
//=======================================

void main()
{
	setlocale(LC_ALL, "");

	int n, k;
	int s = 0; // "размер" массива
	int num[22], num2[22]; // num - предыдущий массив, num2 - новый, формируемый в данный момент

	cout << "“–≈”√ќЋ№Ќ»  ѕј— јЋя\n";
	cout << "¬ведите высоту треугольника (количество строк), не более 20: ";
	cin >> n;

	if (n > 20)
	{
		cout << "¬ведите число, не больше, чем 20: ";
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
				for (int f = 0; f < s*2; f ++)
				{
					if (f % 2)
					{
						num2[k] = num[k - 1] + num[k];
						cout << num2[k];
						
						if		(num2[k] < 10) cout << "     ";
						else if (num2[k] < 100) cout << "    ";
						else if (num2[k] < 1000) cout << "   ";
						else if (num2[k] < 10000) cout << "  ";
						else if (num2[k] < 100000) cout << " ";
						k++;
					}
				}
			}
			else
				cout << "   "; // определила, что в нашем случае дл€ красоты надо 3 места на одну позицию
		}
		num2[k] = 0;
		s = k; // запоминаем количество ненулевых элементов текущего массива
		cout << endl << endl;
		for (int j = 0; j <= s; j++)
			num[j] = num2[j];
	}

}