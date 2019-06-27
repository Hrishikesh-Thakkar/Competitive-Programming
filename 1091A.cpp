#include<bits/stdc++.h>
using namespace std;

int main(){

	int y,b,r;
	cin>>y>>b>>r;

	//r>b>y

	int yel=0,blue=0,red=0;
	for(int i=1;i<=y;i++)
		{

			yel=i;
			if(yel+1>b || yel+2>r)
				{yel--; break;}
		}
		blue=yel+1;
		red=yel+2;
		cout<<yel+blue+red<<endl;
	return 0;
}