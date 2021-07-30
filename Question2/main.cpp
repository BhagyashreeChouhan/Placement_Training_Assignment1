#include <iostream>

using namespace std;

int main()
{
    int a,b,c,p;

    cout<<"Enter a three digit number : "<<endl;
    cin>>a;

    p=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if (p==c)

       cout<<"It is PALINDROME. "<<endl;
    else
       cout<<"It is not a PALINDROME. "<<endl;

    return 0;
}
