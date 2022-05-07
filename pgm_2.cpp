#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
		    cout<<"* ";
		}
		cout<<"\n";
	}
	
	cout<<"\n ===== OR ===== \n \n";
	
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
		    cout<<"* ";
		}
		cout<<"\n";
	}
    return 0;
}

// Output:-
// *****
// ****
// ***
// **
// *
