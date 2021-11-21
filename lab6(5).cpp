#include<iostream>
using namespace std;

int main()
{
int a[20], b[20], k=0, n=0,m=0 ;
 for (int i=0; i<=19;i++)
  {
    cout << "vvedite a"<<i<< " element: ";
    cin>> a[i];
    cout << "vvedite b"<<i<< " element: ";
    cin>> b[i];
    if (a[i]>b[i]) k++;
     else if (a[i]<b[i]) n++;
      else if (a[i]==b[i]) m++;
   }  
cout<< "vyigryshey: "<<k<<endl;
cout<< "proigryshey: "<<n<<endl;
cout<< "nichya: "<<m<<endl;
    return 0;
}