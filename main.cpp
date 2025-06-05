#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Array of points for each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Prototype for computing score
int compute_score(string word);

int main()
{
    // Prompts to user for 2 inputs
    string word1;
    string word2;
    cout << "Player 1: ";
    getline(cin, word1);
    cout << "Player 2: ";
    getline(cin, word2);
    
    // Compute the score of each word (referring to the other function)
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    // Print winner
    if (score1 > score2)
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (score1 < score2)
    {
        cout << "Player 2 wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
    
    return 0;
}

int compute_score(string word)
{
    // Keep track of score
    int score = 0;
    
    // Use double initialised for loop
    // Compute score for each character
    for (int i = 0, len = word.size(); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    
    // Return score
    return score;
}
