#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, guessnumber;
    int nguesses = 1;

    //? It will generate random number between 0 to 100
    srand(time(NULL));
    num = rand() % 100 + 1;
    // cout << num << endl;

    //! Start a loop where we enter the values
     do{
        cout << "Enter the number between 1 to 100 :"<<endl;
        cin >> guessnumber;

        if(num < guessnumber) {
            cout << "Please enter a smaller number"<<endl;
        }
        else if(num > guessnumber) {
            cout << "Please enter a larger number"<<endl;
        }
        else{
            cout << "You successfully guessed the number in "<<nguesses<<"attempt"<<endl;
        }
        nguesses++;
     }while(num != guessnumber);
    return 0;
}

