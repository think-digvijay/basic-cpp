#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    for(int i = 1; i <=n; i++){
        
        if(n){
            cout<<"FizzBuzz"<<endl;    
            continue;    
        } else if(n%3 == 0){
            cout<<"Fizz"<<endl;    
            continue; 
        } else if(n%5 == 0){
            cout<<"Buzz"<<endl;    
            continue; 
        } else {
            cout<<i<<endl;    
            continue;
        }
    
    }

}

int main(){

    fizzBuzz(15);
    return 0;
}