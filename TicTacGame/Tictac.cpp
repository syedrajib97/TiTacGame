#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
                                //class for game
class TicTac
{   
    private:int i,pos1=1,pos2=1,pos3=1,pos4=1,pos5=1,pos6=1,pos7=1,pos8=1,pos9=1;
    public:int pos;
                char arr[20][20],sym;
                void demo_board();
                void instruction();
                int game();
                int pos_Check(int po);
};
        
            void TicTac::demo_board()               //demo board
            {   
                cout<<"\nDEMO BOARD WHICH INDICATES THE POSITIONS\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"   1     "<<"|"<<"    2      "<<"|"<<"     3     "<<"\n";//first row
                cout<<"_________"<<"|"<<"___________"<<"|"<<"___________"<<"\n";
                //second row
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"   4     "<<"|"<<"    5      "<<"|"<<"     6     "<<"\n";
                cout<<"_________"<<"|"<<"___________"<<"|"<<"___________"<<"\n";
                //Third row
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"   7     "<<"|"<<"    8      "<<"|"<<"     9     "<<"\n\n\n";//3rd row
                
            }
            void TicTac::instruction()
            {
                 cout<<"USER 1 SYMBOL IS U\nRAJIB 2 SYMBOL IS R\n";
                arr[0][0]='1';
                arr[0][1]='2';
                arr[0][2]='3';
                arr[1][0]='4';
                arr[1][1]='5';
                arr[1][2]='6';
                arr[2][0]='7';
                arr[2][1]='8';
                arr[2][2]='9';
            }
           int TicTac::game()
            {   
                instruction();
                for(i=1;i<=17;i++)            //for gaming loop
                {   
                    if(i%2!=0)
                    {
                    cout<<"\n\nUser 1 Enter the position:";                 //for enter user 1 input
                    cin>>pos;
                      switch(pos)
                        {
                        case 1: if(arr[0][0]!='1')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 2:if(arr[0][1]!='2')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 3:if(arr[0][2]!='3')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 4:if(arr[1][0]!='4')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 5:if(arr[1][1]!='5')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 6:if(arr[1][2]!='6')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 7:if(arr[2][0]!='7')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 8:if(arr[2][1]!='8')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 9:if(arr[2][2]!='9')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        }
                        
                    sym='U';
                    
                    }
                    //else
                    else
                    {
                    
                    cout<<"\n\nUser 2 Enter the position:";
                    cin>>pos;   
                   switch(pos)
                        {
                        case 1: if(arr[0][0]!='1')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 2:if(arr[0][1]!='2')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 3:if(arr[0][2]!='3')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 4:if(arr[1][0]!='4')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 5:if(arr[1][1]!='5')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 6:if(arr[1][2]!='6')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 7:if(arr[2][0]!='7')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 8:if(arr[2][1]!='8')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        case 9:if(arr[2][2]!='9')
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>pos;
                        }break;
                        }                                  //for enter user2 input
                   sym='R'; 
                    
                    }
                    
                  switch(pos)
                  {
                    case 1:arr[0][0]=sym;
                            break;
                    case 2:arr[0][1]=sym; 
                            break;
                    case 3:arr[0][2]=sym;
                            break;
                    case 4:arr[1][0]=sym;
                            break;
                    case 5:arr[1][1]=sym;
                            break;
                    case 6:arr[1][2]=sym;
                            break;
                    case 7:arr[2][0]=sym;
                            break;
                    case 8:arr[2][1]=sym;
                            break;
                    case 9:arr[2][2]=sym;
                            break;      
                  }
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"  "<<arr[0][0]<<"      "<<"|"<<"  "<<arr[0][1]<<"        "<<"|"<<"  "<<arr[0][2]<<"  \n";
                cout<<"_________"<<"|"<<"___________"<<"|"<<"___________"<<"\n";
                //second row
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"  "<<arr[1][0]<<"      "<<"|"<<"  "<<arr[1][1]<<"        "<<"|"<<"  "<<arr[1][2]<<"  \n";
                cout<<"_________"<<"|"<<"___________"<<"|"<<"___________"<<"\n";
                //Third row
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"         "<<"|"<<"           "<<"|"<<"           "<<"\n";
                cout<<"  "<<arr[2][0]<<"      "<<"|"<<"  "<<arr[2][1]<<"        "<<"|"<<"  "<<arr[2][2]<<"  \n";
                  


                //checking winner
                //                      1row                                    2nd row                                         3rd row                                         1 col                                           2nd col                                         3 col                                                   r to l top to bott corner                                   bott to top corner
                if((arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O')||(arr[0][1]=='O'&&arr[1][1]=='0'&&arr[2][1]=='O')||(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')||(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')||(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')||(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')||(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O')||(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'))
                {
                        cout<<"USER 1 WIN\n";
                        return(0);
                }
                else if((arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')||(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')||(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')||(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')||(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')||(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')||(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X')||(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'))
                {
                        cout<<"USER 2 WIN\n";
                        return(0);
                }
                
                if(arr[0][0]!='1'&&arr[0][1]!='2'&&arr[0][2]!='3'&&arr[1][0]!='4'&&arr[1][1]!='5'&&arr[1][2]!='6'&&arr[2][0]!='7'&&arr[2][1]!='8'&&arr[2][2]!='9')
                {
                        cout<<"GAME IS DRAW\n";
                        return(0);
                }


                }
            }
            int TicTac::pos_Check(int po)
            {
                switch(po)
                {
                        int choice;
                        case 1: if((arr[0][0]!='1')||(arr[0][0]!='1'));
                        {
                                cout<<"In entered position element is existed re enter position\n";
                                cin>>po;
                        }
                                break;
                        case 2: pos2++;
                                break;
                        case 3: pos3++;
                                break;
                        case 4:pos4++;
                                break;
                        case 5: pos5++;
                                break;
                        case 6: pos6++;
                                break;
                        case 7: pos7++;
                                break;
                        case 8: pos8++;
                                break;
                        case 9:pos9++;
                                break;
                }

            }



int main()
{
    TicTac T;
    T.demo_board();
    T.game();
    return(0);
}