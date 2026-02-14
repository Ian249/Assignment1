This is the README file for my Assignment one submission

This program calculates the energy level difference within the Bohr Atomic model
It asks the user to enter several parameters related to the calculation, and the units they wish the result to be displayed in.
The program then queries the user on whether they wish to re-run the calculation with different values, and terminates if not.

Throughout, input checks are used to check if the user has given a valid integer, or string valued answer, and checks are in place to catch values which do not correspond to a real system.
The error handling runs through each character of input, and determines whether the value is valid or not, before producing an error. This allows the program to identify an integer within a string of invalid inputs. All integers in the vector are assigned as 0 and, since the input values are required to be greater than 0, we can check whether a new value has been written to it.
