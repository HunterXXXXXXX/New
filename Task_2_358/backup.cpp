#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Name_pairs
{
public:
	int option;

	std::vector<double> ages;
	std::vector<std::string> names;

	void read_names();
	void read_ages();
	void print();
	void sort();
};

int j=0;
int i=0;

//std::sort(my_vect.rbegin(), my_vect.rend());

void Name_pairs:: read_names(){
	std::string name;
	std::cout<<"Enter name(s): ";
	while(std::cin>>name || i<names.size() )
	{
		if(name=="stop"){break;}
		else{names.push_back(name);i++;}
	}
}


void Name_pairs:: read_ages(){
	int age;
	
	std::cout<<"Enter age: ";
	while(std::cin>>age || j<ages.size() )
	{
		if(age==0){break;}
		else{ages.push_back(age);j++;}
	}
}

void Name_pairs::print(){
	int a=0; int b=0; 
	//std::cout<<"print"<<std::endl;
	while(a<ages.size() || b<names.size())  
	{
		//std::cout<<"1asfashtjryyuuuutururuuu"<<std::endl;
		std::cout<<ages[a]<<" "<<names[b]<<std::endl;
		a++;
		b++;
	}
}

void Name_pairs::sort(){
	std::sort(names.begin(),names.end());
	std::sort(ages.begin(),ages.end());
}

void menu(){
	std::cout<<"Choose option\n1-display\n2-write new name\n3-write new age\n4-sort\n5-exit"<<std::endl;
}

int main ()
{
	Name_pairs ob1;

	bool flag=true;

	while(flag)
	{

		menu();

		int ch;

		do{

			std::cin>>ch;

			if(ch==5){flag=false;}

			switch(ch)
			{

			case 1:
			//std::cout<<"1work"<<std::endl;//
			ob1.print();
			//std::cout<<"1executed"<<std::endl;
			break;

			case 2:
			ob1.read_names();//
			break;

			case 3:
			ob1.read_ages();//
			break;

			case 4:
			ob1.sort();
			break;

			case 5:
			break;
			}


		} while (ch<1 && ch>6);

	}
	return 0;
}