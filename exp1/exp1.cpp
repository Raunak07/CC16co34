#include<iostream>
#include<string>
using namespace std;
int main()
{
string str,arr1[10];
int n,d,i;
cout<<"Enter the number of terms in the expression"<<endl;
cin>>n;

cout<<"Enter the string"<<endl;
for(i=0;i<n;i++)
{
cin>>str;
arr1[i]=str;
}

cout<<endl<<"----------------------------------------"<<endl<<"OUTPUT"<<endl;

for(i=0;i<n;i++)
{
if(arr1[i]=="=")
cout<<arr1[i]<<" -> Assignment operator\n";
else if(arr1[i]=="+"||arr1[i]=="-"||arr1[i]=="*"||arr1[i]=="/"||arr1[i]=="%")
cout<<arr1[i]<<" -> Arithmetic operator\n";
else if(arr1[i]==">"||arr1[i]=="<"||arr1[i]=="<="||arr1[i]==">="||arr1[i]=="=="||arr1[i]=="!=")
cout<<arr1[i]<<" -> Relational operator\n";
else if(arr1[i]=="for"||arr1[i]=="while"||arr1[i]=="if"||arr1[i]=="do"||arr1[i]=="switch"||arr1[i]=="else"||arr1[i]=="int")
cout<<arr1[i]<<" -> Keyword\n";
else if((arr1[i]>="a" && arr1[i]<="z")||(arr1[i]>="A" && arr1[i]<="Z"))
cout<<arr1[i]<<" -> operand\n";
else if(arr1[i]==";"||arr1[i]=="("||arr1[i]==")"||arr1[i]=="{"||arr1[i]=="}")
cout<<arr1[i]<<" -> Delimiter\n";
else if(arr1[i]>="0" && arr1[i]<="9")
cout<<arr1[i]<<" -> Constants\n";
}
return 0;
}


