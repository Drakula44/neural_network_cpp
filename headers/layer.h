#include "node.h"
#include <bits/stdc++.h>
class layer{
	node neuron[800];//niz neurona
	int k;//broj neurona u jednom layeru
	public:
	    void put(int l, int post_n);
		//layer(int l, int post_n, double a[]);//konstruktor sloja u zavisnosti od broja cvorova-l
		void set_value(double a[]);
		void calc(layer pre,  int i);//racuna vrednost u i-tom cvoru u zavisnosti od cvorova prethodnog layera
		void get_max();
};
