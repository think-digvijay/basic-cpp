#include<iostream>
using namespace std;

void func(int *main_local_addr){
    
    int func_local;

    if(main_local_addr < &func_local){
        cout<<"Stack grows upward:"<<endl;
        cout<<"main: "<<main_local_addr<<endl;
        cout<<"func: "<<&func_local<<endl;
    } else {
        cout<<"Stack grows downward"<<endl;
        cout<<"main: "<<main_local_addr<<endl;
        cout<<"func: "<<&func_local<<endl;

    }
}

int main(){

    int main_local;
    
    func(&main_local);
    return 0;
}