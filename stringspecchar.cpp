#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	char arr[100];
	cout<<"enter a string of charecters and special charecter"<<endl;
	getline(cin,str);
	int len=str.length();
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]>64&&str[i]<91 ||str[i]>96&&str[i]<123 )
		{
			arr[j]=str[i];
			j++;
		}
	}
	int len1=j;
	int k=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]>64&&str[i]<91 ||str[i]>96&&str[i]<123 )
		{
			str[i]=arr[len1-k-1];
			k++;
		}
	}
	cout<<"appended string is"<<endl;
	cout<<str;
}
/*
input:
a*+b#$%^c%^d
output:
d*+c#$%^b%^a
*/
