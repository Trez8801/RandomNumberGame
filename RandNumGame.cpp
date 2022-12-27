#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int i = 1, num, user;
    char selection;
    srand(time(0));

    cout << "*** Guessing Game ***" << endl;
    cout << "Enter S to start or Q to quit: ";
    cin  >> selection;

    if(selection == 'S' || selection == 's'){
        num = rand() % 101;
        cout << "Enter a number between 0 and 100." << endl;
        while(i < 10){
            cin >> user;
            if(user > num){
                cout << "Too high." << endl;
                i++; 
                if(i == 10){
                    cout << "Sorry, you ran out of tries." << endl;
                    cout << "Want to try again? " << "Enter Y for yes or N for no." << endl;
                    cin >> selection;
                    if(selection == 'Y' || selection == 'y'){
                        i = 0;
                        cout << "Enter a number between 0 and 100." << endl;
                    }else if(selection == 'N' || selection == 'n'){
                        cout << "Losers never win.";
                        break;
                    }
                }
            }else if(user < num){
                cout << "Too low." << endl;
                i++;
                if(i == 10){
                    cout << "Sorry, you ran out of tries." << endl;
                    cout << "Want to try again? " << "Enter Y for yes or N for no." << endl;
                    cin >> selection;
                    if(selection == 'Y' || selection == 'y'){
                        i = 0;
                        cout << "Enter a number between 0 and 100." << endl;
                    }else if(selection == 'N' || selection == 'n'){
                        cout << "Losers never win.";
                        break;
                    }
                }
            }else if (user == num){
                cout << "Congratulations, you won!" << endl;
                cout << "Want to play again? " << "Enter Y for yes or N for no." << endl;
                cin >> selection;
                if(selection == 'Y' || selection == 'y'){
                    i = 0;
                    cout << "Enter a number between 0 and 100." << endl;
                }else if(selection == 'N' || selection == 'n'){
                    cout << "Have a good day!";
                    break;   
                }
            
            } 
        }
    }else if(selection == 'Q' || selection == 'q'){
        cout << "Have a good day!";
    }
    return 0;
}