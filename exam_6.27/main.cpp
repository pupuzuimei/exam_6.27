#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct student{
    int number;
    string name;
    string sex;
    int age;
};
struct people{
    string referee;
    string people;
    int score[5];
};
int main() {
    student t[10];
    people k[10];
    int i,j;
    ofstream inf("/Users/s20181106278/Desktop/myinf.txt");
    ifstream onf("/Users/s20181106278/Desktop/onf.txt");
    ifstream enf("/Users/s20181106278/Desktop/enf.txt");
    if(onf.is_open())
    {
        for(i=0;i<5;++i)
        {
            onf>>t[i].number>>t[i].name>>t[i].sex>>t[i].age;
        }
        onf.close();
    }
    if(enf.is_open())
    {
        for(j=1;j<6;j++)
        {
            enf>>k[j].people;
        }
        for(j=1;j<8;++j)
        {
            for(i=1;i<6;++i)
            {
              enf>>k[j].score[i];
            }

        }
        
        enf.close();
    }
    if(inf.is_open())
    {
        for(int i=0;i<5;i++)
        {
            inf<<t[i].number<<" "<<t[i].name<<" "<<t[i].sex<<" "<<t[i].age<<endl;
            
        }
        for(int i=1;i<6;i++)
        {
            inf<<k[i].people;
        }
        inf<<endl;
        for(j=1;j<8;++j)
        {
            for(i=1;i<6;++i)
            {
                inf<<k[j].score[i];
            }
            
        }
        inf.close();
    }
    return 0;
}
