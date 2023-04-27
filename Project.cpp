#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

// Question Class
class Question
{
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				   string, string,
				   string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Function to set the values of the questions
void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		 << endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer)
	{
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			 << " out of "
			 << Question_Score
			 << "!" << endl;
		cout << endl;
	}

	// Otherwise
	else
	{
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			 << " out of "
			 << Question_Score
			 << "!" << endl;
		cout << "Correct answer = "
			 << Correct_Answer
			 << "." << endl;
		cout << endl;
	}
}

// Driver code
int main()
{
	cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
		 << endl;
	cout << "\nPress Enter to start "
		 << "the quiz... " << endl;

	// Input
	cin.get();

	string Name, CharsatId;

	// Input the details
	cout << "What is your name?"
		 << endl;
	cin >> Name;
	cout << endl;

	cout << "What is your Id?"
		 << endl;
	cin >> CharsatId;
	cout << endl;

	// variable to take response
	string Respond;
	cout << "Are you ready to take"
		 << " the quiz " << Name
		 << "? yes/no" << endl;
	cin >> Respond;

	// Response as per user's choice
	if (Respond == "yes" || Respond == "Yes")
	{
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else
	{
		cout << "Than try again, When you are ready!!!" << endl;
		return 0;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// 3 is the position of correct answer
	q1.setValues("What is the maximum number of Members in Lok Sabha? : ", "512",
				 "542", "552",
				 "532", 3, 10);
	q2.setValues(" Who Invented the 3-D printer? : ", "Nick Holonyak",
				 "Elias Howe", "Christiaan Huygens",
				 "Chuck Hull", 4, 10);
	q3.setValues("Humayun was born in the year _______ : ", "1508",
				 "1608", "1708",
				 "1808", 1, 10);
	q4.setValues("Fatehpur Sikri was founded as the capital of the Mughal Empire by ____: ", "Jahangir",
				 "Akbar", "Shah Jahan",
				 "Humayun", 2, 10);
	q5.setValues("Who was court poet of Samudragupta? : ", "Chand Bardai",
				 " Bhavabhuti", " Banabhatta",
				 "Harishen", 4, 10);
	q6.setValues("Which Veda depicts the information about the most ancient Vedic age culture? : ", "Atharvaveda",
				 "Samaveda", "Rig Veda",
				 "Yajurveda", 3, 10);
	q7.setValues("Who was the first Tirthankara of the Jains? : ", "Ajitnath",
				 "Rishabhdev", "Aristhenemi",
				 "Parshwnath", 2, 10);
	q8.setValues("The Grand Canyon located in which country? : ", "Ghana",
				 "USA", "Canada",
				 "Bolivia", 2, 10);
	q9.setValues("The Eiffel tower is located in which country: ", "USA",
				 "Italy", "Germany",
				 "France", 4, 10);
	q10.setValues(" The metal whose salts are sensitive to light is? : ", "Zinc",
				  "Copper", "Silver",
				  "Alluminium", 3, 10);

	// Calling question class method to ask questions
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		 << "out of 100" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70)
	{
		cout << "Congrats you passed the"
			 << " quiz!" << endl;
	}

	// Otherwise
	else
	{
		cout << "Alas! You failed the quiz."
			 << endl;
		cout << "Better luck next time."
			 << endl;
	}
	return 0;
}

// Code Submitted by Neel Shah(22AIML048), Sneh Shah(22AIML049), Priyam Vyas(22AIML060)