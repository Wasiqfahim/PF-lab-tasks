#include <iostream>
using namespace std;

	void printfebonacci(int level){
		int a;
		int b;
		int c;
		a=0;
		b=1;
		cout<<a<<" "<<b;
		for(int i=2; i<level; i++){
		c=a+b;
		b=c;
		cout<<" "<<c;
	}
}
int main(){
	int level;
	cout<<"enter level of febonacci series";
	cin>>level;
	printfebonacci(level);
	return 0;
}
	
	


