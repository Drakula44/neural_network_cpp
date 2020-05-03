#include "../headers/layer.h"
#include <bits/stdc++.h>
layer::layer(int l, int post_n, double a[]){
	k=l;
	for(int i=0;i<k;i++){
		node c;
		c.init(a[i],post_n);
		neuron[i]=c;
	}

}
void layer::calc(layer pre, int i){
	double sum=neuron[i].b;
	for(int j=0;j<pre.k;j++){
		sum+=pre.neuron[j].w[i]*pre.neuron[j].v;
	}
	neuron[i].activate(sum);
}