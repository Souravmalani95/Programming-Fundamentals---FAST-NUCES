#include<iostream>
#include<string>
using namespace std;
int
main ()
{
  //i19-0434
  //Sourav Malani
  char part;
  int number;			//number= number of the grid  
  string colour, colour1, colour2;

  cout << "Which part you want to run?(Part A or B):";
  cin >> part;
  switch (part)
    {
    case 'A':
    case 'a':
      cout << "Enter the square number:";
      cin >> number;
      if ((number >= 1 && number <= 9) || (number >= 19 && number <= 27) || (number >= 37 && number <= 45) || (number >= 55 && number <= 63) || (number >= 73 && number <= 81))	//If the number is in odd row ( 1,3,5,7,9)
	{
	  if (number % 3 == 0)
	    colour = "Red";
	  else if (number % 3 == 1)
	    colour = "Grey";
	  else if (number % 3 == 2)
	    colour = "Blue";
	  //Colour Output
	  cout << "The colour of the square " << number << " is " << colour <<
	    endl;

	}
      else if ((number >= 10 && number <= 18) || (number >= 28 && number <= 36) || (number >= 46 && number <= 54) || (number >= 64 && number <= 72))	//If the number is in Even row (2,4,6,8)
	{
	  if (number % 3 == 1)
	    colour = "Blue";
	  else if (number % 3 == 2)
	    colour = "Red";
	  else if (number % 3 == 0)
	    colour = "Brown";
	  //Colour Output
	  cout << "The colour of the square " << number << " is " << colour <<
	    endl;

	}
      else
	cout << "Wrong Square Number Input" << endl;
      break;
    case 'B':
    case 'b':
      int number1, number2;

      cout << "Enter 1st number:";
      cin >> number1;
      cout << "Enter 2nd number:";
      cin >> number2;
      //Finding colour of the first number
      number = number1;
      if ((number >= 1 && number <= 9) || (number >= 19 && number <= 27) || (number >= 37 && number <= 45) || (number >= 55 && number <= 63) || (number >= 73 && number <= 81))	//If the number is in odd row ( 1,3,5,7,9)
	{
	  if (number % 3 == 0)
	    colour1 = "Red";
	  else if (number % 3 == 1)
	    colour1 = "Grey";
	  else if (number % 3 == 2)
	    colour1 = "Blue";

	}
      else if ((number >= 10 && number <= 18) || (number >= 28 && number <= 36) || (number >= 46 && number <= 54) || (number >= 64 && number <= 72))	//If the number is in Even row (2,4,6,8)
	{
	  if (number % 3 == 1)
	    colour1 = "Blue";
	  else if (number % 3 == 2)
	    colour1 = "Red";
	  else if (number % 3 == 0)
	    colour1 = "Brown";

	}
      else
	cout << "Wrong Square Number Input" << endl;
      //Finding colour of the Second number
      number = number2;
      if ((number >= 1 && number <= 9) || (number >= 19 && number <= 27) || (number >= 37 && number <= 45) || (number >= 55 && number <= 63) || (number >= 73 && number <= 81))	//If the number is in odd row ( 1,3,5,7,9)
	{
	  if (number % 3 == 0)
	    colour2 = "Red";
	  else if (number % 3 == 1)
	    colour2 = "Grey";
	  else if (number % 3 == 2)
	    colour2 = "Blue";

	}
      else if ((number >= 10 && number <= 18) || (number >= 28 && number <= 36) || (number >= 46 && number <= 54) || (number >= 64 && number <= 72))	//If the number is in Even row (2,4,6,8)
	{
	  if (number % 3 == 1)
	    colour2 = "Blue";
	  else if (number % 3 == 2)
	    colour2 = "Red";
	  else if (number % 3 == 0)
	    colour2 = "Brown";
	}
      else
	cout << "Wrong Square Number Input" << endl;


      //Checking wether colours are equall or not.
      if (colour1 == colour2)
	cout << "Colours are same = " << colour1 << endl;
      else
	cout << "Colours are not same. Colour on " << number1 << " is " <<
	  colour1 << " and on " << number2 << " is " << colour2 << endl;
      break;
    default:
      cout << "Wrong input(select A or B)." << endl;


    }



}
