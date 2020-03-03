#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int x){
	vector<int> a(x);
	for(int i=0;i<x;i++)
	{
	a[i]=rand()%10;
	}
 return a;
}
void showVector(vector<int > y){
	cout << "[";
    for(int j=0 ; j<y.size();j++)
	{
	cout <<  y[j] << " ";
	}
	cout << "]";
}
int dotProduct(vector<int > x,vector<int > y){
	int sum=0;
	for(int k=0;k<x.size();k++)
	{
	sum+=x[k]*y[k];
	
}
return sum;
}
