/* Write a c++ program to print the pattern
sample output for n=4
1      1
12    21
123  321
12344321  */

#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n,m;
    cout<<"Enter any number"<<endl;
    cin>>n;
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
    
    for(m=1;m<=2*k-2;m++)
    {
        cout<<" ";

    }
    for(j=i;j>=1;j--)
    {
        cout<<j;
    }
    k=k-1;
    cout<<endl;
}
    return 0;
}