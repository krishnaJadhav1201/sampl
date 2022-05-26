// *************** Switch Case **************** 


// #include<iostream>
// using namespace std;


// int main(){
// int num=2;

// switch(num)
// {
// case 1:
//     cout<<"One";
//     break;
// case 2:
//     cout<<"two";
//     break;
// default:
//     cout<<"Default";
//     break;
// }
// }


// Calculator Program

// #include<iostream>
// using namespace std;

// int main(){

//     int a,b;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;

//     cout<<"Enter the value of b:"<<endl;
//     cin>>b;

//     char op;
//     cout<<"Enter the operation you want to perform";
//     cin>>op;

//     switch(op){

//         case '+': cout<<(a+b) <<endl;
//         break;
//         case '-': cout<<(a-b) <<endl;
//         break;
    
//     }

// }

// Homework Qustion

#include <iostream>
using namespace std;

int main(){

    int note;
    cout<<"Enter Which Note: "<<endl;
    cin>>note;

    switch (note)
    {
    case 1:
        cout<<"1 INR Notes: "<<(1330/1)<<endl;
        break;
    case 20:
        cout<<"20 INR Notes: "<<(1330/20)<<endl;
        break;
    case 50:
        cout<<"50 INR Notes: "<<(1330/50)<<endl;
        break;
    case 100:
        cout<<"1050 INR Notes: "<<(1330/100)<<endl;
        break;
    default:
        break;
    }
}


// ***********Function***************

