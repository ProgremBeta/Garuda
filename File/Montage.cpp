#include <bits/stdc++.h>

using namespace std;

bool confirmacion(int arreglo[], int n,int m)
{
	int contador=1;
	for(int i=0;i<m;i++)
   	{
   	    if(contador>n)
		{
			return false;
		}
   		if(arreglo[i]==arreglo[i+1])
   		{
   			contador++;
		}
		else
		{
			contador=1;
		}
		
	}
	return true;
}


int main() {
    
    int m,n;
    cin>>m>>n;
    int arreglo[1000006];
    for(int i=0;i<m;i++)
    {
    	cin>>arreglo[i];
	}
	sort(arreglo,arreglo+m);
	
	
	bool resultado = confirmacion(arreglo,n,m);
    cout << (resultado ? "yes" : "no") << endl; 
	return 0;
	
}

