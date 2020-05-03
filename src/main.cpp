#include "../headers/layer.h"
#include <bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"krenuo gas"<<endl;
	double a[800];
	for(int i=0;i<784;i++){
		a[i]=abs(sin(rand()));
	}
	layer in(784,16,a),mid1(16,16,{}),mid2(16,10,{}),out(10,1,{});
	cout<<"ide gas"<<endl;
	for(int i=0;i<16;i++){
		mid1.calc(in,i);
	}
	for(int i=0;i<16;i++){
		mid2.calc(mid1,i);
	}
	for(int i=0;i<10;i++){
		out.calc(mid2,i);
	}
	cout<<"prosao gas"<<endl;
}
