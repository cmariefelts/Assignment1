#include <iostream>
using namespace std;

int main()
{
  //Asking the user for their input
  cout << "What is the maximum room capacity? " << endl;
  int roomCap;
  cin >> roomCap;
  cout << "How many people are going to attend this meeting? " << endl;
  int peopleAtMeeting;
  cin >> peopleAtMeeting;

  //If the people at the meeting doesn't exceed the room capacity, tell the user how many more people you allow
  if (peopleAtMeeting <= roomCap)
  {
    cout << "It is legal to hold the meeting!" << endl;
    cout << "We will allow " << roomCap - peopleAtMeeting << " more people to attend." << endl;
  }
  else //If the people in the meeting exceed the room capacity, tell them how many people to exclude
  {
    cout << "The number of people exceeds the max room capacity. The meeting cannot be held. " << endl;
    cout << peopleAtMeeting - roomCap << " people have to be excluded." << endl;
  }

  return 0;
}
