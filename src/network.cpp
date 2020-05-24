#include "../headers/network.h"
#include<bits/stdc++.h>
using namespace std;
network::network(){
    in.put(784,16);
    mid1.put(16,16);
    mid2.put(16,10);
    out.put(10,1);
}
void network::all(double a1[]){
        in.set_value(a1);
        for(int i=0;i<16;i++){
            mid1.calc(in,i);
        }
        cout<<endl;
        for(int i=0;i<16;i++){
            mid2.calc(mid1,i);
        }
        cout<<endl;
        for(int i=0;i<10;i++){
            out.calc(mid2,i);
        }
}
void network::rez(){
    out.get_max();
}
