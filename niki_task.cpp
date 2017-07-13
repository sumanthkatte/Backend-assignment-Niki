#include <iostream>

using namespace std;
int n;
char A[10];
  int counter=0;
  void func(char B[])
  {
  for(int i=0;i<n;i++)
   {
    if((B[i]=='0') && (B[i+1]=='0'))
            {
          return;

            }

    }


        counter++;

  }
void binary(int n)
{

    if(n < 1)
    {
    func(A);


    }
    else
    {
        A[n-1] = '0';
        binary(n-1);


        A[n-1] = '1';
        binary(n-1);


    }
}
int main()
{
int t;
cout<<"Enter the test cases"<<endl;
cin>>t;
while(t!=0)
{
 cout<<"Enter the 'N' value"<<endl;
  cin>>n;
 binary(n);
 cout<<"Result:"<<endl;
cout<<counter<<endl;
counter=0;
t--;
}
    return 0;
}
