#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// declaration of class Name_pairs. It is contain methods and vectors . 
class Name_pairs
{
	
	std::vector<double> ages;//store age 
	std::vector<std::string> names;//store name 
	const int default_count;
public:
	Name_pairs(int);
	//~Name_pairs();
	void read_names();
	void read_ages();
	void print();
	void sort();
};

//constructor
Name_pairs::Name_pairs( int i) :default_count(i) {};


//allow to user option to enter names from console
void Name_pairs::read_names(){

	std::string name;
	names.erase(names.begin(), names.end());
	int i = default_count;
	while(i--)
	{
		std::cout<<"Enter new name (or enter stop): ";
		std::cin>>name;
		if(name=="stop") 
			break;
		else
			names.push_back(name);
		
	}
	std::cout<<std::endl;
}

//allow to user option to enter ages from console
void Name_pairs::read_ages(){
	int age;
	ages.clear();
	int i = default_count;
	while(i--)
	{
		std::cout<<"Enter new age (or enter 0): ";
		std::cin>>age;
		if(age==0)
			break;
		else
			ages.push_back(age);
	}
	std::cout<<std::endl;
}

//displays names and ages on the screen
void Name_pairs::print(){
	int a=0; int b=0; 
	while(a<ages.size() || b<names.size())  
	{
		std::cout<<names[b]<<" "<<ages[a]<<std::endl;
		a++;
		b++;
	}
	std::cout<<std::endl;
}

//sort names in althabetical oreder and integers in order  
void Name_pairs::sort(){
	std::sort(names.begin(),names.end());
	std::sort(ages.begin(),ages.end());
}

//displays menu options on the screen
void menu(){
	std::cout<<"Choose option from list bel";
	std::cout<<"ow\n1-print\n2-write new name\n3-writ";
	std::cout<<"e new age\n4-sort\n5-exit"<<std::endl;
}


int main ()
{
	Name_pairs ob1(5);
	//ob1.names.size();
	bool flag=true;

	while(flag)
	{
		menu();

		int ch;

		do{
			std::cout<<std::endl;
			std::cin>>ch;


			if(ch==5){flag=false;}

			switch(ch)
			{

			case 1:
			std::cout<<std::endl;
			ob1.print();
			break;

			case 2:
			std::cout<<std::endl;
			ob1.read_names();
			break;

			case 3:
			std::cout<<std::endl;
			ob1.read_ages();
			break;

			case 4:
			std::cout<<std::endl;
			ob1.sort();
			std::cout<<"Sort has been executed! Choose option 1 to check result."<<std::endl;
			std::cout<<std::endl;
			break;

			case 5:
			std::cout<<std::endl;
			std::cout<<"Have a good day!"<<std::endl;
			break;
			}


		} while (ch<1 && ch>6);

	}
	return 0;
}