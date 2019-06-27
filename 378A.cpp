#include<bits/stdc++.h>
using namespace std;

int main(){

	int a,b;
	cin>>a>>b;
	int a_win=0,a_draw=0,a_lose=0;
	for(int i=1;i<=6;i++)
	{
		int a_dice=abs(i-a);
		int b_dice=abs(i-b);
		if(a_dice==b_dice)
			a_draw++;
		else if(a_dice<b_dice)
			a_win++;
		else
			a_lose++;
	}
	cout<<a_win<<" "<<a_draw<<" "<<a_lose;
	return 0;
}