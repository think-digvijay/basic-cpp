#include<iostream>
using namespace std;

void printnos(int n){
    if(n>0){
        printnos(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    printnos(100);
    return 0;
}