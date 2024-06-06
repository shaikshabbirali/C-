#include<iostream>
#include<string.h>
int main(){
	int f=1,i,n;
	std::cout<<"enter a number\t";
	std::cin>>n;
	for(i=1;i<=n;i++){
		f*=i;
		
	}
	std::cout<<"factorial of\t"<<n<<"is\t"<<f;
    return 0;
}
