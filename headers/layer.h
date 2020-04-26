#include "node.h"
#include <bits/stdc++.h>
class layer: public node{
	node neuron[750];//niz neurona
	int k;//broj neurona u jednom layeru
	public:
		void calc_n(int i);//racuna vrednost u ovom cvoru u zavisnosti od cvorova prethodnog layera
		
};