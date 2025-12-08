//drawing a triangle using *
#include <iostream>
using namespace std;

int main(){
    // int n = 5;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    cout<<"For a Triangle of 5\n";
   for (int row = 1; row <= 5; row++){
        for (int col = 1; col <=row ; col++){
            cout<<"* ";
        }
        cout<<" "<<endl;
   }

 //for a square
  cout<<"for A square of 5 sides \n";
  for (int row_s = 1; row_s <= 5; row_s ++){
        for (int col_s = 1; col_s <= 5 ; col_s ++){
            cout<<"* ";
        }
        cout<<" "<<endl;
   }
 //for an inverted triangle
   cout<<"For an inverted triangle of 5\n";
   for (int row_i = 5; row_i >= 1; row_i--){
        for (int col_i = 1; col_i <=row_i ; col_i++){
            cout<<"* ";
        }
        cout<<" "<<endl;
    }
    //for a pyramid
   cout<<"For a pyramid of 5\n";
   int n = 5;
   for (int row_p = 1; row_p <= n; row_p++){
        for (int space = 1; space <= n - row_p; space++){
            cout<<" ";
        }
        for (int col_p = 1; col_p <= (2 * row_p - 1); col_p++){
            cout<<"*";
        }
        cout<<" "<<endl;
   }

   //inverted pyramid
   cout<<"For an inverted pyramid of 5\n";  
    for (int row_ip = n; row_ip >= 1; row_ip--){
          for (int space_ip = 1; space_ip <= n - row_ip; space_ip++){
                cout<<" ";
          }
          for (int col_ip = 1; col_ip <= (2 * row_ip - 1); col_ip++){
                cout<<"*";
          }
          cout<<" "<<endl;
    }
    //diamond
     cout << "For a diamond of 5\n";

    // Top half
    for (int row_d = 1; row_d <= n; row_d++) {
        // spaces
        for (int space_d = 1; space_d <= n - row_d; space_d++) {
            cout << " ";
        }
        // stars
        for (int col_d = 1; col_d <= (2 * row_d - 1); col_d++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int row_d = n - 1; row_d >= 1; row_d--) {
        // spaces
        for (int space_d = 1; space_d <= n - row_d; space_d++) {
            cout << " ";
        }
        // stars
        for (int col_d = 1; col_d <= (2 * row_d - 1); col_d++) {
            cout << "*";
        }
        cout << endl;
    }
   return 0;
}