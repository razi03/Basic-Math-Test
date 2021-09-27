#include<iostream>
using namespace std;
int main()
{
	
	int First_number = 0;
	int Second_number = 0;
	int Addition = 0;
	int Subtraction = 0;
	int Multiplication = 0;
	int Division = 0;
	cout << std::endl;
	cout << "                                       // MATHEMATICS TEST //" << std::endl;
	cout << std::endl;
	cout << "Enter the first number: " << std::endl;
	cin >> First_number;
	cout << "Enter the second number: " << std::endl;
	cin >> Second_number;
	int Addition_answer = First_number + Second_number;
	int Subtraction_answer = First_number - Second_number;
	int Multiplication_answer = First_number * Second_number;
	int Division_answer = First_number / Second_number;
	cout << " Q#1:  What is the sum of these two numbers? " << std::endl;
	AdditionStatment:
	cin >> Addition;
	if (Addition==Addition_answer)
	{
		cout << "Correct answer! Now answer the second question.";
	
		cout << std::endl;
	}
	else
	{
		cout << "Wrong answer! Try again." << std::endl;
		goto AdditionStatment;
	}
	cout << std::endl;
	cout << "Q#2:  What is the answer by subtracting these two numbers?" << std::endl;
	SubtractionStatement:
	cin >> Subtraction;
	if (Subtraction_answer==Subtraction)
	{
		cout << "Correct answer! Now answer the third question.";
		cout << std::endl;
	}
	else
	{
		cout << "Wrong answer! Try again." << std::endl;
		goto SubtractionStatement;
	}
	cout << std::endl;
	cout << "Q#3:  What is the answer by multiplying these two numbers?" << std::endl;
MultiplicationStatement:
	cin >> Multiplication;
		if (Multiplication==Multiplication_answer)
		{
			cout << "Correct answer! Now answer the Fourth question.";
			cout << std::endl;
		}
		else
		{
			cout << "Wrong answer! Try again." << std::endl;
			goto MultiplicationStatement;
		}
		cout << std::endl;
		cout << "Q#4:  What is the answer by dividing these two numbers?" << std::endl;
	DivisionStetement:
		cin >> Division;
		if (Division==Division_answer)
		{
			cout << "Correct answer! You did great..";
			cout << std::endl;
			cout << std::endl;
			cout << "                                            // THE END //";
			cout << std::endl;
			cout << std::endl;
			cout << std::endl;
			cout << std::endl;
			cout << std::endl;
			cout << std::endl;
		}
		else
		{
			cout << "Wrong answer! Try again." << std::endl;
			goto DivisionStetement;
		}
		cout << std::endl;

}