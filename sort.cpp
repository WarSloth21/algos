#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void printVector(vector<string> inputs);

void printVector(vector<string> inputs) {
	for (unsigned int i = 0; i < inputs.size(); i++) {
		cout << inputs[i] << endl;
		cout << endl;

	}
}

void selectionSort(auto& Data);//prototype

void selectionSort(auto& Data)
{
	int i, j, minIndex, tmp;
	
	for (i = 0; i < Data.size() - 1; i++)
	{
		minIndex = i;
		
		//find smallest in unsorted part
		for (j = i + 1; j < Data.size(); j++)
	{
		if (Data[j] < Data[minIndex])
			minIndex = j;
	}
	
		if (minIndex != i)
		{
			tmp = Data[i];
			Data[i] = Data[minIndex];
			Data[minIndex] = tmp;
		} //end if
	} //end outer loop
} //end function
	

int main()
{
  vector<string> inputs;
  string search_key, input;

  char choice;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
    
  selectionSort(vector<string> inputs);
		

   printVector(inputs);

    return 0;
}
