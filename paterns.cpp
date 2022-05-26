// 1st Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n){
            cout<<j; //cout<<n-j+1  ulta output lane ka liye(4,3,2,1)
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/

// 2nd Pattern
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n){
            cout<<count<<" ";
            count=count+1; 
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}*/

// 3rd Pattern
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 4th Pattern

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 5th Pattern - Homework
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 6th Pattern
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int value=row;
    while (row<=n)
    {
        count<<value;
        value=value+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
    
}*/

// 7th Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            cout<<(row-col+1);
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 8th Patterb
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n){
            char ch = 'A' + row - 1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 9th Pattern H/W

// 10th Pattern H/W

// 11th Pattern 
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n){
            char ch = 'A' + row + col - 2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/

// 12th Pattern
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            char ch = 'A' + row - 1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 13th Pattern H/W

// 14th Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row){
            char ch = 'A' + row + col - 2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 15th Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {
        int col = 1;
        char start = 'A'+n-row;
        while (col<=row){
            cout<<start<<" ";
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

// 16th Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {   
        //space print karlo   
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //star print karlo
        int col = 1;
        while (col<=row){
            cout<<"*";      
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/

//17th Pattern - Final Pattern
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    //int count = 1;
    while (row<=n)
    {   
        //space print karlo 1st Traingle  
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //print 2nd Traingle 
        int col = 1;
        while (col<=row){
            cout<<col;      
            col=col+1;
        }

        int start = row - 1;
        while (start)
        {
            cout<<start;
            start = start-1;
        }
        
        cout<<endl;
        row=row+1;
    }
}
*/

//Dabang question

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         // 1st Traingle
//         int start=n-row+1;
//         int col=1;
//         while(start)
//         {
//             cout<<col;
//             start=start-1;
//             col=col+1;
//         }

//         // 2nd Traingle
//         int lstar=row-1;
//         while(lstar)
//         {
//             cout<<"*";
//             lstar=lstar-1;
//         }

//         //3rd Traingle
//         int rstar=row-1;
//         while(rstar)
//         {
//             cout<<"*";
//             rstar=rstar-1;
//         }

//         // 4th Traingle
//         int end=n-row+1;
//         while(end)
//         {
//             cout<<end;
//             end=end-1;
//         }

//         cout<<endl;
//         row=row+1;
//     }
// }
/*Input: 5
OUtput:
1234554321
1234**4321
123****321
12******21
1********1*/

//Dabang problem second way to solve

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        // 1st Traingle
        int start=n-row+1;
        int col=1;
        while(start)
        {
            cout<<col;
            start=start-1;
            col=col+1;
        }

        // 2nd Traingle STAR
        int star=(row*2)-2;
        
        while(star)
        {
            cout<<"*";
            star=star-1;
        }

        // 3th Traingle
        int end=n-row+1;
        while(end)
        {
            cout<<end;
            end=end-1;
        }

        cout<<endl;
        row=row+1;
    }
}