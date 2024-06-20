//simple calculator
#include<iostream>

using namespace std;

int main(){
	char operation;
	double num1,num2,result;
	cout<<"enter first number:";
	cin>>num1;
	cout<<"enter second number:";
	cin>>num2;
	cout<<"choose operation(+,-,*,/):";
	cin>>operation;
	switch(operation){
		case '+':
			result = num1+num2;
			cout<<"result:"<<num1<<"+"<<num2<<"="<<result<<endl;
			break;
			case '-':
				result = num1-num2;
				cout<<"result:"<<num1<<"-"<<num2<<"="<<result<<endl;
				break;
				case '*':
					result = num1*num2;
					cout<<"result:"<<num1<<"*"<<num2<<"="<<result<<endl;
					break;
					case '/':
						if(num2!=0){
							result = num1/num2;
							cout<<"result:"<<num1<<"/"<<num2<<"="<<result<<endl;
							
						}else{
							cout<<"error:dvision by zero is not allowed"<<endl;
						}
						break;
						default:
							cout<<"error:invalid operation!"<<endl;
							break;
	}
	return 0;
	
}