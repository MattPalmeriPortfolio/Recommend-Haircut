#include <iostream>
using namespace std; 

//this program determines what haircut the user should get based off of several questions!

int main(){
	
	//initialize variables
	string gender, supertype, food, genre;
	//begin program
	cout << "welcome to Matt's Marvelous Haircut Emporium's Questionnaire!\n This program will determine which haircut best suits your wacky personality!\n Enter answers in lowercase please!\n";
	cout << "Are you male or female?\n";
	cin >> gender;
	cout << "Are you a superhero or supervillain?\n";
	cin >> supertype;
	if (supertype == "supervillain")
	{
		cout << "You should get a mohawk!\n";
		return 0;
	}
	if (gender == "male")
	{
		cout << "Steak or sushi?\n";
		cin >> food;
		if (food == "steak")
		{
			cout << "You should get a flat top!\n";
			return 0;
		}
		else
		{
			cout << "You should get a pompadour!\n";
			return 0;
		}
	}
	else
	{
		cout << "Anime or sitcom?\n";
		cin >> genre;
		if (genre == "anime")
		{
			cout << "You should go with bangs!\n";
			return 0;
		}
		else
		{
			cout << "You should get a bob!\n";
			return 0;
		}
	}
	return 0;
}

