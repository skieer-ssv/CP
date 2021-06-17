#include<bits/stdc++.h>
using namespace std;
void updatehouse(int house[],int Noofhouses,int cop,int range)
{
	int r1=cop-range,r2=cop+range;
	if(r1<=0)
	{
		r1=1;
	}
	if(r2>Noofhouses)
	{
		r2=Noofhouses;
	}
	for(int i=r1;i<=r2;i++)
	{
		house[i]=1;
	}


}



int main()
{
	int t;
	cin>>t;
	int m,x,y;
	while(t--)
	{
		int house[101]={0};
		cin>>m>>x>>y;
		int range=x*y;
		int cop;
		for(int i=0;i<m;i++)
		{
			cin>>cop;
			updatehouse(house,100,cop,range);
		}

		int safe=0;
		for(int i=1;i<101;i++)
		{
			if(house[i]==0)
			{
				safe++;
			}
		}

		cout<<safe<<"\n";


	}





	return 0;

}