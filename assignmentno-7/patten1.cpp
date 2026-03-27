// // // Hollow Right-Angled Triangle Pattern

// // // Write a C++ program to take an integer n from the user and print a hollow right-angled triangle of height n.

// // // Example: If n = 5, the pattern should be:

// // // * 
// // // * * 
// // // *   * 
// // // *     * 
// // // * * * * *

#include <iostream>
using namespace std;


int main (){
int n=6;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(j==1||j==i||i==n)
      cout<<" *";
        else 
        cout<<" ";
       
       }
    cout<<endl;
}
return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the height of the triangle: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             // print star at first/last column or last row
//             if (j == 1 || j == i || i == n) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; // hollow space
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }