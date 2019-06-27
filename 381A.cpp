#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=n-1;
	int count=0;
	int s=0,d=0;
	while(count<n)
	{
		if(count%2==0){
			if(a[i]>a[j])
				{s+=a[i];i++;}
			else {s+=a[j];j--;}

		}

		else{
				if(a[i]>a[j]){d+=a[i]; i++;}
				else{d+=a[j]; j--;}
		}

			count++;
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}