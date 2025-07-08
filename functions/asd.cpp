#include<iostream>
using namespace std;
struct time{
   float hour;
float min;
float sec;

    
    long time_to_secs(time t1){
        return (t1.hour*3600)+(t1.min*60)+(t1.sec);
    }
    void secs_to_time(long t1){
        int hour=t1/3600;
        t1%=3600;
        int minutes=t1/60;
        t1%=60;
        int seconds=t1%60;
        cout<<"your time format again is : "<<endl;
        cout<<"  hours  : "<<" minutes  : "<<"  seconds ."<<endl;
        cout<<"  "<<hours<<"  :"<<minutes<<"  :"<<seconds;
    }
    
};
int main(){
    time timevalues;
    cout<<"enter the value of hours : ";
    cin>>timevalues.hour;
    cout<<"enter the value of minutes : ";
    cin>>timevalues.min;
    cout<<"enter the value of seconds : ";
    cin>>timevalues.sec;
    
    
    long totalsec=timevalues.time_to_secs(timevalues);
    cout<<"total seconds are :   ";
    cout<<totalsec<<endl;
    timevalues.secs_to_time(totalsec);

}
