#include<iostream>
using namespace std;
float tong(float a, float b)
  {
    int s=0;
    s=a+b;
    return s;
  }
int main()
{
float s,a,b;
do
{
cout<<"nhap a,b khac 0: ";
cin>>a>>b;
}
while(a!=0 && b!=0)

s=tong(a,b);
cin>>s;
}