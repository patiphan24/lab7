#include <iostream>
#include <string>
using namespace std;

int main(){
    string ans;
    string x;
    string y;
    string z;
    int i;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,ans);
    cout << "Fahsai: Wow!!! " << ans << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << ans << ": ";
    cin >> i;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (i/10000000)-12;
    cout << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << ans << ": ";
    getline(cin,x);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << ans << ": ";
    getline(cin,y);
    cout << "Fahsai: " << y << "....that is OK!!! I'm looking forward to watching "<<  x << " with you.\n";
    cout << ans << ": ";
    cin.ignore();
    cout << "Fahsai: 555+ see you " << y;
    cout << ". Bye Bye \\(^ ^)/";
    
}