#include<iostream>

using namespace std;

class test

{

int a, b; 
public:

test()

{

a=0; 
b=0;

}

void accept()

{

 

cout<<"\n Enter Two Numbers : \n";



cin>>a;
cout<<" ";

cin>>b;

}
void operator++() 

{

a--;

b--;

}

void display()

{

cout<<"\n A : "<<a; 
cout<<"\n B : "<<b;

}

};

int main()

{

test id;
id.accept();

cout<<"\n After Decrementing : ";

++id;

++id; 
++id;
id.display();

return 0;

}