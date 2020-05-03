#include "node.h"
#include <bits/stdc++.h>
class layer{
	node neuron[800];//niz neurona
	int k;//broj neurona u jednom layeru
	public:
		layer(int l, int post_n, double a[]);//konstruktor sloja u zavisnosti od broja cvorova-l
		void calc(layer pre,  int i);//racuna vrednost u i-tom cvoru u zavisnosti od cvorova prethodnog layera
};