#include <iostream>
#include <cstring>

using namespace std;


struct STUDENT
    {
     char name[50];
     int group;
     int score[5];
    };

void cherry(struct STUDENT stud)
{
    cout <<"input name and surname"<<endl;
    cin.getline(stud.name, 50);
    cout <<"input group"<<endl;
    cin>>stud.group;
    cout <<"input score"<<endl;
    cout << sizeof(stud.score)<<endl;
    for(int i = 0; i < sizeof(stud.score); i++)
    {
        cin>>stud.score[i];
    }
    cin.get();
    cout<<endl;
}
void cherryOUT(struct STUDENT *who)
{
    cout<<"\nStudent  "<<who->name;
    cout<<"\nGroup  "<<who->group;
    cout<<"\nScore  ";
    for (int i = 0; i < sizeof(who->score); i++)
    {
        cout<<who->score[i]<<" ";
    }
}
void meow (STUDENT piece[], int n)
{
    for(int i = 1; i < n; i++)
        for(int j = 0; j < n- i; j++)
        if(strcmp(piece[j].name, piece[j+1].name) > 0)
    {
        struct STUDENT temp = piece[j];
        piece[j] = piece[j+1];
        piece[j+1] = temp;

    }
}
void filter (STUDENT stud[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < sizeof(stud[i].score); j++)
        {
            if (stud[i].score[j] == 2)
            {
                flag = true;
            }
        }
        if(flag == true)
        {
            cout<<"\n"<<stud[i].name<<",  group "<<stud[i].group<<endl;
        }
    }
}
int main()
{

    int n = 3;
    struct STUDENT stud1[n];
    for(int i = 0; i < n; i++)
    {
        cherry(stud1[i]);
    }

    meow(stud1, n);

    for(int i = 0; i < n; i++)
    {
        cherryOUT(&stud1[i]);
    }

    filter(stud1, n);



    return 0;
}
