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
  int result;
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
 
    cout<< "Would you like to sort your inputs? (y = yes , n = no)" << endl;
	cin >> choice;

 
    while(choice = 'y')//perform sort while choice is yes
    {
        void selectionSort(vector<string> inputs);
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
