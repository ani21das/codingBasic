#include<iostream>
#include<fstream>
using namespace std;

class student
{
public:
    int marks,min,max;
    float avarage;
public:
    student(){}
    void Readdata();
    void display();
    void ScoreAnalysis();
};

void student::Readdata()
{
  cout<<"Enter the marks: ";
  cin>>marks;
}

void student::display()
{
  cout<<"  "<<marks;
}

void student::ScoreAnalysis()
{
    cout<<endl<<"Maximum score :"<<max;
    cout<<endl<<"Minimum score :"<<min;
}

int main(int argc, char const *argv[])
{
    student s[20];
    fstream file;
    file.open("scores.txt",ios::in);
    cout<<"Writing obtained marks of 20 students"<<endl;
    for(int i=0;i<20;i++)
    {
        s[i].Readdata();
        file.write((char *)&s[i],sizeof(s[i]));
    }
    file.close();
    file.open("scores.txt",ios::in);
    cout<<"\n**Reading student marks from the file**"<<endl;
    for(int i=0;i<5;i++)
    {
      file.read((char *)&s[i],sizeof(s[i]));
      s[i].display();
    }
    cout<<endl;
    for(int i=5;i<10;i++)
    {
      file.read((char *)&s[i],sizeof(s[i]));
      s[i].display();
    }
    cout<<endl;
    for(int i=10;i<15;i++)
    {
      file.read((char *)&s[i],sizeof(s[i]));
      s[i].display();
    }
    cout<<endl;
    for(int i=15;i<20;i++)
    {
      file.read((char *)&s[i],sizeof(s[i]));
      s[i].display();
    }
    file.close();

    
    file.open("scores.txt",ios::in);
    file.read((char *)&s[1],sizeof(s[1]));
    int max,min;
    max=s[1];
    for(int i=0;i<20;i++)
    {
      file.read((char *)&s[i],sizeof(s[i]));
      if(s[i]>max)
      {
          max=s[i];
      }
    }
    s[i].display();
    file.close();
    return 0;
}



