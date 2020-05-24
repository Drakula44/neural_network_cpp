#include "../headers/layer.h"
#include <bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"krenuo gas"<<endl;
	double a[800],b[20],c[20],d[20];
	for(int i=0;i<784;i++){
		a[i]=abs(sin(rand()));
	}
	for(int i=0;i<16;i++){
		b[i]=abs(sin(rand()));
	}
	for(int i=0;i<16;i++){
		c[i]=abs(sin(rand()));
	}
	for(int i=0;i<10;i++){
		d[i]=abs(sin(rand()));
	}
	layer in(784,16,a);
	layer mid1(16,16,b);
	layer mid2(16,10,c);
	layer out(10,1,d);
	cout<<"ide gas"<<endl;
	for(int i=0;i<16;i++){
		mid1.calc(in,i);
	}
	cout<<endl;
	for(int i=0;i<16;i++){
		mid2.calc(mid1,i);
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		out.calc(mid2,i);
	}
	cout<<"prosao gas"<<endl;
}
