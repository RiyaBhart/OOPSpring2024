#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of events: ";
    cin>>n;
    string* eventname = new string[n];
    int* date = new int[n];
    string* venue = new string[n];
    string* organizer = new string[n];
    for(int i=0;i<n;i++){
        cout<<"Enter event name: ";
        cin>>eventname[i];
        cout<<"Enter date: ";
        cin>>date[i];
        cout<<"Enter venue: ";
        cin>>venue[i];
        cout<<"Enter Organizer: ";
        cin>>organizer[i];
    }
    cout<<"\nEVENTS: \n";
    for(int i=0;i<n;i++){
        cout<<eventname[i]<<endl;
    }
    int searchdate;
    cout<<"Enter the date to be searched for events: ";
    cin>>searchdate;
    for(int i=0;i<n;i++){
        if(searchdate == date[i]){
            cout<<"Event name: "<<eventname[i]<<endl;
            cout<<"Event date: "<<date[i]<<endl;
            cout<<"Event venue: "<<venue[i]<<endl;
            cout<<"Event Organizer: "<<organizer[i]<<endl;
        }
    }
    delete[] eventname;
    delete[] date;
    delete[] venue;
    delete[] organizer;
    return 0;

}
