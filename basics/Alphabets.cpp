#include<iostream>
#include<string>
    using namespace std;
    int main(){

            char letter;
            cout<<"Enter the letter of alphabet"<< endl;
            cin>> letter;

            if (letter>= 'A' && letter <= 'Z' || letter>= 'a' && letter <= 'z' ){

                switch (letter){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                    cout<<"vowel"<< endl;
                    break;
                default:
                    cout<<"Consonant"<< endl;

            }
           }else{
           cout<<"Invalid output!!"<< endl;
           }

    }
