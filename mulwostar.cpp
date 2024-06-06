#include <iostream>
int main(){
	int a,b,ans=0;
	std::cout<<"enter a value\t"<<"enter b value\t";
	std::cin>>a>>b;
	for (int i=0;i<b;i++){
		ans+=a;
	}
	std::cout<<"mul="<<ans;
	return 0;
}
