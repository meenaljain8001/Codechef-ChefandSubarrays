#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int sum=0,product=1;
        for(int j=i;j>=0;j--)
        {
            sum=sum+a[j];
            product*=a[j];
            if(sum==product)
                c++;
        }
    }

    cout<<c<<endl;
}

    return 0;
}
