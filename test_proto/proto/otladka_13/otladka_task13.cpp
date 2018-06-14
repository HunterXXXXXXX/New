//необходимо записать дни недели в контейнер с количеством дней.(для этого надо два контейнера)
//после надо ввести с консоли дни недели с любой цифрой : Friday -12  и записать их в другие контейнеры
//выставить проверку, сравнить со значениями.

#include <iostream>
#include <vector>

int main(){
int sum=0;
// create vectors for basic days of week
std::vector<int> days_in_week;
std::vector<std::string> names;
//std::string name="";
//int i=1;

//push info in them
for(int i=1; i<8;i++)
{
days_in_week.push_back(i);
names.push_back("Monday");
names.push_back("Tuesday");
names.push_back("Wednesday");
names.push_back("Thursday");
names.push_back("Friday");
names.push_back("Saturday");
names.push_back("Sunday");
}

//display sum of days
for(int i=0;i<7;i++)
{
sum=sum+standart[i];
}
std::cout<<sum<<std::endl;


std::string week=" ";
int day=0;
int sum1=0;

//create another vectors for user
std::vector<std::string> week_days;
std::vector<int> days;


//insert data from  console /// Не работает! могу ввести только два дня и два числа
// а должен ввести семь !
for(int i=0;i<8;i++)
{
    std::cin>>week>>day;

    week_days.push_back(week);
    days.push_back(day);

    //i++;
    std::cout<<"sdisgh";
}




return 0;
}
