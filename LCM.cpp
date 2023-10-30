#include<iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cin>>n1>>n2;
    int smallestnum = min(n1,n2);  // find the smallest num from n1 and n2
    int hcf = -1;
    for(int factor=1;factor<=smallestnum;factor++)
    {
        if((n1%factor==0) && (n2%factor==0))
        {
            hcf=factor;
        }
    }
    int lcm = (n1*n2)/hcf;
    cout<<lcm<<endl;
    return 0;

}
