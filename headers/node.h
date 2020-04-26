#include<bits/stdc++.h>
using namespace std;
class node{
	protected:
		double v;//vrednost u cvoru
		int n;//broj linija koji polazi iz cvora
		double w[16];//tezine svake od linija koje povezuju sa sledecim slojem
		double b;//bias
	public:
		node();	
		double activate(double x);
};