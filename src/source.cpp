#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int top=0;
	char input[200]={};
	while(cin.getline(input,200)){
		top=0;
		char s[100]={-1};
		bool isValid=true;
		bool push=false;
		for(int i=0;i<strlen(input);i++){
			switch(input[i]){
			case '(':
			case '{':
			case '[':
				s[top]=input[i];
				top++;
				push=true;
				break;
			case ')':
				if((top>0)&&(s[top-1]=='(')){
					top--;
				}
				else{
					isValid=false;
				}
				break;
			case '}':
				if((top>0)&&(s[top-1]=='{')){
					top--;
				}
				else{
					isValid=false;
				}
				break;
			case ']':
				if((top>0)&&(s[top-1]=='[')){
					top--;
				}
				else{
					isValid=false;
				}
				break;
				
			}
		}
		if((push)&&(isValid)&&(top==0)){
			cout<<"true"<<endl;
		}
		else if(!push){}
		else{
			cout<<"false"<<endl;
		}
	}

}