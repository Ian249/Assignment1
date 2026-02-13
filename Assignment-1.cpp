// Assignment 1 attempt
//
// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
  // Declare constants here

  const double electron_volt{1.6e-19};

  // declare variables here
  // including a vector for the parameters Z ni and nf and a boolean deciding whether
  // the program is run multiple times

  vector <int> parameters(3);
  double delta_E;
  double delta_E_joules;
  string units_answer;
  string run_question;
  bool repeat(true);

  while (repeat)
  {



    // request that the user input an atomic number value
    // check variable type against declaration, and that Z > 0
    cout<<"Please enter an atomic number:";
    cin>>parameters[0];

    while(cin.fail()) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid atomic number: "; 
      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[0];
    }

      while(parameters[0]<=0) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid atomic number: "; 
      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[0];
    }

    // Ask user to input initial and final quantum numbers
    // check variable type against declaration and ignore if fail
    // check that both values are greater than 0 and ignore if fail

    cout<<"Please enter an initial quantum number:";
    cin>>parameters[1];

    while(cin.fail()) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid initial quantum number: "; 
    
      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[1];
    }

    while(parameters[1]<=0) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid initial quantum number: "; 
      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[1];
    }

    cout<<"Please enter a final quantum number:";
    cin>>parameters[2];

    while(cin.fail()) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid final quantum number: ";

      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[2];
    }

    while(parameters[2]<=0) 
    {
      cout<<"Sorry, your input was not valid, please enter a valid final quantum number: "; 
      cin.clear(); 
      cin.ignore(); 
      cin>>parameters[2];
    }

    // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_f^2-1/n_i^2) eV
    delta_E = 13.6*(pow(parameters[0],2))*((1/pow(parameters[2],2))-(1/pow(parameters[1],2)));
    delta_E_joules = delta_E * electron_volt;
  

    // ask user if they prefer an answer in joules or electron volts, provide (y/n) options, ignore if fail
    // print answer
    cout<<"Do you want the answer in Joules or electron volts? (J/eV)";
    cin>>units_answer;

    while(units_answer!="J" && units_answer!="eV")
    {
      cout<<"Sorry, your input was not valid, please enter a valid answer: "<<endl;

      units_answer.clear(); 
      cin>>units_answer;
    }

    if (units_answer=="J")
    {
      cout<<"In joules, the change in energy is:"<<delta_E_joules<<"J"<<endl;
      
    } else if (units_answer=="eV")
    {
      cout<<"In electron Volts, the change in energy is:"<<delta_E<<"eV"<<endl;

    }

    // asks whether the user wants to run thr program again and loops if yes
    // ignore if fail

    cout<<"do you want to run the program again? (y/n)";
    cin>>run_question;
    while(run_question!="y" && run_question!="n")
    {
      cout<<"Sorry, your input was not valid, please enter a valid answer: ";

      units_answer.clear(); 
      cin>>run_question;
    }

    if (run_question=="y")
    {
      repeat = true;
    }
    else if (run_question=="n")
    {
      repeat = false;
    }


  }
  return 0;
}
