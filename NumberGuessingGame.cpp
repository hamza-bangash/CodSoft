#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        int Range,random,guess;
        srand(time(0));
        cout<<"Enter your Maximum ";
        cin>>Range;
        random= (rand()%Range)+1;
        do
        {
            cout<<endl<<endl<<"Guess the correct Number: ";
            cin>>guess;
            if (guess>random)
            {
                cout<<endl<<"guess is High";
            }
            else if (guess<random)
            {
                cout<<endl<<"guess is Low :";
            }
            else if (guess==random)
            {
                cout<<endl<<"Congratulation's you win the Game:"<<endl;
            }
        } while (guess!=random);

        cout<<"\n Do you want to play Again: if Yes press y else Enter any other key:";
        cin>>ch;
    }

    cout<<"\nThank you : ";

    return 0;
}