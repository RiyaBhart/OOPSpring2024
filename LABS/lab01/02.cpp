#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of students: ";
    cin >>n;
    int marksm;
    int markse;
    int markss;
    char grade;
    for(int i=0;i<n;i++){
        cout<<"Marks of student "<<i+1<<"\n";
        cout<<"Marks in Mathematics: ";
        cin>> marksm;
        cout<<"Marks in English: ";
        cin>> markse;
        cout<<"Marks in Science: ";
        cin>> markss;
        int totalmarks= marksm+markse+markss;
        int avgmarks = totalmarks/3;
        if(avgmarks>90){
            grade = 'A';
        }
        else if(avgmarks>=80 && avgmarks<90){
            grade = 'B';
        }
        else if(avgmarks>=70 && avgmarks<80){
            grade= 'C';
        }
        else if(avgmarks>=60 && avgmarks<70){
            grade = 'D';
        }
        else if(avgmarks<60){
            grade  = 'F';
        }
        cout<<"Total marks: "<<totalmarks<<"\n";
        cout<<"Average Marks: "<<avgmarks<<"\n";
        cout<<"Grade : "<<grade<<"\n\n";
    }
    return 0;
}
