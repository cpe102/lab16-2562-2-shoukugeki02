#include<iostream>
using namespace std;

//Write the definition of myString() here
char myString(char *x,int y){
char *R = new char ;
for(int i=0;i<y;i++)
{
	R[i]='A'+i;
	cout << R[i];
}

R[y] = '\0';
}
int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
