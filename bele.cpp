// #include <iostream>
// using namespace std;
// int main(){
//     char size;
//     int quantity;
//     bool isAvailable;
//     bool discount;
//     int price;

//     cout << "Welcome to the Nike store!\n"
//          << "We have Nike training shirts, pick your size! (S/M/L/XL)\n"
//          << "Enter your size: ";
//     cin >> size;
    
//     if (size == 'S' || size == 'M'){
//         isAvailable = true;
//     }
//     else {
//         isAvailable = false;
//     }

//     cout << "Enter your quantity: ";
//     cin >> quantity;

//     discount = (quantity >= 3);

//     if (isAvailable && discount){
//         price = 100;
//     }

//     else if(!isAvailable && discount){
//         price = 150;
//     }

//     else if(isAvailable && !discount){
//         price = 125;
//     }
        
//     else{
//         price = 175;
//     }


     
//      cout << "The price is " << price << "$";   


// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     char smokes;
//     bool highChancesOfCancer;
//     bool hasHighHR;
//     int BPM;
//     string survivalChance;
    

//     cout << "Welcome to the Hospital!\n"
//          << "Do you smoke? (y/n)\n"
//          << "Answer: ";
//     cin >> smokes;

//     if(smokes == 'y' || smokes == 'Y' )
//          highChancesOfCancer = true;

//     else if(smokes == 'n' || smokes == 'N')
//         highChancesOfCancer = false;
        
   
//       cout << "Enter your BPM: ";
//       cin >> BPM;
//       hasHighHR = (BPM >= 85);
      

//       if (highChancesOfCancer && hasHighHR)
//         survivalChance = "Very Low";

//       else if(highChancesOfCancer && !hasHighHR )
//         survivalChance = "Low";

//       else if (!highChancesOfCancer && hasHighHR)
//         survivalChance = "Medium";
        
        
//       else 
//         survivalChance = "High";



//         cout << "The patient has " << survivalChance << " survival chance.";

// }

// int main(){
//     bool bestKFC = false;
//     bool bestSubway = false;
//     bool bestChipotle = false;
//     string orderKFC;
//     string rating;
//     string orderSubway;
//     int balance = 100;
//     int currentBalance;
   
    

//     cout << "What is the best fast food chain?\n"
//          << "KFC\n"
//          << "Subway\n"
//          << "Chipotle\n"
//          << "Your answer: ";

//     cin >> rating;

//     if(rating == "KFC" || rating == "kfc"){
//         bestKFC = true;
//         cout << "Welcome to KFC!\n";
//     }

//     else if (rating == "SUBWAY"){
//         bestSubway = true;
//     }

//     else if (rating == "Chipotle"){
//         bestChipotle = true;
//     }

//     else {
//         cout << "Invalid option. ";
//     }

//       while (bestKFC){
        
//         cout << "On our menu we have:\n"
//              << "Wings 10$\n"
//              << "Fries 5$\n"
//              << "Burger 12$\n"
//              << "Checkout\n"
//              << "Your order:";
//         cin >> orderKFC;
//              if (orderKFC == "Wings" || orderKFC == "wings"){

//                 balance -= 10;

//              }

//              else if (orderKFC == "Fries" || orderKFC == "fries"){
                
//                 balance -= 5;
//              }

//              else if (orderKFC == "Burger" || orderKFC == "burger"){
             
//                 balance -= 12;
//             }

//             else if  (orderKFC == "Checkout" || orderKFC == "checkout"){
//                 cout << "Receipt\n"
//                      << "________\n"
//                      << "Current balance is " << balance << "$";
//                      break;
//                     }

//             else {
//                 cout << "Invalid order. Try again:";
//                 cin  >> orderKFC;
//             }
//                 cout << "Order went trough\n"
//                      << "Current balance is " << balance << "$\n";

            

//         }
        
        


// int main(){
//     string guess;
//     string word = "ohsue";
//     int attempt = 3;

//     cout << "Welcome to the scramble game!\n"
//          << "Try to guess the word " << word << ", you only have " << attempt << " attempt left\n"
//          << "Your guess: ";
//      cin >>  guess;    

         
    
//     while (guess != "house" || guess != "House"){
//         attempt --;
//         cout << "Incorrect.\n"
//         << "Try to guess the word " << word << ", you only have " << attempt << " attempt left\n"
//         << "Your guess: ";
//         cin >>  guess;
        
//             if (attempt == 1){
//                 cout << "You lost!\n";
//                 break;
//              }



             

//     }
        
//       cout  << "Statistics:\n"
//             << "_________\n"
//             << "Attempts: 3\n"
//             << "Word scrambled: ohsue\n"
//             << "Correct word: " 
//             << word.at(1) 
//             << word.at(0)
//             << word.at(3)
//             << word.at(2)
//             << word.at(4);





// string sentence = "I am learning C++ programming, and I want to improve my skills.";

// sentence.at(0) = 'i';

// int learning = sentence.find("learning");
// sentence.replace(learning ,8,"studying" );
// sentence.insert(14,"in depth ");
// int find = sentence.find("C++");
// int change = sentence.find(".");
// sentence.replace(change, 1, " ");
// sentence.append("and I enjoy coding.");
// cout << sentence;


// }

// string originalSentence = "The quick brown fox jumps over the lazy dog.";
// string sentence = "The quick brown fox jumps over the lazy dog.";


// sentence.at(0) = 't';
// int quick = sentence.find("quick");
// sentence.replace(quick,5,"fast");
// sentence.insert(18, " and clever");
// int find = sentence.find(".");
// sentence.replace(find,1," ");
// sentence.append(", and it is very agile!");
// int pos = originalSentence.find("lazy");



// cout << "Original sentence: " << originalSentence << endl
//      << "Updated sentence: " << sentence << endl
//      << "Position of the word 'lazy' (from the original sentence): " << pos;

   



// }
// int number;
// int i;
// int sum = 0;
// int numbercount = 0;
// int numberamount;
// cout << "First number indicates how many number you want to enter.\n"
//      << "Amount of numbers:";
// cin >> numberamount;

// for(i = 1; i <= numberamount; i++){
    
//     cout << "Number: ";
//     cin >> number;
//     sum += number;
//     numbercount += 1;
// }

// cout << "Average: " << sum / numbercount;
    
    

// }


// #include <iostream>
// using namespace std;


// const double PI = 3.14159265359;

// class Cylender{

//     public:

//         double volume (){
//             return PI * base_radius * base_radius * height;
//         }

    

//         double base_radius;
//         double height;



// };


// int main(){


// Cylender cylender1;

// cout << cylender1.volume();

// }



// #include <iomanip>
// #include <iostream>
// #include <string>
// using namespace std;

// class Macros{
//     public: 
    
//     int sugar;
//     int protein;
//     int calories;



//     Macros (int sugar, int protein, int calories){
//         this -> sugar = sugar;
//         this -> protein = protein;
//         this -> calories = calories;

//     }

//     void macrosFunction(){
//         cout << "Grams of Sugar: " << sugar << '\n' 
//              << "Grams of prptein: " << protein << '\n' 
//              << "Amount of calories: " << calories << '\n'
//              << "This is your daily macros goal!" << endl << endl;
//             }

//     void trackMeal(string mealName){
        
        
//         int sugarGram, proteinGram, calorieAmount;

       
//         cout << "Enter " << mealName << " macros.\n"
//              << "Grams of Sugar: ";
//         cin >> sugarGram;
//         cout << "Grams of protein: ";
//         cin >> proteinGram;
//         cout << "Amount of calories: ";
//         cin >> calorieAmount;
        
//         sugar -= sugarGram; 
//         protein -= proteinGram; 
//         calories -= calorieAmount; 

//         cout << sugar << " grams of sugar left\n"
//              << protein << " grams of protein left\n"
//              << calories << " amount of calories left\n";
    
//         } 

        
//         void tracker(){
//             trackMeal("Breakfast");
//             trackMeal("Lunch");
//             trackMeal("Dinner");


//          }   


//          void goodbye(){
//             cout << "Goodbye, have a good day!";
           
//          }

//          void reuslt(){
//             cout << "______________________\n"
//                  << "Macros left today\n" 
//                  << "Sugar: " << sugar << '\n'
//                  << "Protein: " << protein << '\n'
//                  << "Calories: " << calories << '\n';
//          }

//         bool needsMoreProtein(){
//             return(protein > (sugar + protein + calories) / 2);

            


//         }
         
         
                
         
         

    
    
    




// };

// int main(){
//    string yesORno;
//    Macros macrosDay1(50, 80, 800);
//    macrosDay1.macrosFunction();
//    cout << "Do you want to track your macros? (Y/N) : ";
//    cin >> yesORno;

//    if (yesORno == "Y" || yesORno == "y")
//       macrosDay1.tracker();

//    else
//       macrosDay1.goodbye();  


//       macrosDay1.reuslt(); 

//     if (macrosDay1.needsMoreProtein())
//         cout << "You should focus on eating more protein-rich meals\n";

//     else 
//         cout << "Your protein is balanced\n";    
    

//       }


    

    





   





// #include <iostream> 
// #include <string>
// using namespace std;

// class Student{
//     public: 
//         string name;
//         int studentID;
//         double exam1, exam2, exam3;

        
//         Student(string name, int studentID, double exam1, double exam2, double exam3){
//             this-> name = name;
//             this-> studentID = studentID;
//             this-> exam1 = exam1;
//             this-> exam2 = exam2;
//             this-> exam3 = exam3;



//         }

//         void studentInformation(){
//             cout << "Student's Name: ";
//             cin >> name;
//             cout << "Student's ID: ";
//             cin >> studentID;
//             cout << "Exam 1 score : ";
//             cin >> exam1;
//             cout << "Exam 2 score: ";
//             cin >> exam2;
//             cout << "Exam 3 score: ";
//             cin >> exam3;


//         }
        




     
//         double getAverage(){
//         return (exam1 + exam2 + exam3) / 3.0;
        

//      }   

//        char getGrade(){
//             char letterGrade;
//             if (getAverage() >= 90)
//                 letterGrade = 'A';
              
//             else if (getAverage() >= 80)
//             letterGrade = 'B';  

//             else if (getAverage() >= 70)
//             letterGrade = 'C';  

//             else if (getAverage() >= 60)
//             letterGrade = 'D';  

//             else 
//             letterGrade = 'F';


//             return letterGrade;




            
//         }

//         void displayInformation(){
//             cout << "Student's name: " << name << '\n';
//             cout << "Student'S ID: " << studentID << '\n';
//             cout << "Student's Grade: " << getGrade() << '\n';
//         }





// };



// int main(){
    
//     Student student1("", 0, 0.0, 0.0 ,0.0);
//     student1. studentInformation();
//     student1. displayInformation();




// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// const double PI = 3.14159265359;

// class Cylinder {
    
//     public:

//         //Constructor
//         Cylinder(){
//             base_radius = 2.0;
//             height = 2.0;

//         }
//         Cylinder(double rad_param, double height_param ){
//             base_radius = rad_param;
//             height = height_param;

//         }
//          //Function (methods)
//          double volume(){
         
//              return PI * base_radius * base_radius * height;
//         }

        
//      private:
//         //Member variables 
//         double base_radius = 1.0;
//         double height = 1.0;       

       




// };

// int main(){

//     Cylinder cylinder1; // object
//     cout << "Volume" << cylinder1.volume();

   
         






// }



// #include <iostream> 
// #include <string>
// #include <iomanip>
// using namespace std;


// class BankAccount{

//     public: 
//         //Member values
//         string accountHolder;
//         int accountNumber, pin;
//         double balance;
      

      

//         //Constructor
       
        
        
        
//         void createAccount(){
//             cout << "Welcome to the bank!\n"
//                  << "You have to create an account!\n"
//                  << "Account Holder: ";
//             getline(cin, accountHolder);
//             cout << "Account Number: ";
//             cin >> accountNumber; 
            

            
//         }
        
//         double deposit(){
//             double amount;
//             cout << "Deposit Amount: ";
//             cin >> amount;
//             balance += amount;
//             return balance;
//             }

            


        

//         double withdraw(){
//             double amount;
//             cout << "Withdraw Amount: ";
//             cin >> amount;
//             if (balance < amount)
//                 cout << "Insufficient funds\n";
        
//             balance -= amount;
//             return balance;


//         }

//         void displayInfo(){
//             createAccount();
//             cout << "Welcome " << accountHolder << '\n'
//                  << "Your account number is " << accountNumber << '\n';

//         }

//         void updatedBalnce(){
//             deposit();
//             withdraw();
//             cout << "Account details: \n"
//                  << "Holder: " << accountHolder << '\n'
//                  << "Account number: " << accountNumber << '\n'
//                  << "Balance: $" << balance;

//         }







// };

// int main(){
  

//      BankAccount user1;
//      user1.displayInfo();
//      user1.updatedBalnce();
     

// }


// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// class Property{
//     public:

//     //Member
//     string location;
//     string type;
//     int yearBuilt;
//     int originalPrice;
//     int currentPrice;
//     bool isOwned;

//     //Constructor
//     Property(string location, string type, int yearBuilt ){
//         this-> location = location;
//         this-> type = type;
//         this-> yearBuilt = yearBuilt;
//         originalPrice = 100000;
//         currentPrice = 100000;
//         isOwned = false; //Decides whether the user starts owning the properties or not


//     }

//     //Method
//     string getPropertyInfo( ){
//         return location + ", " + type + ", " + to_string(yearBuilt); 
       

//     }

    
    
//     bool buyProperty(double &userMoney){
//         if (!isOwned && userMoney >= currentPrice){
            
//             isOwned = true;
//             userMoney -= currentPrice;
//             reducedPrice();            
//             return true;
//         }
//         else{
//           return false;
//         }
//     }

//     bool sellProperty(double &userMoney){
//         if(isOwned){
//             isOwned = false;
//             userMoney += currentPrice;
//             reducedPrice(); 

//             return true;

//         }
//         else{
//          return false;
//         }
//     }

    

    

     

//     private:

//     void reducedPrice( ){
//         currentPrice -= (0.05 * originalPrice);
        
//         if (currentPrice < 0)
//             currentPrice = 0;
         
       
//     }






// };

// int main(){
//     srand(time(0));
   
//     bool success;
//     double userMoney = 1000000.0;
//     Property property1 ("(Iceland)" , "(Apartment)", 1900);
//     Property property2 ("(USA)" , "(Villa)", 1700);
//     Property property3 ("(Denamrk)" , "(House)", 2020);
    

//     for (int i = 1; i <= 10; ++i) {
//         cout << "\n--- Transaction " << i << " ---\n";
//         int propIndex = rand() % 3; // to pick a random property
//         int action = rand() % 2; // 0 to buy, 1 to sell

//         if(propIndex == 0){
//             if(action == 0){
//                 success = property1.buyProperty(userMoney);
//                 if(success){
//                     cout << "Attempting to buy: "
//                          << property1.getPropertyInfo() << '\n'
//                          << "Success! You bought the " << property1.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney;

//                         }
//                 else {
//                     cout << "Attempting to buy: "
//                          << property1.getPropertyInfo() << '\n'
//                          << "Failure! You currently own " << property1.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney;
//                         }
//                     }
            
//             else {
//                 success = property1.sellProperty(userMoney);
//                 if (success){
                    
//                     cout << "Attempting to sell: " 
//                      << property1.getPropertyInfo() << '\n'
//                      << "Success! You sold the " << property1.getPropertyInfo() << '\n'
//                      << "Current balance: " << userMoney;
//                     }
//                 else {
//                     cout << "Attempting to sell: " 
//                     << property1.getPropertyInfo() << '\n'
//                     << "Failure! You do not own " << property1.getPropertyInfo() << '\n'
//                     << "Current balance: " << userMoney;


//                 }    
//             }

//         }

//         else if(propIndex == 1){
//             if(action == 0){
//                 success = property2.buyProperty(userMoney);
//                 if(success){
//                     cout << "Attempting to buy: "
//                          << property2.getPropertyInfo() << '\n'
//                          << "Success! You bought the " << property2.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney << '\n';
//                         }
//                 else {
//                     cout << "Attempting to buy: "
//                          << property2.getPropertyInfo() << '\n'
//                          << "Failure! You currently own " << property2.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney << '\n';
//                         }
//                     }
            
//             else {
//                 success = property2.sellProperty(userMoney);
//                 if (success){
                    
//                     cout << "Attempting to sell: " 
//                      << property2.getPropertyInfo() << '\n'
//                      << "Success! You sold the " << property2.getPropertyInfo() << '\n'
//                      << "Current balance: " << userMoney << '\n';
//                     }
//                 else {
//                     cout << "Attempting to sell: " 
//                     << property2.getPropertyInfo() << '\n'
//                     << "Failure! You do not own " << property2.getPropertyInfo() << '\n'
//                     << "Current balance: " << userMoney << '\n';


//                 }    
//             }
//         }

//         else if (propIndex == 2){
//             if(action == 0){
//                 success = property3.buyProperty(userMoney);
//                 if(success){
//                     cout << "Attempting to buy: "
//                          << property3.getPropertyInfo() << '\n'
//                          << "Success! You bought the " << property3.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney << '\n';
//                         }
//                 else {
//                     cout << "Attempting to buy: "
//                          << property3.getPropertyInfo() << '\n'
//                          << "Failure! You currently own " << property3.getPropertyInfo() << '\n'
//                          << "Current balance: " << userMoney << '\n';
//                         }
//                     }
            
//             else {
//                 success = property3.sellProperty(userMoney);
//                 if (success){
                    
//                     cout << "Attempting to sell: " 
//                      << property3.getPropertyInfo() << '\n'
//                      << "Success! You sold the " << property3.getPropertyInfo() << '\n'
//                      << "Current balance: " << userMoney << '\n';
//                     }
//                 else {
//                     cout << "Attempting to sell: " 
//                     << property3.getPropertyInfo() << '\n'
//                     << "Failure! You do not own " << property3.getPropertyInfo() << '\n'
//                     << "Current balance: " << userMoney << '\n';


//                 }    
//             }

//         }
//     }
//     cout << "\n---Final Report After 10 Transactions---\n"        
//          << "Final Balance: " << userMoney << '\n'
//          << "Property details:\n"
//          << property1.getPropertyInfo() << " |Owned: " << boolalpha << property1.isOwned << " |Original Price: " << property1.originalPrice << " |Current price: " << property1.currentPrice << '\n'
//          << property2.getPropertyInfo() << " |Owned: " << boolalpha << property2.isOwned << " |Original Price: " << property2.originalPrice << " |Current price: " << property2.currentPrice << '\n'
//          << property3.getPropertyInfo() << " |Owned: " << boolalpha << property3.isOwned << " |Original Price: " << property3.originalPrice << " |Current price: " << property3.currentPrice << '\n';
// }
 

    //  #include <iostream>
    //  #include <iomanip>   
    //  #include <string>
    //  using namespace std;
     
    // class Stock{

    //     public:

    //     //Member
    //     string companyName;
    //     string tickerSymbol;
    //     double sharePrice;
    //     bool isOwned;
    //     int numberOfShares;


    //     //Constructor
    //     Stock(string companyName, string tickerSymbol){
    //         this-> companyName = companyName;
    //         this-> tickerSymbol = tickerSymbol;
    //         sharePrice = rand() % 100;
    //         isOwned = false;
    //         numberOfShares = 0;
    //     }

    //     //Method
    //     string getStockInfo(){
    //         return(companyName + ", " + tickerSymbol);
    //     }
        

    //     bool buyStock(double &userMoney, int quantity){
    //         if(!isOwned && userMoney >= (sharePrice * quantity)){
    //             isOwned = true;
    //             userMoney -= (sharePrice * quantity);
    //             numberOfShares += quantity;
    //             return true;
    //         }

    //         else {
    //             return false;
    //         }

    //     }

    //     bool sellStock(double &userMoney, int quantity){
    //         if(isOwned){
    //             isOwned = false;
    //             userMoney += (sharePrice * quantity);
    //             numberOfShares -= quantity;
    //             return true;

    //         }

    //         else{
    //             return false;
    //         }
    //     }


    //     double Information(){
    //         return numberOfShares;
            

    //     }


        

        









    // };



    // int main(){
    //     srand(time(0));
    //     Stock stock1("Apple", "AAP");
    //     Stock stock2("Samsung", "SSG");
    //     Stock stock3("Icelandair" , "Ice");
        
    //     double userMoney = 10000.0;

    //     bool success; 
        
       
        
       
        
        
        
        


    //     for(int i = 0; i <= 10 ; i++){
    //         cout << "______________________________\n";
                 
    //      int buyORsell = rand() % 2;  // 0 to buy , 1 to sell
    //      int randomStock = rand() % 3; 
        
    //     if (buyORsell == 0){
    //         int quantity = rand() % 11;
    //         if(randomStock == 0){
    //             success = stock1.buyStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to purchase " << stock1.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Successful purchase! \n"
    //                      << "Stocks bought: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " <<stock1.Information() << '\n';
    //                     }
    //             else {
    //                 cout << "Trying to purchase " << stock1.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Purchased failed!\n"
    //                      << "You either own the stock or don't have enough money to puchase it\n";
    //                     }
    //                 }
            
    //         else if(randomStock == 1){   
    //             success = stock2.buyStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to purchase " << stock2.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Successful purchase! \n"
    //                      << "Stocks bought: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " <<stock2.Information() << '\n';
    //                     }
    //             else {
    //                 cout << "Trying to purchase " << stock2.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Purchased failed!\n"
    //                      << "You either own the stock or don't have enough money to puchase it\n";
    //                     }
    //                 }

    //          else{
    //             success = stock3.buyStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to purchase " << stock3.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Successful purchase! \n"
    //                      << "Stocks bought: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " <<stock3.Information() << '\n';
    //                     }
    //             else {
    //                 cout << "Trying to purchase " << stock3.getStockInfo()
    //                      << "\n...................\n"
    //                      << "Purchased failed!\n"
    //                      << "You either own the stock or don't have enough money to puchase it\n";
    //                     }
    //                 }
    //          }        
    //     else if(buyORsell == 1){
    //         int quantity = rand() % 11;
    //         if(randomStock == 0){
    //             success = stock1.sellStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to sell " << stock1.getStockInfo()
    //                      << "\n...............\n"
    //                      << "Sale successful!\n"
    //                      << "Stocks sold: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " << stock1.Information() << '\n';
    //                 }
    //             else{
    //                 cout << "Trying to sell " << stock1.getStockInfo()
    //                      << "\n...............\n"
    //                      << "Failed Sale!\n"
    //                      << "You do not own the stock\n";
    //                     }
    //                 }

    //         else if(randomStock == 1){
    //             success = stock2.sellStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to sell " << stock2.getStockInfo()
    //                      << "\n...............\n"
    //                      << "Sale successful!\n"
    //                      << "Stocks sold: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " << stock2.Information() << '\n';
    //                 }
    //             else{
    //                 cout << "Trying to sell " << stock2.getStockInfo()
    //                      << "\n...............\n"
    //                      << "Failed Sale!\n"
    //                      << "You do not own the stock\n";
    //                     }
    //                 }


    //          else{
    //             success = stock3.sellStock(userMoney, quantity);
    //             if(success){
    //                 cout << "Trying to sell " << stock3.getStockInfo()
    //                      << "\n...............\n"
    //                      << "Sale successful!\n"
    //                      << "Stocks sold: " << quantity << '\n'
    //                      << "Balance: " << userMoney << '\n'
    //                      << "Stocks owned: " << stock3.Information() << '\n';
    //              }
    //          else{
    //              cout << "Trying to sell " << stock3.getStockInfo()
    //                   << "\n...............\n"
    //                   << "Failed Sale!\n"
    //                   << "You do not own the stock\n";
    //                  }
    //              } 
    //             }
       
       

    //     }
    //     cout << "\n_____________________\n"
    //     << "Final Balance\n"
    //     << "_____________________\n"
    //     << "| " << stock1.getStockInfo() << "|" << " | Owned: " << boolalpha << stock1.isOwned << "| | Balance: " << userMoney << '\n'
    //     << "| " << stock2.getStockInfo() << "|" << " | Owned: " << boolalpha << stock2.isOwned << "| | Balance: " << userMoney << '\n'
    //     << "| " << stock3.getStockInfo() << "|" << " | Owned: " << boolalpha << stock3.isOwned << "| | Balance: " << userMoney << '\n';
        
    // }
       
    
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
    


double calculateCost (double price, int quantity){
    return price * quantity;
}

double moneyAfterSale(double &money, double price, int quantity){
    price *= quantity;
    money += price;
    return money;
}

double moneyAfterPurchase(double price, int quantity, double &money){
money -= calculateCost(price, quantity);
return money;
}


int getValidChoice(){
    int choice;
    
    cin >> choice;
    if(choice == 1 || choice == 2 || choice == 3){
        return choice;
    }
    else{
        return 0;
    }


}

void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount){
    cout << "Fruit Inventory\n"
         << "_____________________\n"
         << "Balance: " << money << '\n'
         << "_____________________\n"
         << "Apple count: " << appleCount << '\n'
         << "_____________________\n"
         << "Banana count: " << bananaCount << '\n'
         << "_____________________\n"
         << "Blueberry count: " << blueberryCount << '\n'
         << "_____________________\n"
         << "Orange count: " << orangeCount << '\n'
         << "_____________________\n"
         << "Cherry count: " << cherryCount << '\n'
         << "_____________________\n";
}


void locationABuy(double &money, int &appleCount, int &bananaCount , int &blueberryCount, int &orangeCount, int &cherryCount, double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice , int quantity, double price){
    
        string fruitChoice;
       
        cout << "Welcome to Location A!\n"
             << "__________________\n"
             << "Fruit Menu:\n"
             << "__________________\n"
             << "1. Apple - $" << applePrice
             << "\n__________________\n"
             << "2. Banana - $" << bananaPrice
             << "\n__________________\n"
             << "3. Blueberry - $" << blueberryPrice
             << "\n__________________\n"
             << "4. Orange - $" << orangePrice
             << "\n__________________\n"
             << "5. Cherry - $" << cherryPrice 
             << "\n__________________\n"
             << "Enter the name of the fruit you want to buy: ";
         cin >> fruitChoice;
         cout << "How many " << fruitChoice <<" would you like to buy? ";
         cin >> quantity;
         while (quantity > 10){
                cout << "Transaction Failed!\n"
                     << "We only have a maximum of 10 amount per food\n"
                     <<  "How many " << fruitChoice <<" would you like to buy? ";
                cin  >> quantity;


         }    

          if(fruitChoice == "Apple" || fruitChoice == "apple"){
              if (money >= (quantity * applePrice)){
                  price = applePrice;
                  cout << "Transaction Successful!\n"
                       << "You have purchased " << quantity << " " << fruitChoice << '\n'
                       << "Total cost: $" << calculateCost(price, quantity) << '\n'
                       << "__________________\n";
                  appleCount += quantity;
                  cout << "Apple Count: " << appleCount << '\n';
                  cout << "Balance: " << moneyAfterPurchase(price, quantity, money) << '\n';
                    }
               else{
                  cout << "Purchased Failed!\n"
                       << "__________________\n"
                       << "You've run out of money\n"
                       << "__________________\n";
                    }
                }

          else if (fruitChoice == "Banana" || fruitChoice == "banana"){
              if (money >= (quantity * bananaPrice)){
                  price = bananaPrice;
                  cout << "Transaction Successful!\n"
                       << "You have purchased " << quantity << " " << fruitChoice << '\n'
                       << "Total cost: $" << calculateCost(price, quantity) << '\n'
                       << "__________________\n";
                  bananaCount += quantity;
                  cout << "Banana Count: " << bananaCount << '\n';
                  cout << "Balance: " << moneyAfterPurchase(price, quantity, money) << '\n';
                }

               else{
                  cout << "Purchased Failed!\n"
                       << "__________________\n"
                       << "You've run out of money\n"
                       << "__________________\n";
                }
            }


         else if(fruitChoice == "Blueberry" || fruitChoice == "blueberry"){
              if(money >= (quantity * blueberryPrice)){
                 price = blueberryPrice;
                 cout << "Transaction Successful!\n"
                      << "You have purchased " << quantity << " " << fruitChoice << '\n'
                      << "Total cost: $" << calculateCost(price, quantity) << '\n'
                      << "__________________\n";
                 blueberryCount += quantity;
                 cout << "Blueberry Count: " << blueberryCount << '\n';
                 cout << "Balance: " << moneyAfterPurchase(price, quantity, money) << '\n';
                }

               else{
                 cout << "Purchased Failed!\n"
                      << "__________________\n"
                      << "You've run out of money\n"
                      << "__________________\n";
                }
            }



         else if(fruitChoice == "Orange" || fruitChoice == "orange"){
              if(money >= (quantity * orangePrice)){
                price = orangePrice;
                cout << "Transaction Successful!\n"
                     << "You have purchased " << quantity << " " << fruitChoice << '\n'
                     << "Total cost: $" << calculateCost(price, quantity) << '\n'
                     << "__________________\n";
                orangeCount += quantity;
                cout << "Orange Count: " << orangeCount << '\n';
                cout << "Balance: " << moneyAfterPurchase(price, quantity, money) << '\n';
              }

              else{
                cout << "Purchased Failed!\n"
                     << "__________________\n"
                     << "You've run out of money\n"
                     << "__________________\n";
              }
            }
                 


         else if(fruitChoice == "Cherry" || fruitChoice == "cherry"){
              if(money >= (quantity * cherryPrice)){
                 price = cherryPrice;
                 cout << "Transaction Successful!\n"
                      << "You have purchased " << quantity << " " << fruitChoice << '\n'
                      << "Total cost: $" << calculateCost(price, quantity) << '\n'
                      << "__________________\n";
                 cherryCount += quantity;
                 cout << "Cherry Count: " << orangeCount << '\n';
                 cout << "Balance: " << moneyAfterPurchase(price, quantity, money) << '\n';
            }

               else{
                 cout << "Purchased Failed!\n"
                      << "__________________\n"
                      << "You've run out of money\n"
                      << "__________________\n";
            }
        }
        

         else{
                cout << "Unfortunately we are out of " << fruitChoice << " today.\n";
            }
        }
    

        void locationBSell (double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount, double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice, int quantity, double price){
        
            string fruitChoice;
           
            cout << "Welcome to Location B!\n"
                 << "__________________\n"
                 << "Fruit Menu:\n"
                 << "__________________\n"
                 << "1. Apple - $" << applePrice
                 << "\n__________________\n"
                 << "2. Banana - $" << bananaPrice
                 << "\n__________________\n"
                 << "3. Blueberry - $" << blueberryPrice
                 << "\n__________________\n"
                 << "4. Orange - $" << orangePrice
                 << "\n__________________\n"
                 << "5. Cherry - $" << cherryPrice 
                 << "\n__________________\n"
                 << "Enter the name of the fruit you want to sell: ";
             cin >> fruitChoice;
             cout << "How many " << fruitChoice <<" would you like to sell? ";
             cin >> quantity;
             while (quantity > 10){
                    cout << "Transaction Failed!\n"
                         << "You can only sell a maximum of 10 per sale\n"
                         <<  "How many " << fruitChoice <<" would you like to sell? ";
                    cin  >> quantity;
             }

             if(fruitChoice == "Apple" || fruitChoice == "apple"){
                if (appleCount > quantity){
                    price = applePrice;
                    cout << "Transaction Successful!\n"
                         << "You have sold " << quantity << " " << fruitChoice << '\n'
                         << "Total Sales: $" <<  moneyAfterSale(money, price, quantity) << '\n'
                         << "__________________\n";
                    appleCount -= quantity;
                    cout << "Apple Count: " << appleCount << '\n';
                    cout << "Balance: " << money << '\n';
                      }
                 else{
                    cout << "Purchased Failed!\n"
                         << "__________________\n"
                         << "You're trying to sell more than you own\n"
                         << "__________________\n";
                      }
                  }


             if(fruitChoice == "Banana" || fruitChoice == "banana"){
                if (bananaCount > quantity){
                    price = bananaPrice;
                    cout << "Transaction Successful!\n"
                         << "You have sold " << quantity << " " << fruitChoice << '\n'
                         << "Total Sales: $" <<  moneyAfterSale(money, price, quantity) << '\n'
                         << "__________________\n";
                    bananaCount -= quantity;
                    cout << "Banana Count: " << bananaCount << '\n';
                    cout << "Balance: " << money << '\n';
                      }
                 else{
                    cout << "Purchased Failed!\n"
                         << "__________________\n"
                         << "You're trying to sell more than you own\n"
                         << "__________________\n";
                      }
                  }

             if(fruitChoice == "Blueberry" || fruitChoice == "blueberry"){
                if (appleCount > quantity){
                    price = applePrice;
                    cout << "Transaction Successful!\n"
                         << "You have sold " << quantity << " " << fruitChoice << '\n'
                         << "Total Sales: $" <<  moneyAfterSale(money, price, quantity) << '\n'
                         << "__________________\n";
                    appleCount -= quantity;
                    cout << "Apple Count: " << appleCount << '\n';
                    cout << "Balance: " << money << '\n';
                          }
                 else{
                    cout << "Purchased Failed!\n"
                         << "__________________\n"
                         << "You're trying to sell more than you own\n"
                         << "__________________\n";
                      }
                  } 
    
    
             }    
             
             
             
int main(){
    double money = 500.0;
    double applePrice = 50.0;
    double bananaPrice = 30.0;
    double blueberryPrice = 40.0;
    double orangePrice = 20.0;
    double cherryPrice = 60.0;
    double price;

    

    int appleCount = 0;
    int bananaCount = 0;
    int blueberryCount = 0;
    int orangeCount = 0;
    int cherryCount = 0;
    int quantity;
    int validChoice;
    bool gameOver = false;
   
    
    


//     displayStatus(money, appleCount, bananaCount, blueberryCount, orangeCount, cherryCount);
//     locationABuy(money, appleCount, bananaCount , blueberryCount, orangeCount,  cherryCount,  applePrice,  bananaPrice,  blueberryPrice,  orangePrice,  cherryPrice ,  quantity, price);


while(!gameOver || validChoice != 3){ 
     cout << "Choose your location:\n"
          << "1. Location A (Buy Fruit)\n"
          << "2. Location B (Sell Fruit)\n"
          << "3. Exit Game\n"
          << "Enter choice: ";
      validChoice = getValidChoice();

    while (validChoice == 1){

        locationABuy(money, appleCount, bananaCount , blueberryCount, orangeCount,  cherryCount,  applePrice,  bananaPrice,  blueberryPrice,  orangePrice,  cherryPrice ,  quantity, price);
            cout << "Choose your location:\n"
                 << "1. Location A (Buy Fruit)\n"
                 << "2. Location B (Sell Fruit)\n"
                 << "3. Exit Game\n"
                 << "Enter choice: ";
            validChoice = getValidChoice();
}

    while (validChoice == 2){
     
       locationBSell(money,  appleCount,  bananaCount,  blueberryCount, orangeCount, cherryCount,  applePrice,  bananaPrice,  blueberryPrice,  orangePrice,  cherryPrice,  quantity,  price);
            cout << "Choose your location:\n"
                 << "1. Location A (Buy Fruit)\n"
                 << "2. Location B (Sell Fruit)\n"
                 << "3. Exit Game\n"
                 << "Enter choice: ";
            validChoice = getValidChoice();
}
}







}
