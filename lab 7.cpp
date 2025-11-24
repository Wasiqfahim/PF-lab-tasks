#include <iostream>
using namespace std;
bool checkisevenodd (int n){
	if(n%2==0){
		return true;
	}
	else{
		return false;
		
	}
}
int main(){
	int num;
	do{
		cout<<"enter a num"<<endl;
		cin>>num;
		if(num!=0){
			bool result = checkisevenodd(num);
			if(result){
				cout<<"is even"<<endl;
			}
			else{
				cout<<"is odd"<<endl;
				
			}
		}
	}while(num!=0);
	return 0;
}
	
	


