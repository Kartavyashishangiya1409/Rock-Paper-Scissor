// Rock Paper Scissor

#include <iostream>
using namespace std;

int main()
{

    char Player1, Player2;
    string again;

    do
    {
        cout << endl << "Player-1 Please select rock-(r), paper-(p) or scissor-(s)" << endl ;

        cout << "Player-1 = ";
        cin >> Player1;

        cout << endl << "Player-2 Please select rock-(r), paper-(p) or scissor-(s)" << endl;

        cout << "Player-2 = ";
        cin >> ws >> Player2;

        cout << endl;

        if ((Player1 == 'r' || Player1 == 'R') && (Player2 == 'r' || Player2 == 'R'))
        {
            cout << "No one Wins...!" << endl;
        }
        if ((Player1 == 'r' || Player1 == 'R') && (Player2 == 'p' || Player2 == 'P'))
        {
            cout << "Player-2 Wins...!" << endl;
        }
        if ((Player1 == 'r' || Player1 == 'R') && (Player2 == 's' || Player2 == 'S'))
        {
            cout << "Player-1 Wins...!" << endl;
        }

        if ((Player1 == 'p' || Player1 == 'P') && (Player2 == 'r' || Player2 == 'R'))
        {
            cout << "Player-1 Wins...!" << endl;
        }
        if ((Player1 == 'p' || Player1 == 'P') && (Player2 == 'p' || Player2 == 'P'))
        {
            cout << "No one Wins...!" << endl;
        }
        if ((Player1 == 'p' || Player1 == 'P') && (Player2 == 's' || Player2 == 'S'))
        {
            cout << "Player-2 Wins...!" << endl;
        }

        if ((Player1 == 's' || Player1 == 'S') && (Player2 == 'r' || Player2 == 'R'))
        {
            cout << "Player-2 Wins...!" << endl;
        }
        if ((Player1 == 's' || Player1 == 'S') && (Player2 == 'p' || Player2 == 'P'))
        {
            cout << "Player-1 Wins...!" << endl;
        }
        if ((Player1 == 's' || Player1 == 'S') && (Player2 == 's' || Player2 == 'S'))
        {
            cout << "No one Wins...!" << endl;
        }

        if ((Player1 != 'r' && Player1 != 'p' && Player1 != 's') || 
        (Player2 != 'r' && Player2 != 'p' && Player2 != 's')) 
        {
            cout << "Invalid input! Please enter 'r', 'p', or 's'." << endl;
        }

        cout << endl << "Do you want to play again? (yes or no) --> ";
        cin >> again;

    } while (again == "yes" || again == "Yes" || again == "YES");

    cout << endl;
    cout << "OK,\nNO Problem...!" << endl << endl;
    
}