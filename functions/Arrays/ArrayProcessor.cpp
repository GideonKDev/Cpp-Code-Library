/*
Question 3: Pointers and Arrays within a Class (30 marks)
Task: Create a class ArrayProcessor that:
Uses pointers to manage a dynamic integer array.
Has these features:Constructor: 
    Dynamically allocates an array of given size.
    Destructor: Deallocates memory.
    void fillArray(): Populates array via user input.
    int findMin(): Returns smallest element using pointer arithmetic.
    void reverseArray(): Reverses array in-place using pointers.
    void display(): Prints array.In main():
Create ArrayProcessor object for size 5.
Fill array with values $\{8, 3, 10, 2, 7\}$.
Display original array.Print minimum value.Reverse array and display it.

*/
#include<iostream>
#include<string>

using namespace std;

class ArrayProcessor{
private:
    int *arr;
    int size;
public:
    ArrayProcessor(int size){
        this->size = size;
        arr = new int[size];
    }   
    ~ArrayProcessor(){
        delete[] arr;
    }
    void fillArray(){
        for(int i=0;i<size;i++){
            cout<<"Enter element "<<i+1<<": ";
            cin>>*(arr+i);
        }
    }
    int findMin(){
        int min = *arr;
        for(int i=1;i<size;i++){
            if(*(arr+i) < min){
                min = *(arr+i);
            }
        }
        return min;
    }
    void reverseArray(){
        int *start = arr;
        int *end = arr + size - 1;
        while(start < end){
            int temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }

    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<*(arr+i);
            if(i < size - 1) cout<<", ";
        }
        cout<<endl;
    }
};
int main(){
    ArrayProcessor ap(5);
    ap.fillArray();

    cout<<"\nOriginal array: ";
    ap.display();

    cout<<"Minimum value: "<<ap.findMin()<<endl;

    ap.reverseArray();
    cout<<"Reversed array: ";
    ap.display();

    return 0;
}
/*Sample Input/Output:
Enter element 1: 8
Enter element 2: 3
Enter element 3: 10
Enter element 4: 2
Enter element 5: 7
Original array: 8, 3, 10, 2, 7
Minimum value: 2
Reversed array: 7, 2, 10, 3, 8
*/