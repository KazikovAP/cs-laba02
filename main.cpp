#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:";
    int a,b;
    cin>>a,b;
    cout <<"A+B="<<a+b<<'\n'
    <<"A-B="<<a-b<<'\n'
    <<"A*B="<<a*b<<'\n'
    <<"A/B="<<a/b<<'\n';

    if (a>b) cout<<a;
    if (a<b) cout<<b;

    if (b<a) cout<<b;
    if (b>a) cout<<a;

    return 0;
}
