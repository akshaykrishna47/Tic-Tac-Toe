#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int input,board[3][3],computer,n=0;
    char again;

    do{
        cout << "       Tic-Tac-Toe!" << endl;
        cout<<"\n";

        //initialize board
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                board[i][j]=0;

        //Start game
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]==1)
                    cout<<"X ";
                else if(board[i][j]==2)
                    cout<<"O ";
                else
                    cout<<"- ";

            }
            cout<<"\t\t"<<"["<<i*3+1<<"]"<<"["<<i*3+2<<"]"<<"["<<i*3+3<<"]"<<"\n";
        }
        cout<<"\n";

        while(n==0)
        {

            //User input
            while(true){
                cout<<"Mark your spot:";
                cin>>input;
                if(board[input/3][input%3-1]==0&&input>=1&&input<=9)    //check if marking same spot
                    break;
            }
            board[input/3][input%3-1]=1;

            //Display User input
            cout<<"\n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[i][j]==1)
                        cout<<"X ";
                    else if(board[i][j]==2)
                        cout<<"O ";
                    else
                        cout<<"- ";

                }
                cout<<"\n";
            }
            cout<<"\n"<<"Computers Turn"<<"\n\n";

            //Computer to win the game
            if(board[0][0]==2&&board[1][0]==2&&board[2][0]!=1)
	            board[2][0]=2;
            else if(board[0][0]==2&&board[2][0]==2&&board[1][0]!=1)
	            board[1][0]=2;
            else if(board[1][0]==2&&board[2][0]==2&&board[0][0]!=1)
	            board[0][0]=2;

            else if(board[0][1]==2&&board[1][1]==2&&board[2][1]!=1)
	            board[2][1]=2;
            else if(board[0][1]==2&&board[2][1]==2&&board[1][1]!=1)
	            board[1][1]=2;
            else if(board[1][1]==2&&board[2][1]==2&&board[0][1]!=1)
	            board[0][1]=2;

            else if(board[0][2]==2&&board[1][2]==2&&board[2][2]!=1)
	            board[2][2]=2;
            else if(board[0][2]==2&&board[2][2]==2&&board[1][2]!=1)
	            board[1][2]=2;
            else if(board[1][2]==2&&board[2][2]==2&&board[0][2]!=1)
	            board[0][2]=2;

            else if(board[0][0]==2&&board[0][1]==2&&board[0][2]!=1)
	            board[0][2]=2;
            else if(board[0][0]==2&&board[0][2]==2&&board[0][1]!=1)
	            board[0][1]=2;
            else if(board[0][1]==2&&board[0][2]==2&&board[0][0]!=1)
	            board[0][0]=2;

            else if(board[1][0]==2&&board[1][1]==2&&board[1][2]!=1)
	            board[1][2]=2;
            else if(board[1][0]==2&&board[1][2]==2&&board[1][1]!=1)
	            board[1][1]=2;
            else if(board[1][1]==2&&board[1][2]==2&&board[1][0]!=1)
	            board[1][0]=2;

            else if(board[2][0]==2&&board[2][1]==2&&board[2][2]!=1)
	            board[2][2]=2;
            else if(board[2][0]==2&&board[2][2]==2&&board[2][1]!=1)
	            board[2][1]=2;
            else if(board[2][1]==2&&board[2][2]==2&&board[2][0]!=1)
	            board[2][0]=2;

            else if(board[0][0]==2&&board[1][1]==2&&board[2][2]!=1)
	            board[2][2]=2;
            else if(board[0][0]==2&&board[2][2]==2&&board[1][1]!=1)
	            board[1][1]=2;
            else if(board[1][1]==2&&board[2][2]==2&&board[0][0]!=1)
	            board[0][0]=2;

            else if(board[0][2]==2&&board[1][1]==2&&board[2][0]!=1)
                board[2][0]=2;
            else if(board[0][2]==2&&board[2][0]==2&&board[1][1]!=1)
	            board[1][1]=2;
            else if(board[1][1]==2&&board[2][0]==2&&board[0][2]!=1)
	            board[0][2]=2;

            //Computer to counter user
            else if(board[0][0]==1&&board[1][0]==1&&board[2][0]!=1&&board[2][0]!=2)
	            board[2][0]=2;
            else if(board[0][0]==1&&board[2][0]==1&&board[1][0]!=1&&board[1][0]!=2)
	            board[1][0]=2;
            else if(board[1][0]==1&&board[2][0]==1&&board[0][0]!=1&&board[0][0]!=2)
	            board[0][0]=2;

            else if(board[0][1]==1&&board[1][1]==1&&board[2][1]!=1&&board[2][1]!=2)
	            board[2][1]=2;
            else if(board[0][1]==1&&board[2][1]==1&&board[1][1]!=1&&board[1][1]!=2)
	            board[1][1]=2;
            else if(board[1][1]==1&&board[2][1]==1&&board[0][1]!=1&&board[0][1]!=2)
	            board[0][1]=2;

            else if(board[0][2]==1&&board[1][2]==1&&board[2][2]!=1&&board[2][2]!=2)
	            board[2][2]=2;
            else if(board[0][2]==1&&board[2][2]==1&&board[1][2]!=1&&board[1][2]!=2)
	            board[1][2]=2;
            else if(board[1][2]==1&&board[2][2]==1&&board[0][2]!=1&&board[0][2]!=2)
	            board[0][2]=2;

            else if(board[0][0]==1&&board[0][1]==1&&board[0][2]!=1&&board[0][2]!=2)
	            board[0][2]=2;
            else if(board[0][0]==1&&board[0][2]==1&&board[0][1]!=1&&board[0][1]!=2)
	            board[0][1]=2;
            else if(board[0][1]==1&&board[0][2]==1&&board[0][0]!=1&&board[0][0]!=2)
	            board[0][0]=2;

            else if(board[1][0]==1&&board[1][1]==1&&board[1][2]!=1&&board[1][2]!=2)
	            board[1][2]=2;
            else if(board[1][0]==1&&board[1][2]==1&&board[1][1]!=1&&board[1][1]!=2)
	            board[1][1]=2;
            else if(board[1][1]==1&&board[1][2]==1&&board[1][0]!=1&&board[1][0]!=2)
	            board[1][0]=2;

            else if(board[2][0]==1&&board[2][1]==1&&board[2][2]!=1&&board[2][2]!=2)
                board[2][2]=2;
            else if(board[2][0]==1&&board[2][2]==1&&board[2][1]!=1&&board[2][1]!=2)
	            board[2][1]=2;
            else if(board[2][1]==1&&board[2][2]==1&&board[2][0]!=1&&board[2][0]!=2)
	            board[2][0]=2;

            else if(board[0][0]==1&&board[1][1]==1&&board[2][2]!=1&&board[2][2]!=2)
	            board[2][2]=2;
            else if(board[0][0]==1&&board[2][2]==1&&board[1][1]!=1&&board[1][1]!=2)
	            board[1][1]=2;
            else if(board[1][1]==1&&board[2][2]==1&&board[0][0]!=1&&board[0][0]!=2)
	            board[0][0]=2;

            else if(board[0][2]==1&&board[1][1]==1&&board[2][0]!=1&&board[2][0]!=2)
	            board[2][0]=2;
            else if(board[0][2]==1&&board[2][0]==1&&board[1][1]!=1&&board[1][1]!=2)
	            board[1][1]=2;
            else if(board[1][1]==1&&board[2][0]==1&&board[0][2]!=1&&board[0][2]!=2)
	            board[0][2]=2;

            //Random play by computer
            else{
                while(true&&n==0){
                    // Seed the random number generator with the current time
                    std::srand(static_cast<unsigned int>(std::time(0)));

                    // Generate a random move for the computer
                    computer=(std::rand() % 9) + 1;
                    if(board[computer/3][computer%3-1]!=1&&board[computer/3][computer%3-1]!=2){
                        board[computer/3][computer%3-1]=2;
                        break;
                    }
                }
            }

            //Show computers move
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[i][j]==1)
                        cout<<"X ";
                    else if(board[i][j]==2)
                        cout<<"O ";
                    else
                        cout<<"- ";

                }
                cout<<"\t\t"<<"["<<i*3+1<<"]"<<"["<<i*3+2<<"]"<<"["<<i*3+3<<"]"<<"\n";
            }
            cout<<"\n";

            //Check if user won
            if(board[0][0]==1&&board[1][0]==1&&board[2][0]==1||
            board[0][1]==1&&board[1][1]==1&&board[2][1]==1||
            board[0][2]==1&&board[1][2]==1&&board[2][2]==1||

            board[0][0]==1&&board[0][1]==1&&board[0][2]==1||
            board[1][0]==1&&board[1][1]==1&&board[1][2]==1||
            board[2][0]==1&&board[2][1]==1&&board[2][2]==1||

            board[0][0]==1&&board[1][1]==1&&board[2][2]==1||
            board[0][2]==1&&board[1][1]==1&&board[2][0]==1){
                cout<<"You Won";
                n=1;
            }

            //Check if computer won
            if(board[0][0]==2&&board[1][0]==2&&board[2][0]==2||
            board[0][1]==2&&board[1][1]==2&&board[2][1]==2||
            board[0][2]==2&&board[1][2]==2&&board[2][2]==2||

            board[0][0]==2&&board[0][1]==2&&board[0][2]==2||
            board[1][0]==2&&board[1][1]==2&&board[1][2]==2||
            board[2][0]==2&&board[2][1]==2&&board[2][2]==2||

            board[0][0]==2&&board[1][1]==2&&board[2][2]==2||
            board[0][2]==2&&board[1][1]==2&&board[2][0]==2){
                cout<<"You Lost";
                n=1;
            }
        }

        //Start a new game
        cout<<"\n\n"<<"New Game? Y|N"<<endl;
        cin>>again;
        if(again=='Y'||again=='y')
            n=0;
        system("cls");
    }while(n==0);


    return 0;
}
