/**
 * focaccia.cpp
 *
 * Debangi Mohanta
 * debangim
 *
 * EECS 183: Project 1
 * Fall 2021
 *
 * Creates a shopping list for making focaccia bread.
 *
 * Project UID: fde244392017fe65ebcc34f01c226b11f113bb3dc6dae8af4cb6ea11bf76f7c8
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;
    
    int loaf;
    const double PEOPLE_PER_LOAF = 4.0;
    loaf = ceil(people / PEOPLE_PER_LOAF);

    cout << "You need to make: " << loaf << " ";
    cout << pluralize("loaf", "loaves", loaf);
    cout << " of focaccia" << endl;

    cout << endl;
    cout << "Shopping List for Focaccia Bread" << endl;
    cout << "--------------------------------" << endl;
 
    // declare all variables including ingredients and cost
    double cupsFlour = 5;
    double teaspoonsYeast = 1.75;
    double teaspoonsSalt = 1.875;
    double tablespoonsOil = 2;
    int bagOfFlour;
    int packageOfYeast;
    int canisterOfSalt;
    int bottleOfOil;
    double totalCost;
    
    // compute the amount of ingredients needed
    bagOfFlour = ceil(loaf * (cupsFlour / 20));
    packageOfYeast = ceil(loaf * (teaspoonsYeast / 2.25));
    canisterOfSalt = ceil(loaf * (teaspoonsSalt / (30 / 5)));
    bottleOfOil = ceil(loaf * (tablespoonsOil / (500 / 14.8)));

    // print ingredient list and pluralize the variables
    cout << bagOfFlour << " ";
    cout << pluralize("bag", "bags", bagOfFlour);
    cout << " of flour" << endl;
    cout << packageOfYeast << " ";
    cout << pluralize("package", "packages", packageOfYeast);
    cout << " of yeast" << endl;
    cout << canisterOfSalt << " ";
    cout << pluralize("canister", "canisters", canisterOfSalt);
    cout << " of salt" << endl;
    cout << bottleOfOil << " ";
    cout << pluralize("bottle", "bottles", bottleOfOil);
    cout << " of olive oil" << endl << endl;
    
    // compute total cost to make total loaves of focaccia
    totalCost = (2.69 * bagOfFlour) + (0.40 * packageOfYeast)
    + (0.49 * canisterOfSalt) + (6.39 * bottleOfOil);
    
    cout << "Total expected cost of ingredients: $" << totalCost << endl;
    cout << endl;
    cout << "Have a great party!" << endl;

    return 0;
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}

