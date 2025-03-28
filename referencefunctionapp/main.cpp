#include <iostream>


using namespace std;

void getscore(int& cscore){//int & cscore is a reference parameter meaning  it  will recieve a memory address for the actual paramter of function

 cout<<"enter score:"<<endl;
 cin>>cscore;
 cout<<cscore<<endl;

}
void printgrade(int score){
   if(score>75){
      cout<<"pass by distriction"<<endl;
   }else if(score<75 && score >40){
       cout<<"your pass"<<endl;
   }else{
          cout<<"your failed "<<endl;
        if(score>30 && score<40){

           cout<<"your qualify for sup:"<<endl;
        }else{
     cout<<"see your next year"<<endl;
    }
  }



}
int main(){
int coursescore;

getscore(coursescore);//  change in the coursescore results in a change in the cscore
printgrade(coursescore);

 cout<<"the course grade is :"<<coursescore<<endl;

}
