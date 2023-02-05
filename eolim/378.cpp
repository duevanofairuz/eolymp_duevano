#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    int nc;
    for(int i=0; i<a.size(); i++){
        nc=a[i]-64;
        if(a[i]==' ') continue;
        else a[i]=b[nc-1];
    }
    cout<<a<<endl;
    return 0;
}