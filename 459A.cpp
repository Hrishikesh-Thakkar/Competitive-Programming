#include<bits/stdc++.h>
using namespace std;

int main(){

int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

if(x1==x2)
{
	cout<<x1+abs(y2-y1)<<" "<<y1<<" ";
	cout<<x1+abs(y2-y1)<<" "<<y2<<" ";
}
else if(y1==y2)
{
	cout<<x1<<" "<<y1+abs(x2-x1)<<" ";
	cout<<x2<<" "<<y1+abs(x2-x1)<<" ";
}
else if(abs(x2-x1)==abs(y2-y1))
{
int min_x=min(x1,x2);
int max_x=max(x1,x2);
int min_y=min(y1,y2);
int max_y=max(y1,y2);

if((min_x==x1 && min_y==y1) || (min_x==x2 && min_y==y2))
{
cout<<min_x<<" "<<max_y<<" ";
cout<<max_x<<" "<<min_y<<" ";
}
else{
	cout<<min_x<<" "<<min_y<<" ";
	cout<<max_x<<" "<<max_y<<" ";
}
}
else cout<<-1;
return 0;
}