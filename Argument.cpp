// no :1
#include<iostream>
using namespace std;
int add();

int main(){
    int sum;
    sum = add();
    cout<<"add is "<<sum;    
    return 0;
}

int add(){
    int a,b,c;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    c= a+b;
    return c;
}

// no :2
#include<iostream>
using namespace std;
int add(int a, int b);

int main(){
    int x,y,sum;
    cout<<"enter two no"<<endl;
    cin>>x>>y;
    sum= add(x,y);
    cout<<"add is "<<sum;    
    return 0;
}

int add(int a, int b){
    int c;
    c= a+b;
    return c;
}

// no : 3 

#include<iostream>
using namespace std;
void add(int ,int );
int main(){
    int x,y;
    cout<<"enter two no "<<endl;
    cin>>x>>y;
    add(x,y);
    return 0;
}
void add(int a,int b ){
    int c;
    c=a+b;
    cout<<"add no "<<c;
}
