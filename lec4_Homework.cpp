// Homework Lecture 4

// Q.1
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n){
            cout<<n-j+1; 
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}*/

// Q.2
/*#include <iostream>
using namespace std;
 
 int main(){
    int n;
    cin>>n;

    int row=1;
    int count=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;       
    }
 }*/

// Q.3
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    
    while (row<=n)
    {
        int col = 1;
        int count = (row-col+1);
        while (col<=row){
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}*/

// Output:
// 4
// 1
// 23
// 345
// 4567

// Q.4
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}*/

// Output:
// 3
// AAA
// BBB
// CCC

// Q.5
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char start='A';
    while (row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<start;
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}*/
// Output:
// 3
// ABC
// DEF
// GHI

// Q.6
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char start='A';
    while (row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<start;
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 4
// A
// BC
// DEF
// GHIJ

// Q.7
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int start=1;
    while (row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<start;
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 3
// 123
// 456
// 789

// Q.8
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        // int col=1;
        int start=n-row+1;
        while(start)
        {
            cout<<"*";
            start=start-1;
        }
        cout<<endl;
        row=row+1;
    }
    
}*/
// Output:
// 4
// ****
// *** 
// **  
// *  

// Q.9
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
   
    while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" "<<" ";
            space=space-1;
        }
        
        // int col=1;
        int start=n-row+1;
        while(start)
        {
            cout<<"*"<<" ";
            start=start-1;
            // col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 4
// * * * * 
//   * * *
//     * *
//       *

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
   
    while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" "<<" ";
            space=space-1;
        }
        
        // int col=1;
        int start=n-row+1;
        while(start)
        {
            cout<<row<<" ";
            start=start-1;
            // col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 4
// 1 1 1 1 
//   2 2 2
//     3 3
//       4

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
   
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" "<<" ";
            space=space-1;
        }
        
        int col=1;
        // int start=n-row+1;
        while(col<=row)
        {
            cout<<col<<" ";
            // start=start-1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 4
//       1
//     2 2
//   3 3 3
// 4 4 4 4

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
   
    while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" "<<" ";
            space=space-1;
        }
        
        int col=row;
        // int start=n-row+1;
        while(col<=n)
        {
            cout<<col<<" ";
            // start=start-1;
            col=col+1;
        }

        cout<<endl;
        row=row+1;
    }   
}*/

// Output:
// 4
// 1 2 3 4 
//   2 3 4 
//     3 4 
//       4 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
   
    while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" "<<" ";
            space=space-1;
        }
        
        int col=row;
        // int start=n-row+1;
        while(col<=n)
        {
            cout<<col<<" ";
            // start=start-1;
            col=col+1;
        }

        cout<<endl;
        row=row+1;
    }   
}