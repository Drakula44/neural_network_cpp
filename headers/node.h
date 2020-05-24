#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		double v;//vrednost u cvoru
		int n;//broj linija koji polazi iz cvora
		double w[20];//tezine svake od linija koje povezuju sa sledecim slojem
		double b;//bias
		void init(double v1,int n1);
		double activate(double x);
		const node& operator=(const node &p);
};
