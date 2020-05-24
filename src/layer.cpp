#include "../headers/layer.h"
#include <bits/stdc++.h>
/*layer::layer(int l, int post_n, double a[]){
	k=l;
	for(int i=0;i<k;i++){
		node c;
		c.init(a[i],post_n);
		neuron[i]=c;
		cout<<"ok";
	}
    cout<<endl;
}*/
void layer::put(int l, int post_n){
	k=l;
	for(int i=0;i<k;i++){
		node c;
		c.init(neuron[i].v,post_n);
		neuron[i]=c;
		cout<<"ok";
	}
    cout<<endl;
}
void layer::calc(layer pre, int i){
	double sum=neuron[i].b;
	for(int j=0;j<pre.k;j++){
		sum+=pre.neuron[j].w[i]*pre.neuron[j].v;
	}
	neuron[i].activate(sum);
	//cout<<neuron[i].v<<endl;
}
void layer::set_value(double a[]){
    for(int i=0;i<k;i++){
        neuron[i].v=a[i];
    }
}
void layer::get_max(){
    int maxi=1;
    double maxv=neuron[0].v;
    for(int i=1;i<k;i++){
        if(neuron[i].v>maxv){
            maxi=i+1;
            maxv=neuron[i].v;
        }
    }
    cout<<maxi<<endl;
}
