#include <bits/stdc++.h> 
using namespace std;

int menu(int answer);

int main()
{
	int answer;
	char text1[2000],text2[200],fname[20];
	//memo
    
    cout << "Enter path eg:  C:/Users/Home/Desktop/" << endl;
    cin.getline(text2,sizeof(text2));
    cout << "Pick a choice from the list 1,2,3,4 : " << endl;

    cout << "1 -> Create or Update memo "<<endl;
    cout << "2 -> Append memo "<<endl;
    cout << "3 -> Delete memo "<<endl;
    cout << "4 -> Exit "<<endl<<endl;
   
    cin>>answer;
	   
        if (answer == 1){
        cout <<"enter file name " ;
        cin.getline(fname, sizeof(fname));
        
        strcat(text2,fname);
        
        fstream file(text2); //open in constructor
        cin.getline(text1, sizeof(text1));
        file << text1;
        file.close();
        }
        else if(answer== 2)
        {
            	cout << "enter file name ";
            	cin.getline(fname, sizeof(fname));
        
                strcat(text2,fname);
                ofstream outfile;
                
                outfile.open(text2, std::ios_base::app);
                outfile << "Data"; 
        }

        else if(answer== 3)
        {
            	cout << "enter file name " ;
            	cin.getline(fname, sizeof(fname));
        
                strcat(text2,fname);
            	cin.getline(text2, sizeof(text2));
                remove( fn );
        }
        else if(answer== 4)
        {
            	exit(1);
        } 
           
 
	return 0;
}



