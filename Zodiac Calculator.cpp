#include <iostream>
using std::cout; using std::cin; using std::string;

int main() {
    int year;
    int monkey = 0;
    int rooster = 1;
    int dog = 2;
    int pig = 3;
    int rat = 4;
    int ox = 5;
    int tiger = 6;
    int rabbit = 7;
    int dragon = 8;
    int snake = 9;
    int horse = 10;
    int goat = 11;
    cout << "Type in your birth year here: ";
    cin >> year;
    int animal = year % 12;
    
    switch(animal) {
        case 0:
            cout << "You are a Monkey!";
            break;
        case 1:
            cout << "You are a Rooster!";
            break;
        case 2:
            cout << "You are a Dog!";
            break;
        case 3:
            cout << "You are a Pig!";
            break;
        case 4:
            cout << "You are a Rat!";
            break;
        case 5:
            cout << "You are a Ox!";
            break;
        case 6:
            cout << "You are a Tiger!";
            break;
        case 7:
            cout << "You are a Rabbit!";
            break;
        case 8:
            cout << "You are a Dragon!";
            break;
        case 9:
            cout << "You are a Snake!";
            break;
        case 10:
            cout << "You are a Horse!";
            break;
        case 11:
            cout << "You are a Goat!";
            break;
    }
            return 0;
     
}   
/* Diachonomous Key:
Rooster:1
Dog:2
Pig:3
Rat:4
Ox:5
Tiger:6
Rabbit:7
Dragon:8
Snake:9
Horse:10
Goat:11
Monkey:0
*/