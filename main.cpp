#include <iostream>
using namespace std;
int mod(int x, int N)
{
    return (x % N + N) % N;
}
int main()
{
    string msg;
    string msg2 = " ";
    int y ;
    int c ;
    int b ;
    int a ;
    int x ;
    char z ;
    char answer ;
    cout<<"Hello sweety How are you Today ?\n";
    cout<<"please enter your message :- \n";
    getline(cin,msg) ;
    cout<<"What do you like for this message ? \n"
          "1- Cipher \n"
          "2- Decipher \n"
          "3- End \n";
    cin >> answer;
    if (answer == '1')
    {
        cout<<"please enter two number to make this equation (ax+b)%26 where x is the letter to cipher.\n";
        cout<<"a = ";
        cin>>a;
        cout<<"b = ";
        cin>>b;
        for (int i = 0 ;i <msg.length(); i++ )
        {
            if (isupper(msg[i]))
            {
                if (msg[i] != ' ')
                {
                    y = (char(msg[i]) - 65);
                    x = (a * y + b);
                   int w = mod(x,26);
                    z = char(w+ 65);
                    msg2 = msg2 + z;
                }
                else
                {
                    msg2= msg2 + ' ';
                }
            }
            else
            {
                if (msg[i] != ' ')
                {
                    y = (char(msg[i]) - 97);
                    x = (a* y + b);
                    int w = mod(x,26);
                    z = char(w + 97);
                    msg2 = msg2 + z;
                }
                else
                {
                    msg2= msg2 + ' ';
                }
            }

        }
        cout<<msg2;
    }
    else if (answer == '2')
    {
        cout<<"please enter two number to make this equation c(y-b) where y is the letter to decipher.\n";
        cout<<"c = ";
        cin>>c;
        cout<<"b = ";
        cin>>b;
        for (int i = 0 ; i <msg.length() ; i++)
        {
            if (isupper(msg[i]))
            {
                if (msg[i] != ' ')
                {
                    y = (char(msg[i])-65);
                    x = (c*(y - b));
                    int w = mod(x,26);
                    z = char(w+65);
                    msg2 = msg2 + z ;
                }
                else
                {
                    msg2 = msg2 + ' ';
                }
            }
            else
            {
                if (msg[i] != ' ')
                {
                    y = (char(msg[i])-97);
                    x = (c*(y - b));
                    int w = mod(x,26);
                    z = char(w+97);
                    msg2 = msg2 + z ;
                }
                else
                {
                    msg2 = msg2 + ' ';
                }
            }
        }
        cout<<msg2;
    }
    else
    {
        cout<<"ok , we are so happy to help you any time .";
    }
}