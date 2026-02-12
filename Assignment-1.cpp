// Assignment 1 attempt
//
// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

int main()
{
  // Declare constants here

  const double electron_volt{1.6e-19};

  // declare variables here

  int Z;
  int ni;
  int nf;
  double delta_E;
  double delta_E_joules;
  string units_answer;

  // request that the user input an atomic number value
  cout<<"Please enter an atomic number:";
  cin>>Z;

  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid atomic number: "; 
    // check variable type of input, ignore if fail
    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  // Ask user to input initial and final quantum numbers
  // check variable type against declaration and ignore if fail

  cout<<"Please enter an initial quantum number:";
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

  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid final quantum number: ";

    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_f^2-1/n_i^2) eV
  delta_E = 13.6*(pow(Z,2))*((1/pow(nf,2))-(1/pow(ni,2)));
  delta_E_joules = delta_E * electron_volt;
 

  // ask user if they prefer an answer in joules or electron volts, provide (y/n) options, ignore if fail
  // print answer
  cout<<"Do you want the answer in Joules? (y/n)";
  cin>>units_answer;

  while(units_answer!="y" && units_answer!="n")
  {
    cout<<"Sorry, your input was not valid, please enter a valid answer: ";

    units_answer.clear(); 
    cin>>units_answer;
  }

  if (units_answer=="y")
  {
    cout<<"In joules, the change in energy is:\n"<<delta_E_joules<<"J";
    
  } else if (units_answer=="n")
  {
    cout<<"In electron Volts, the change in energy is:\n"<<delta_E<<"eV"<<endl;

  }


  while(cin.fail()) 
  {
    cout<<"Sorry, your input was not valid, please enter a valid answer (y/n):"; 
    cin.clear(); 
    cin.ignore(); 
    cin>>Z;
  }

  return 0;
}
