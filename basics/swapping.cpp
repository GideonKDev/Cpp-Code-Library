#include<iostream>
using namespace std;
int main(){

    int high,low, number;
    cout<<"Enter the lower limit"<<endl;
    cin>>low;
    cout<<"Enter the higher limit"<<endl;
    cin>>high;

    if ( low > high){

        int temp;
        temp = low;
        low = high;
        high = temp;

            }// swap

/*while ( number<= high && number >= low){
        cout<<number;
           }*/
           for (int x=low; x<=high;x++){
            int y= x%2;

            if (y==0){
            cout<<x<< ",";
            }

           }
           return 0;

}
