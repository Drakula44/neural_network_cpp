#include<bits/stdc++.h>
#include "layer.h"
using namespace std;
class network{
    layer in,mid1,mid2,out;
    /*layer in(784, 16);
	layer mid1(16, 16);
	layer mid2(16, 10);
	layer out(10, 1);*/
public:
    network();
    void all(double a1[]);
    void rez();
};
