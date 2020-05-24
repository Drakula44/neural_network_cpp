#include "../headers/node.h"
#include<bits/stdc++.h>
#define e 2.7182818
using namespace std;
void node::init(double v1,int n1){
	srand(time(NULL));
	v=v1;
	n=n1;
	for(int i=0;i<=n;i++){
		w[i]=rand()/pow(10,8);
		//cout<<w[i]<<endl;
	}
}
double node::activate(double x){
	v=1/(1+pow(e,-x));//zasada je sigmoid
	return v;
}
const node& node::operator=(const node &p){
	if(&p==this) return *this;
	v=p.v;
	n=p.n;
	b=p.b;
	for(int i=0;i<n;i++){
		w[i]=p.w[i];
	}
	return *this;
}
