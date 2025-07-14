#include<bits/stdc++.h>
using namespace std;

class fir{
	
	private:
	int data; 
	int beta;

    public:
    fir(int data ,int beta){
        this->data = data;
        this->beta = beta;
    }

	friend class base;
};

class base{

    public:
    void display(fir &obj)
    {
        cout<<"this is muthi"<<obj.data<<" "<<obj.beta;
    }
};

int main(){

    int n ,m;
    cin>>n>>m;
	fir thss(n,m);
    base b;
    b.display(thss);
}