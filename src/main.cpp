#include "../headers/network.h"
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*dataIO data;
    data.getData();*/
	srand(time(NULL));
	cout<<"krenuo gas"<<endl;
	network mreza;
	double a[800];
	for(int i=0;i<784;i++){
        a[i]=abs(sin(rand()));
	}
	mreza.all(a);
	cout<<"ide gas"<<endl;
    mreza.rez();
	cout<<"prosao gas"<<endl;
}
