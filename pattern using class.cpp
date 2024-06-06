#include<iostream>
using namespace std;
class pattern{
	int i,j;
	public:
	void rt(int rows){
		for(i=0;i<rows;i++){
			for(j=0;j<rows;j++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
};
int main(){
	int rows=6;
	pattern v;
	v.rt(rows);
}
