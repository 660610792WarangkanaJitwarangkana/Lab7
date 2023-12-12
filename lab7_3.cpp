#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

char before(char x){
    if(x<'A'||x>'Z')
    return '0';
    if(x=='A')
    return 'Z';
    return x-1;
}