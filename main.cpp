#include <iostream>

using namespace std;

int main() { 
float A,B,c;
char d;
cout<<"pls enter the numbers"<<'\n'<<"A"<<'\n'<<"B";
cin>>A>>d>>B>>c;
switch(d){
case '+':
c=A+B;
break;	
case '-':
c=A-B;
break;
case '*':
c=A*B;
break;	
case'%':
c=A+B;	
}
cout<<"your answer is"<<c;
}


