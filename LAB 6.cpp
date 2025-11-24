#include <iostream>
using namespace std;
int main()
{
	string password;
	while(true){
		cout<<"enter your password: ";
		cin>>password;
		if(password=="python123"){
			cout<<"your password is correct "<<endl;
			break;
		}
		else{
			cout<<"your password is wrong "<<endl;
		}
	}
	return 0;
}
