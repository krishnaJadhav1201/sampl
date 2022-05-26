// 1. Lowercase, Uppercase or Numeric program
/*
#include <iostream>
using namespace std;

int main(){
    cout<<"Lowercase, Uppercase or Numeric program" <<endl;
    char ch;
    cout<<"Enter Character : " <<endl;
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout<< ch << " is an UpperCase character\n";
    }
    else if(ch >= 'a' && ch <= 'z'){ 
        cout<< ch << " is an LowerCase character\n";
    }
    else{
        cout<< ch << " is an Numeric Character\n";
    }
}
*/

//2. 1 to N find sum of all even numbers

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while (i<=n)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
            sum = sum + i;
        }
        i=i+1;       
    }
    cout<<"\n Sum of all even numbers : "<<sum <<endl;
    
}
*/

//Faherenite to Celsius Table
// #include <iostream>
// using namespace std;

// int main(){
//     float n;
//     cout << "End Temp:\n";
//     cin>>n;

//     float f, c;
//     cout << "Far Value:\n";
//     // cout << "Please enter temperature in fahrenheit\n";
//     cin >> f;

//     while (f<=n)
//     {
//         c = 5 * (f - 32) / 9;
//         cout << f <<" Fahrenheit = " << c <<" Centigrade"<<endl;
//         f=f+1;   
//     }
    

// }

// Practice Questions

// 1.
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 9;
//     if(a==9){
//         cout<<"NINEY"<<endl;
//     }

//     if(a>0){
//         cout<<"POSITIVE";
//     }
//     else
//     {
//         cout<<"NEGATIVE";
//     }
// }
// OUTPUT:
// NINEY
// POSITIVE

// 2.
// #include<iostream>
// using namespace std;

// int main(){
//     int a=2; 
//     int b=a+1;

//     if((a=3)==b){
//         cout<<a;
//     }
//     else{
//         cout<<a+1;
//     }
// }


// 3.
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 24;

//     if(a>20){
//         cout<<"Love"<<endl;
//     }
//     else if(a==24){
//         cout<<"Lovely"<<endl;
//     }
//     else{
//         cout<<"Babbar"<<endl;
//     }
//     cout<<a;
// }


// Prime Or Not

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 2;
     while(i<n){
         //divide hogya, not prime
         if(n%i==0){
             cout<<"Not prime for"<<i<<endl;
         }
         else{
             cout<<"Prime for"<<i<<endl;
         }
         i=i+1;
     }
}