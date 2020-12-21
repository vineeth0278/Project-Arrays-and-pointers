#include <iostream>
using namespace std;

int main()
{
int arr[10];
int *p , n;

cout<<"No. of integers(<=10) you want to enter;"<<endl;
cin>>n;
cout<<"Enter your"<<n<<"integers";
for(int i=0;i<n;i++){
	cin>>arr[i];
}
p=arr;
cout<<"Your integers are:"<<endl;
for(int i=0;i<n;i++){
	
	cout<<*p<<endl;
	p++;
	}
	return 0;

}
