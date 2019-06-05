#include <iostream>

using namespace std;

int main()
{
    int c,d,i;
    cin>>c;
    cin>>d;
    for(i=c+1;i<d;i++)
    {
    if(i%2!=0)
    {
        cout<<i<<" ";
    }
    }

    return 0;
}
