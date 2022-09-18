#include<iostream>
using namespace std;
	char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	char turn='X'; 
	                                   
									   
								            //INTERFACE OR BOARD DISPLAY 
void printBoard()
{
    cout<<"\t\t\t\t\t\tTIC || CROSS || GAME"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\tPlayer1 [X]"<<endl;
	cout<<"\t\tPlayer2 [O]"<<endl;
	system("cls");	
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<"\t\t\t\t\t    "<<arr[0][0]<<"   |   "<<arr[0][1]<<"   |  "<<arr[0][2]<<" "<<endl;
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<"\t\t\t\t\t _______________________"<<endl;
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<"\t\t\t\t\t    "<<arr[1][0]<<"   |   "<<arr[1][1]<<"   |  "<<arr[1][2]<<" "<<endl;
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<"\t\t\t\t\t _______________________"<<endl;
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<"\t\t\t\t\t    "<<arr[2][0]<<"   |   "<<arr[2][1]<<"   |  "<<arr[2][2]<<" "<<endl;
	cout<<"\t\t\t\t\t        |       |    "<<endl;
	cout<<endl;
	cout<<endl;
}   
                 //                       ENTER CHOICE
void mark(int choice,char play1)
{
	if(choice)
	 switch(choice){
    	case 1:
    		arr[0][0]=play1;
    		break;
    	case 2:
    		arr[0][1]=play1;
    		break;
    	case 3:
    		arr[0][2]=play1;
    		break;
    	case 4:
    		arr[1][0]=play1;
    		break;
    	case 5:
    		arr[1][1]=play1;
    		break;
    	case 6:
    		arr[1][2]=play1;
    		break;
    	case 7:
    		arr[2][0]=play1;
    		break;
    	case 8:
    		arr[2][1]=play1;
    		break;
    	case 9:
    		arr[2][2]=play1;
    		break;
    	default:
    		cout<<"please enter a valid choice from 1 to 9";
    		break;
	}
}
bool gameover()
{
	for(int i=0;i<3;i++)
	{
		if(arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] || arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i] )
		{
			if(arr[i][0]=='X'||arr[0][i]=='X')
			{
				cout<<"PLAYER1 [X] WIN"<<endl;;
				cout<<"CONGRATULATIONS!!"<<endl;
			}
			else if(arr[i][0]=='O' || arr[0][i]=='X')
			{
					cout<<"PLAYER2 [O] WIN"<<endl;;
			    	cout<<"CONGRATULATIONS!!"<<endl;
			}
			return false;
		}
		
    }
			if(arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0] || arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] )
	        	{
		        	if(arr[0][2]=='X'||arr[0][0]=='X')
			          {
			        	cout<<"PLAYER1 [X] WIN"<<endl;;
				        cout<<"CONGRATULATIONS!!"<<endl;
			          }
			        else if(arr[0][2]=='O' || arr[1][1]=='X')
			          {
					cout<<"PLAYER2 [O] WIN"<<endl;;
			    	cout<<"CONGRATULATIONS!!"<<endl;
			          }
		        }
	
	for(int i=0;i<3;i++)
	  {
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]!='X'&& arr[i][i]!='O')
			{
				return true;
			}
		}
	}
//	draw=true;
//	return false;
}
int main()
{
	
	
    int choice;
    while(gameover())
 {
	 printBoard();
	 cout<<"\t\t  Player1 [x]:";
	cin>>choice;
	char play1='X';
	mark(choice,play1);
	printBoard();
	gameover(); 
	cout<<"\t\t  Player2 [O]:";
	cin>>choice;
	char play2='O';
	mark(choice,play2);
	gameover();
 }
}
