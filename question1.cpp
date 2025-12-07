#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter number of orders ";
    cin>>N;
    int kg;
    float charge;
    float totalincome = 0; 
    for(int i =1; i<=N ; i++){
        cout<<"enter total quatity of cloth in kg for"<< i << "order :";
        cin>>kg;
        charge = kg * 180;
        if(charge>3000){
            charge = charge - (charge * 0.12);
            cout <<"the order is discounded by 12 percent 5";

        }
     
        cout<<"total charge of order "<< i << " is ;" << charge << endl;
        totalincome += charge;

        
    } 
    cout<<"Total income = "<< totalincome << endl;   
    return 0;
}