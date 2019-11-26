#include <iostream>
using namespace std;

int main(int argc, char* args)
{
    int i;
    int num = 0;
    for(i = 1; i < 1000; ++i)
        if(i % 3 == 0 || i % 5 == 0)
            num += i;
    cout<<num<<endl;
}
