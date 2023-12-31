/* this program contain quiz app
written by Abate Agegnehu 
*/


#include<iostream>
using namespace std;
class Question{
    public:
     int questionNumbers;
     string questionText;
     int numberOfChoices;
     string*choices;
     int answerIndex;
        Question(int, string ,int,string*,int);
        bool isCorrect(int);
};
Question::Question(int num,string text,int numChoice,string*choice,int ans){

questionNumbers=num;
questionText=text;
numberOfChoices=numChoice;
choices=choice;
answerIndex=ans;
}
bool Question::isCorrect(int attempt){
    if( attempt==answerIndex){
        return true;
    }
    return false;
}
int main(){
    int total=0,answer,total1=0;
    Question*questions;
    questions=new  Question[7]{
        {1,"which country is power full during second world war",3,new string[3]{"Britain","Sudan","Ethiopia"},1},
        {2,"When Ethiopia join league of nation",4,new string[4]{"1900","1927","1922","1923"},4},
        {3,"who introduce reletional data model",3,new string[3]{"Dr.E.F.Codd","thomas edison","jemscavani"},1},
        {4,"which one of the following is best programming language",4,new string[4]{"java","cpp","javascript","python"},2},   
     {5,"c++ is high level language",2,new string[2]{"true","false"},1},
     {6,"which one is odd",5,new string[5]{"+","-","*","&&","/"},4},
     {7,"which one of the folowing is theprime minster of Ethiopia ",3,new string[3]{"Abiy Ahmed","Salework Zewude","Abate Agegnehu"},1} };
      ;
       for(int i=0;i<7;i++){
        cout<<"Q-"<<questions[i].questionNumbers<<endl;
        cout<<questions[i].questionText<<endl;
        for(int j=0;j<questions[i].numberOfChoices;j++){
            cout<<(j+1)<<") "<<questions[i].choices[j]<<endl;
        }
           // my edit
        cout<<"your answer: ";
        cin>>answer;
        if(questions[i].isCorrect(answer)){
            ++total;
         cout<<"CORRECT"<<endl;
        }
        else{
            cout<<"INCORRECT, The correct answer is "<<questions[i].answerIndex<<endl;
        }
       ++total1;
        cout<<endl;
       }
       cout<<"the total is:"<<total<<" / "<<total1;
}
