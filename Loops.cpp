// print 1 to n numbers
/*
#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;

     int i = 1;
     int sum = 0;
     while(i<=n){
         cout<<i<<" ";
         sum = sum + i;
         i = i + 1;
     }

     cout<< "value of sum is "<<sum <<endl;
 }
 */

// Prime or not
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=2;
    while(i<=n){

        // divide hogya not prime
        if(n%i==0){
            cout<<" Not Prime for" <<i <<endl;
        }
        else{
            cout<<" Prime for" <<i <<endl;
        }
        i = i + 1;
    }
}
*/

// Pattern 1
// ***
// ***
// ***
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;      
        }
        cout<<endl;
        i=i+1;
    }
    
}
*/

// Pattern 2
// 111
// 222
// 333
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j=j+1;      
        }
        cout<<endl;
        i=i+1;
    }
    
}
