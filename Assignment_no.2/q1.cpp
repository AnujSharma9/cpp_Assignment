#include<iostream>
using namespace std;

class volume{
private:
    int length;
    int width;
    int height;
    int vol;

public:
    volume(){

        cout<<"parameterless constructor"<<endl;

        length=1;
        width=1;
        height=1;

        showVolume();

    }
    volume(int length, int width,int height){
       
       cout<<"parameterize Constructor"<<endl;

       showVolume();
 
    }   
     
    void enterTheValue(){
        cout<<"enter The Value of height"<<endl;
        cin>>length;
        cout<<"enter the value of width"<<endl;
        cin>>width;
        cout<<"enter the value of length"<<endl;
        cin>>length;

        showVolume();
    }
    
    int calculateVol(){
        return length*width*height;
    }

    void showVolume(){
        cout<<"the volume of the box is "<<endl;
        int c= calculateVol();
        cout<<c<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"0. EXIT\n";
    cout<<"1. Initialize the values parameterless contr\n";
    cout<<"2. Accept Input for volume \n" ;
    cout<<"3. Intialize the value parameterize contr \n";
    cout<<"Enter your choice - \n";
    cin >>choice;
    return choice;
}


int main(){

    //volume v1;
    
    int choice;
    while((choice=menu())!=0){
     
    switch (choice)
     {
    case 1:
        {
        volume v1;
        }
        break;
    case 2:
        {
            volume v3;
        v3.calculateVol();
        }
        break;
    case 3:
         { 
    
        volume v2 (2,3,4);  
         } 
        break; 
     default:
        cout<<"invalid choice"<<endl;
        break;
     }
    
    }


}
