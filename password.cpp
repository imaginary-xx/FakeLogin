/* password.cpp - my first C++ application
.__                       .__                            
|__| _____ _____     ____ |__| ____ _____ _______ ___.__.
|  |/     \\__  \   / ___\|  |/    \\__  \\_  __ <   |  |
|  |  Y Y  \/ __ \_/ /_/  >  |   |  \/ __ \|  | \/\___  |
|__|__|_|  (____  /\___  /|__|___|  (____  /__|   / ____|
         \/     \//_____/         \/     \/       \/        
 */ 
 
#include <iostream>

using namespace std;

int main()
{
//set up everything as ints because I am a n00b? :)
  int set;
  int confirm;
  int password;

  cout << "\n:: FakeLogin ::" << endl;
  cout << "NUMERICAL PASSWORDS ONLY!\n" << endl;

  //stores entered password into set
  cout<<"Enter your new password: ";
  cin>> set;
  cin.ignore();
  
  //stores entered password into confirm
  cout<<"Confirm your new password: ";
  cin>> confirm;
  cin.ignore();
  
  //checks to see if set and confirm are the same
  if ( set == confirm ) {
  //if passwords same, continue
  cout << "\nPassword Set!\n" << endl;
  } else {
  //if passwords different, stop&loop
  cout << "\nPasswords did not match!" << endl;
  cout << "Please restart this program.\n" << endl;
  while(1);
  }
  //if all went well so far enter your password
  cout<<"Enter your password: ";
  cin>> password;
  cin.ignore();
  //make sure password is the same as set previously
  if ( password == confirm  ) {
  cout<<"\nlogged in.\n";
  cout<<"\n> ";
  
  } else {
  //if password entered incorrrrrecctly game over :(
  cout<<"wrong password.\n";
  }
  cin.get();
}
