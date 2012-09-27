#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("permutation.in");
	if(!fin)
		cerr << "NO INPUT FILE" << endl;
	//char buffer[1024];
	
	ofstream fout("permutation.out");
	int n = 1;
	//int size = 0;
	int count = 0;
	while(!fin.eof())
	{
		fin >> n;
		//cout << n << endl;
		fin >> ws;
		int * perm = new int[n];
		for(int l=0;l<n;l++)
		{
			perm[l]=0;
		}
		for(int i = 0; i < n; i++)
		{
			fin >> count;
			//cout << count << " " << endl;
			fin >> ws;
			for(int j = 0; count >= 0 & j < n; j++)
			{
				if(perm[j] == 0)
				{
					
					if(count == 0)
					{
						count = -1;
						perm[j] = i+1;
					}
					count--;
				}
				
			}
		}
		for(int k = 0; k < n; k++)
		{
			fout << perm[k];
			if(k<n-1) fout << ",";
		}
		if(!fin.eof())
			fout << endl;
		
	}	
	return 0;
}
