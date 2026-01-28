#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhập n: ";
    cin>>n;
    int bandau=n;
    int lucsau=0;
    for (int i = n; i > 0; i/=10)
    {
        lucsau=lucsau *10 +n%10;
        
    }
    if (bandau=lucsau)
    {
        cout<<"true";
       
    }
    else{
         cout<<"false";
    }
    return 0;
}