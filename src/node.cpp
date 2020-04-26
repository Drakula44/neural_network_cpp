#include "../headers/node.h"
#include<bits/stdc++.h>
#define e 2.7182818
using namespace std;
node::node(){
	srand(time(NULL));
	v=0;
	n=16;
	for(int i=0;i<=n;i++){
		w[i]=rand()/pow(10,8);
		cout<<w[i]<<endl;
	}
}
double node::activate(double x){
	v=1/(1+pow(e,-x));
	return v;
}