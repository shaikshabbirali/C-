#include<iostream>
using namespace std;
class sri{
	public:
	void reverse(int n)	{
		int dig;
		int rev=0;
		while(n>0){
			dig=n%10;
			rev=rev*10+dig;
			n/=10;
		}
		cout<<rev;
	}
};
int main(){
	int n=135;
	sri s;
	s.reverse(n);
}
