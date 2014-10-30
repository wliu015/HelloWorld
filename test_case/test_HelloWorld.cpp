#include "../code/HelloWorld.h"
#include <iostream>

int main()
{
    cout<<"test case 1: test HelloWorld class exsist?"<<endl;
    HelloWorld h;
    cout<<" test case 1 passed!"<<endl;
    
    cout<<"test case 2: test method say exsist?"<<endl;
    string str = h.say();
    cout<<"test case 2 passed!"<<endl;

    cout<<"test case 3: test method say return the right value?"<<endl;
    if(str.compare("Hello!") == 0){
        cout<<"test case 3 passed!"<<endl;
    }else{
        cout<<"test case 3 failed!"<<endl;
        return -1;
    }

    return 0;
}

