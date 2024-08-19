// #include <iostream>
// using namespace std;
 
// // making our first class 

// class hero{
//     // An empty class provides a size of 1 as the system provides the class a single size for checking 
//     // properties
//     public:
//     int health = 45;
//     private:
//     char level = 'A';
//     void print(){
//         cout<< level << endl;
//     }
    
// };

// int main(){
//     hero spiderman; // creation of object
//     // cout<< "size: " << sizeof(spiderman) << endl;
//     cout<< "Health is: " << spiderman.health <<endl;
//     // cout<< "Health is: " << spiderman.level <<endl;
//     return 0;
// }



// Knowing about getters and setters 
// #include <iostream>
// using namespace std;
// class hero{
//     private:
//     int health = 70;
//     public:
//     char level;

//     void print(){
//         cout<< level << endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }
//     void setHealth(int h){
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };

// int main(){
//     hero mate;
//     cout << "Mate health: " << mate.getHealth();
//     mate.level = 'A';

// cout<< "Health is: " << mate.getHealth() <<endl;
// cout<< "Level is: " << mate.level <<endl;
// }



// dynamically defining a class 

// #include <iostream>
// using namespace std;
// class hero{
//     private:
//     int health = 70;
//     public:
//     char level = 'A';

//     void print(){
//         cout<< level << endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }
//     void setHealth(int h){
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };

// int main(){
//     // static allocation 
//     hero mate;
//     cout<< "Health is: " << mate.getHealth() <<endl;
//     cout<< "Level is: " << mate.level <<endl;

//     // dynamiclly allocation of class 
//     hero *b = new hero;
//     cout<< "Dynamically value of Health is: " << (*b).getHealth() <<endl;
//     cout<< "Dynamically value of Level is: " << (*b).level <<endl;
// }



// Parameterized Constructor , Default Constructor , this keyword  & copy constructor

// #include <iostream>
// using namespace std;
// class hero{
//     private:
//     int health = 70;
//     public:
//     char level = 'A';


//     // Default Constructor 
//     hero(){
//         cout<< "Constructor Called" << endl;
//     }

//     // Parameterized Constructor 
//     hero(int health , char level){
//         this->health = health;
//     }

//     void print(){
//         cout<< "health " << this->health << endl;
//         cout<< "level "<< this->level << endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }
//     void setHealth(int h){
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };

// int main(){


//     hero suresh(70 , 'c');
//     // suresh.setHealth(70);
//     // suresh.setLevel('c');
//     suresh.print();


//     // copy constructor 
//     hero ritesh(suresh);
//     ritesh.print();

//     // // static allocation 
//     // hero mate(60);
//     // cout<< "Address of mate: " << &mate <<endl;
//     // cout<< "Health is: " << mate.getHealth() <<endl;
//     // cout<< "Level is: " << mate.level <<endl;

//     // // dynamiclly allocation of class 
//     // hero *b = new hero;
//     // cout<< "Dynamically value of Health is: " << (*b).getHealth() <<endl;
//     // cout<< "Dynamically value of Level is: " << (*b).level <<endl;
// }

