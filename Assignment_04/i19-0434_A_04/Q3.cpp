#include <iostream>
#include <string>
using namespace std;
// option = 1 (Sort according to complaints resolved)
// option = 2 (Sort according to hours worked)
int main ()
{
  int option;
  string csrID[7] = { "CSR_01", "CSR_02", "CSR_03", "CSR_04", "CSR_05", "CSR_06", "CSR_07" };
  string csrName[7];
  int hrs[7], i;
  int cR[7], totalComplainsResolved = 0;
  double payRate[7];
  double wages[7];
  
  // GETTING CSRs Information.................
  for (i = 0; i < 7; i++) {
      cout << "Enter information for " << csrID[i] << ":\n";
      cout << "      Enter name: ";
      getline (cin, csrName[i]);
      cout << "      Enter hours worked: ";
      cin >> hrs[i];
      // Validation
      while (hrs[i] < 0) {
	  cout << "Hours cannot be zero.Enter hours worked: ";
	  cin >> hrs[i];
	  }
      cout << "      Enter complaints resolved: ";
      cin >> cR[i];
      //    validation
      while (cR[i] < 0){
	  cout << "Complaints resolved cannot be zero. Enter again:";
	  cin >> cR[i];
	  }
      cin.ignore (255, '\n');
      totalComplainsResolved += cR[i];
  }
  cout << endl;
  // Calculating payRate and gross wage.............
  for (i = 0; i < 7; i++){
    payRate[i] = 25 + (25.0 * cR[i]) / totalComplainsResolved;
    wages[i] = hrs[i] * payRate[i];
  }
  // OUTPUT EACH CSR...................
  for (i = 0; i < 7; i++) {
      cout << "CSR ID: " << csrID[i] << endl;
      cout << "Name : " << csrName[i] << endl;
      cout << "Gross wage : $" << wages[i] << endl;
  }
  int choice, N, j;
  cout << "1. Display top N CSR based on complains resolved"<<endl;
  cout << "2. Display top N CSR based on hours worked"<<endl;
  cout << "Enter your choice: ";
  cin >> choice;
  if (choice == 1){
      cout << "Enter N: ";
      cin >> N;
      option=1;
      //Sorting CSR information...............
      for (i = 0; i < 7 - 1; i++) {
	     for (j = 0; j < 7 - i - 1; j++) {
		     if (cR[j] > cR[j + 1]) {
		      // Swap csrID
		      string temp = csrID[j];
		      csrID[j] = csrID[j + 1];
		      csrID[j + 1] = temp;
		      // Swap csrName
		      temp = csrName[j];
		      csrName[j] = csrName[j + 1];
		      csrName[j + 1] = temp;
		      // Swap Hours
		      int temp2 = hrs[j];
		      hrs[j] = hrs[j + 1];
		      hrs[j + 1] = temp2;
		      // Swap cR
		      temp2 = cR[j];
		      cR[j] = cR[j + 1];
		      cR[j + 1] = temp2;
		      // Swap payRate
		      double temp3 = payRate[j];
		      payRate[j] = payRate[j + 1];
		      payRate[j + 1] = temp3;
		      // Swap wages
		      temp3 = wages[j];
		      wages[j] = wages[j + 1];
		      wages[j + 1] = temp3;
		    }
	     }
	  }
     for (i = 0; i < N; i++) {
	  cout << (i + 1) << "CSR ID: " << csrID[i] << " - ";
	  cout << "Name: " << csrName[i] << " - ";
	  cout << "Gross wage: $" << wages[i] << "\n\n";
	}
  }
  else if (choice == 2) {
      cout << "Enter N: ";
      cin >> N;
      option=2;
      if (hrs[j] > hrs[j + 1]){
	  // Swap csrID
	  string temp = csrID[j];
	  csrID[j] = csrID[j + 1];
	  csrID[j + 1] = temp;
	  // Swap csrName
	  temp = csrName[j];
	  csrName[j] = csrName[j + 1];
	  csrName[j + 1] = temp;
	  // Swap hours
	  int temp2 = hrs[j];
	  hrs[j] = hrs[j + 1];
	  hrs[j + 1] = temp2;
	  // Swap cR
	  temp2 = cR[j];
	  cR[j] = cR[j + 1];
	  cR[j + 1] = temp2;
	  // Swap payRate
	  double temp3 = payRate[j];
	  payRate[j] = payRate[j + 1];
	  payRate[j + 1] = temp3;
	  // Swap wages
	  temp3 = wages[j];
	  wages[j] = wages[j + 1];
	  wages[j + 1] = temp3;
	  }
	  for (i = 0; i < N; i++) {
	      cout << (i + 1) << "CSR ID: " << csrID[i] << " | ";
	      cout << "Name : " << csrName[i] << " - ";
	      cout << "Gross wage: $" << wages[i] <<endl<<endl;
	  }
  }
  else{
	  cout << "Invalid choice" << endl;
  }
  return 0;
    
}
