#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> Arreglo;
	int entrada;

	for (int i = 0; i < n; ++i)
	{
		cin>>entrada;
		Arreglo.Push_back(entrada);
	}

	int PuntosMaximos=0;

	vector<int> Arreglo2;
	for (int i = 0; i < n; ++i)
	{
		Arreglo2 = Arreglo;

		if (i + m >= n)
		{
			if (i<Arreglo2.size())
			{
				Sort(Arreglo2.begin()+1,Arreglo2.end());
			}
		else
		{
			if (i + m <= Arreglo2.size())
			{
				sort(Arreglo2.begin() + 1, Arreglo2.end() + i + 1);
			}
		}
		}
	}
}