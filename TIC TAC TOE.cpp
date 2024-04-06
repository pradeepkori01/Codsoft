#include<iostream>
using namespace std;

char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int colum;
char token ='x';
bool tie = false;
string firstplayer="";
string secondplayer="";

void functionone() {
    cout<<"    |    |    \n";
    cout<<" "<<space[0][0]<<"  | "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
    cout<<"_|_|__\n";
    cout<<"    |    |    \n";
    cout<<" "<<space[1][0]<<"  | "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
    cout<<"_|_|__\n";
    cout<<"    |    |    \n";
    cout<<" "<<space[2][0]<<"  | "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
    cout<<"    |    |    \n";
}

void functiontwo() {
    int digit;

    if(token == 'x'){
        cout<<firstplayer<<" please enter: ";
        cin>>digit;
    }
    else if(token == '0'){
        cout<<secondplayer<<" please enter: ";
        cin>>digit;
    }
    if(digit >= 1 && digit <= 9) {
        row = (digit - 1) / 3;
        colum = (digit - 1) % 3;

        if(space[row][colum] != 'x' && space[row][colum] != '0') {
            space[row][colum] = token;
            token = (token == 'x') ? '0' : 'x';
        }
        else {
            cout<<"There is no empty space. Please choose another position."<<endl;
            functiontwo();
        }
    }
    else {
        cout<<"Invalid input!!!"<<endl;
        functiontwo();
    }
}

bool functionthree() {
    for(int i=0; i<3; i++) {
        if((space[i][0] == space[i][1] && space[i][0] == space[i][2]) || (space[0][i] == space[1][i] && space[0][i] == space[2][i]))
            return true;
    }
    if((space[0][0] == space[1][1] && space[1][1] == space[2][2]) || (space[0][2] == space[1][1] && space[1][1] == space[2][0]))
        return true;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(space[i][j] != 'x' && space[i][j] != '0')
                return false;
        } 
    }
    tie = true;
    return true;
}

int main() {
    cout<<"Enter the name of first player: ";
    getline(cin, firstplayer);
    cout<<"Enter the name of second player: ";
    getline(cin, secondplayer);
    cout<<firstplayer<<" is player one so he/she will play first \n";
    cout<<secondplayer<<" is player two so he/she will play second \n";

    while(!functionthree()) {
        functionone();
        functiontwo();
    }

    if(token == 'x' && !tie)
        cout<<firstplayer<<" Wins!!"<<endl;
    else if(token == '0' && !tie)
        cout<<secondplayer<<" Wins!!!"<<endl;
    else
        cout<<"It's a draw!"<<endl;

    return 0;
}
