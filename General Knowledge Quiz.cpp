#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int numquestions = 20;
const int numchoices = 4;

struct Question {
    string questionText;
    string choices[numchoices];
    char correctAnswer;
};

int main() {
    Question questions[numquestions] = {
        {"Where did sushi originate?", {"A. China", "B. Japan", "C. Korea", "D. America"}, 'A'},
        {"What color is Mickey Mouse's shoes?", {"A. Red", "B. Yellow", "C. Blue", "D. Orange"}, 'B'},
        {"What is the capital of Canada?", {"A. Ontario", "B. Alberta", "C. Quebec", "D. Ottawa"}, 'D'},
        {"What is the capital city of Australia?", {"A. Canberra", "B. Brisbane", "C. Melbourne", "D. Sydney"}, 'A'},
        {"What is the chemical symbol for Gold?", {"A. Au", "B. Ag", "C. Gd", "D. Go"}, 'A'},
        {"Who painted the Mona Lisa?", {"A. Raphael", "B. Michelangelo", "C. Leonardo da Vinci", "D. Caravaggio"}, 'C'},
        {"What is the world's largest ocean", {"A. Southern Ocean", "B. Pacific Ocean", "C. Indian Ocean", "D. Atlantic Ocean"}, 'B'},
        {"Who came up with the theory of relativity?", {"A. Galileo Galilei", "B. Louis Pasteur", "C. Albert Einstein", "D. Robert Hooke"}, 'C'},
        {"Who invented the lightbulb?", {"A. Alexander Graham Bell", "B. Thomas Edison", "C. Nikola Tesla", "D. Albert Einstein"}, 'B'},
        {"Who composed the music for 'The Nutcracker'?", {"A. Mozart", "B. Tchaikovsky", "C. Beethoven", "D. Bach"}, 'B'},
        {"Who was the first President of the United States?", {"A. Abraham Lincoln", "B. Benjamin Franklin", "C. Thomas Jefferson", "D. George Washington"}, 'D'},
        {"What type of animal is a penguin?", {"A. Bird", "B. Insect", "C. Mammal", "D. Reptile"}, 'A'},
        {"Who painted 'Starry Night'?", {"A. Edvard Munch", "B. Claude Monet", "C. Vincent van Gogh", "D. Pablo Picasso"}, 'C'},
        {"Which is the largest continent in the world?", {"A. Asia", "B. Russia", "C. Europe", "D. Australia"}, 'A'},
        {"How many strings does a standard guitar have?", {"A. 8", "B. 2", "C. 4", "D. 6"}, 'D'},
        {"What is the capital city of Italy?", {"A. Rome", "B. Florence", "C. Venice", "D. Milan"}, 'A'},
        {"In what country are the Pyramids of Giza located?", {"A. North America", "B. Africa", "C. India", "D. Egypt"}, 'D'},
        {"What does DNA stand for?", {"A. Deoxidized Nucleic Acid", "B. Deoxyribonicle Acid", "C. Deoxyribonucleic Acid", "D. Deoxyribose Nitrogen Acid"}, 'C'},
        {"What chemical element has the symbol Na", {"A. Neon", "B. Nitrogen", "C. Sodium", "D. Argon"}, 'C'},
        {"What is the main ingredient in chocolate", {"A. Wheat", "B. Cocoa Beans", "C. Milk", "D. Sugar"}, 'B'}
    };

    int score = 0;
	
	cout << "          ===========================================================\n";
    cout << "                     Welcome to the General Knowledge Quiz!\n";
    cout << "                       You have " << numquestions << " questions to answer.\n";
   	cout << "          ===========================================================\n\n";

    srand(time(0));

    for (int i = 0; i < numquestions; ++i) {
        cout << "Question " << i + 1 << ": " << questions[i].questionText << endl;
        for (int j = 0; j < numchoices; ++j) {
            cout << questions[i].choices[j] << endl;
        }

        char userAnswer;
        bool validChoice = false;

        do {
            cout << "Enter your answer (Input only A, B, C, or D): ";
            cin >> userAnswer;

            // Convert user input to uppercase for comparison
            userAnswer = toupper(userAnswer);

            if (userAnswer == 'A' || userAnswer == 'B' || userAnswer == 'C' || userAnswer == 'D') {
                validChoice = true;
            } else {
                cout << "\n\nInvalid choice. Please answer only A, B, C, or D." << endl;
            }
        } while (!validChoice);

        if (userAnswer == questions[i].correctAnswer) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "\nIncorrect. The correct answer is " << questions[i].correctAnswer << ".\n\n";
        }
    }
	
    cout << "\n\n                             Quiz complete!\n";
    cout <<"         *********************************************************\n";
    cout << "                  Your final score is: " << score << " out of " << numquestions << endl;
	cout <<"         *********************************************************\n";
	
    return 0;
}
