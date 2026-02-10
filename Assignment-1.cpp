// Assignment 1 attempt
//
// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  // Declare variables here

  const double electron_volt{1.6e-19};


  int Z;
  int ni;
  int nf;
  double delta_E;
  bool junits;
  // Ask user to enter atomic number

  cout<<"Please enter an atomic number:";
  cin>>Z;

  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid atomic number: "; 
    // Clear fail bit and ignore bad input
    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  // Ask user to enter initial and final quantum numbers

  cout<<"Please enter an initial quanutm number:";
  cin>>ni;

  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid initial quantum number: "; 
  
    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  cout<<"Please enter a final quantum number:";
  cin>>nf;

  while(std::cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid final quantum number: ";

    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV

  cout<<"Do you want the answer in Joules? (y/n)";
  cin>>junits;

  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid answer (y/n):"; 
    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  delta_E = 13.6*(Z^2)*(1/ni^2-1/nf^2);

  // Output answer
  cout << "Here is my answer:" <<delta_E<< endl;

  return 0;
}
