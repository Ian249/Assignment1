// Assignment 1 attempt

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

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

  std::cout<<"Please enter an atomic number:";
  std::cin>>Z;

  while(std::cin.fail()) 
  {
    std::cout<<"Sorry, your input was not valid, please enter a valid atomic number: "; 
    // Clear fail bit and ignore bad input
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cin>>Z;
  }

  // Ask user to enter initial and final quantum numbers

  std::cout<<"Please enter an initial quanutm number:";
  std::cin>>ni;

  while(std::cin.fail()) 
  {
    std::cout<<"Sorry, your input was not valid, please enter a valid initial quantum number: "; 
  
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cin>>Z;
  }

  std::cout<<"Please enter a final quantum number:";
  std::cin>>nf;

  while(std::cin.fail()) 
  {
    std::cout<<"Sorry, your input was not valid, please enter a valid final quantum number: "; 
  
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cin>>Z;
  }

  // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV

  std::cout<<"Do you want the answer in Joules? (y/n)";
  std::cin>>junits;

  while(std::cin.fail()) 
  {
    std::cout<<"Sorry, your input was not valid, please enter a valid answer (y/n): "; 
  
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cin>>Z;
  }

  delta_E = 13.6*(Z^2)*(1/ni^2-1/nf^2);

  // Output answer
  std::cout << "Here is my answer:" <<delta_E<< std::endl;

  return 0;
}
