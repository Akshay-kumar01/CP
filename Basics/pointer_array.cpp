#include <bits/stdc++.h>
using namespace std;

void print(int *ar,int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += ar[i];
    cout << sum << endl;
}

int main()
{
    int arr[10]={2,4,6};
    cout<<arr[0]<<endl;
    cout<<"Address of arr[0] is "<<arr<<" or "<<&arr[0]<<endl;
    cout<<*arr<<endl;

    //arr+1 means next location in array

    cout<<*(arr+1)<<endl;
    cout<<*arr+1<<endl;

    //pointing additions

    cout<<*(arr+2)<<endl; //jumped to next 2 blocks

    cout<<*(&arr[0])<<endl;

    //different for char array and integer array

    int a[10];
    char ch[6]="abcde";

    cout<<a<<" "<<ch<<endl;

    char *p=&ch[0];

    cout<<p<<endl;      //Prints entire char array
    char temp='z';
    char *p1=&temp;
    cout<<p1<<endl;

    int x[6]={1,2,3,4,5,6};

    print(x+3,3);

    return 0;
}