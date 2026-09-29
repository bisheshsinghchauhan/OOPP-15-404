#include<iostream>

using namespace std;

class Notification{
    public : 
    void sendAlert(long phonenumber , int otp){
        cout<<"SEND TOP" << otp<<endl;
    }
    void sendAlert(string email , string subj, string body){
        cout<<email;
        cout<<subj;
        cout<<body;
    }
    void sendAlert(string devicetokens , string title , string payload , int priority){
        cout<<devicetokens;
        cout<<title;
        cout<<payload;
        cout<<priority;
    }
};
int main(){

return 0;
}