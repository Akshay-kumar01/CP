#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;    //double pointer
    cout<<i<<" "<<ptr<<" "<<ptr2<<endl;

    //dereferencing the pointer
    cout<<i<<" "<<*ptr<<" "<<**ptr2<<endl;

    //printing address
    cout<<&i<<" "<<ptr<<" "<<*ptr2<<endl;

    return 0;
}