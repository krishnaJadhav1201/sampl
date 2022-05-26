// #include <iostream>
// using namespace std;

// int main(){
//     int a,b=1;
//     a=10;

//     if (++a)
//     {
//         cout<<b;
//     }
//     else{
//         cout<<++b;
//     }
    
// }
// //output: 1

// #include <iostream>
// using namespace std;

// int main(){
//     int number=3;
//     cout<<(25*(++number));
// }

// //output: 100

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout<<b<<endl;
//     cout<<c<<endl;
// }

// output: 
// 1
// 3

// #include <iostream> 
// using namespace std;

// int main(){
//     int a = 1;
//     int b = 1;

//     if(a-->0 && ++b>2)
//     {
//         cout<<"Stage1 - Inside If ";
//     }
//     else{
//         cout<<"Stage2 - Inside else ";
//     }
//     cout<<a<<" "<<b<<endl;
// }

// output: Stage2 - Inside else 0 2

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 5 ; i++) {
//         cout<<i<<" ";
//         i++;
//     }
    
// }

// Output: 0 2 4

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 5 ; i--) {
//         cout<<i<<" ";
//         i++;
//     }
    
// }
// output: Infinite loop

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 5 ; i--) {
//         cout<<i<<" ";
//         i++;
//     }
    
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     for (int i = 1; i <= n; i++)
//     {
//         int j;
//         for (int j = 1; j <= n - i + 1 ; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    for (int i = 1; i <= n; i++)
    {
        
        int space;
        for (int space = i ; space < n ; space++)
        {
            cout<<" ";
        }
        int j;
        
        for (int j = 1; j <= (2 * i - 1) ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}