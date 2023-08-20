#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num=5;
    int *ptr=&num;
    cout<<num<<" "<<*ptr<<endl; //dereferencing operator

    cout<<ptr<<endl; //address

    cout<<sizeof(num)<<" "<<sizeof(ptr)<<endl;   //size is 8 bits

    (*ptr)++;
    cout<<*ptr<<endl;

    //copying a pointer 

    int *q=ptr;
    cout<<ptr<<" "<<q<<endl;
    (*q)++;
    cout<<ptr<<" "<<q<<endl;
    cout<<num<<endl;
    q++;
    cout<<*q<<endl;
    ptr++;
    cout<<*ptr<<endl;

    return 0;
}