// Started at 4:52 4-27-2022

// Section 7
// Arrays

#include <iostream>

using namespace std;

int main() {
    
    char vowles[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowles[0] << endl;
    cout << "The last vowel is: " << vowles[4] << endl;
    
//    cin >> vowles[5]; out of bounds - don't do this!
    
    double hi_temps [] {90.1, 89.9, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;  // set the first element in hi_temps to 100.7


    cout << "The first high temperature is now: " << hi_temps[0] << endl;


    int test_scores [] {100, 90, 80, 70, 60};
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    
    cout << "\nNotice what the value of the array name is: " << test_scores << endl;
    
    cout << endl;
    return 0;
}

// Section 7
// Vectors

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
//    vector <char> vowels; // empty
//    vector <char> vowles (5); // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> test_scores (3); // 3 elements all initialized to zero
//    vector <int> test_scores (3, 100); // 3 elements all initialized to 100
//    
      vector <int> test_scores {100, 98, 89};
//    
      cout << "\nTest scores using array syntax:" << endl;
      cout << test_scores[0] << endl;
      cout << test_scores[1] << endl;
      cout << test_scores[2] << endl;
      
      cout << "\nTest scores using array syntax:" << endl;
      
      cout << test_scores.at(0) << endl;
      cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl;
      cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
      
      cout << "\nEnter 3 test scores: ";
      cin >> test_scores.at(0);
      cin >> test_scores.at(1);
      cin >> test_scores.at(2);
      
      cout << "\nUpdated test scores: " << endl;
      
      cout << test_scores.at(0) << endl;
      cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl;
      
      
      cout << "\nEnter a test score to add to the vector: ";
      
      int score_to_add {0};
      cin >> score_to_add;
      
      test_scores.push_back(score_to_add);
      
      cout << "\nEnter one more test score to add to the vector: ";
      
      cin >> score_to_add;
      
      test_scores.push_back(score_to_add);
      
      cout << "\nTest scores are now: " << endl;
      
      cout << test_scores.at(0) << endl;
      cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl;
      cout << test_scores.at(3) << endl;
      cout << test_scores.at(4) << endl;
      
      cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
      
//      cout << "This should cause an exception!!" << test_scores.at(10) << endl;

//      Example of a 2D-vector

      vector <vector<int>> movie_ratings
      {
          {1, 2, 3, 4},
          {1, 2, 4, 4},
          {1, 3, 4, 5}
      };
      
      cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
      cout << movie_ratings[0][0] << endl;
      cout << movie_ratings[0][1] << endl;
      cout << movie_ratings[0][2] << endl;
      cout << movie_ratings[0][3] << endl;
      
      cout << "\nHere are the movie rating for reviewer #1 using vector syntax: " << endl;
      cout << movie_ratings.at(0).at(0) << endl;
      cout << movie_ratings.at(0).at(1) << endl;
      cout << movie_ratings.at(0).at(2) << endl;
      cout << movie_ratings.at(0).at(3) << endl;

      cout << endl;
    return 0;
}

// Section 7
// Challenge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nVector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector1 contains " << vector1.size() << " elements" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nVector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Vector2 contains " << vector2.size() << " elements" << endl;
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nVector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Vector_2d contains: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;
    
    return 0;
}

// Ended at 8:02 4-27-2022
