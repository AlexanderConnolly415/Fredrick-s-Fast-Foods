//Put your C++ code here
//Name: Alexander Connolly
//Date: 6/16/2020
//Description: Fredrick's Fast Foods
//Source: http://www.cplusplus.com/reference/ios/right/ - used this to right align the results of my function
//Source: on the receipt portion of the application
//Source: Slides from class - I used the slides on setprecision to make sure that my program returned correct change
//Challenging Part: Getting the line to zero out when a customer wanted 0 of that item,
//rather than to show 0 * the value of the item = 0

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    //welcome to the app
    cout << "WELCOME TO FREDRICK'S FAST FOODS!" << endl;
    cout << "Please enter your order..." << endl;
    
    // define variable amount of food items
    
    int numFajitas, numTunas, numChimis, numNachos, numCokes, numCheesecakes;
    
    //define menu item prices as constants
    
    const float FANCY_FAJITA_PRICE = 7.99;
    const float TEXAS_TUNA_PRICE = 9.19;
    const float CHICKEN_CHIMI_PRICE = 8.50;
    const float NIFTY_NACHOS_PRICE = 4.15;
    const float CANNED_COKE_PRICE = 2.10;
    const float CHOCO_CHEESECAKE_PRICE = 5.50;
    
//prompt user for menu choices
    
    cout << "How many Fancy Fajita ($7.99) do you want? ";
    cin >> numFajitas;

    cout << "How many Texas Tuna ($9.19) do you want? ";
    cin >> numTunas;
    
    cout << "How many Chicken Chimichangas ($8.50) do you want? ";
    cin >> numChimis;

    cout << "How many Nifty Nachos ($4.15) do you want? ";
    cin >> numNachos;

    cout << "How many Canned Coke ($2.10) do you want? ";
    cin >> numCokes;

    cout << "How many Chocolate Cheesecake ($5.50) do you want? ";
    cin >> numCheesecakes;
    
    cout << endl;
    
    cout << setw(8) << "-------------------RECEIPT-------------------" << endl;
    
    cout << setw(24) << "Fancy Fajita:   " << numFajitas;

    //functions

    if (numFajitas > 0)
    {
        cout << " at $ 7.99 = $ " << fixed << setprecision(2) << setw(5) << numFajitas*FANCY_FAJITA_PRICE << endl;
    }
    
    else {
        cout << endl;
    }
    
    cout << setw(24) << "Texas Tuna:   " << numTunas;
    
    if (numTunas > 0)
    {
        cout << " at $ 9.19 = $ " << fixed << setprecision(2) << setw(5) << numTunas*TEXAS_TUNA_PRICE << endl;
    }
    
    else {
        cout << endl;
    }
    
    cout << setw(24) << "Chicken Chimichangas:   " << numChimis;
    
    if (numChimis > 0)
    {
        cout << " at $ 8.50 = $ " << fixed << setprecision(2) << setw(5) << numChimis*CHICKEN_CHIMI_PRICE << endl; 
    }
    else {
        cout << endl;
    }
    
    cout << setw(24) << "Nifty Nachos:   " << numNachos;
    
    if (numNachos > 0)
    {
        cout << " at $ 4.15 = $ "  << fixed << setprecision(2) << setw(5) << numNachos*NIFTY_NACHOS_PRICE << endl;;
    }
    else {
        cout << endl;
    }
    
    cout << setw(24) << "Canned Coke:   " << numCokes;
    
    if (numCokes > 0)
    {
    cout << " at $ 2.10 = $ " << fixed << setprecision(2) << setw(5) << numCokes*CANNED_COKE_PRICE << endl;
    }
    else {
        cout << endl;
    }
    
    cout << setw(24) << "Chocolate Cheesecake:   " << numCheesecakes;
    
    if (numCheesecakes > 0)
    {
        cout << " at $ 5.50 = $ " << fixed << setprecision(2) << setw(5) << numCheesecakes*CHOCO_CHEESECAKE_PRICE << endl;
    }
    else {
        cout << endl;
    }
    
    float totalBill = (numFajitas*FANCY_FAJITA_PRICE) + (numTunas*TEXAS_TUNA_PRICE) + (numChimis*CHICKEN_CHIMI_PRICE) + (numNachos*NIFTY_NACHOS_PRICE) + (numCokes*CANNED_COKE_PRICE) + (numCheesecakes*CHOCO_CHEESECAKE_PRICE);
    
    cout << left << setw(24) << "TOTAL   " << setw(16) << right << "$ " << totalBill << endl;
    
    float totalTax = totalBill*.09;
    
    cout << left << setw(24) << "Tax (9.0 Percent)  " << setw(16) << right << "$ " << fixed << setprecision(2) << setw(5) << totalTax << endl;
    
    cout << setw(22) << "=============================================" << endl;
    
    totalBill = totalBill + totalTax;
    
    cout  << fixed << setprecision(5) << "GRAND TOTAL " << setw(14) << right << numFajitas + numTunas + numChimis + numNachos + numCokes + numCheesecakes << " items " << setw(7) << right << " $ " << fixed << setprecision(2) << totalBill << endl;
    
    cout << endl;
    //Calculate change
    
    int moneyReceived;
    
    cout << "How much money did you receive? ";
    cin >> moneyReceived;
    
    float change = moneyReceived - totalBill;
    cout << "The amount of change due is: " << change << endl;
    
    int changeDue = change*100;
    
    cout << " That is " << changeDue << " cents." << endl;
    
    cout << endl;
    
    //calculate changeDue
    
    int nTwenty = changeDue / 2000;
    changeDue = changeDue % 2000;
    
    int nTen = changeDue / 1000;
    changeDue = changeDue % 1000;
    
    int nFive = changeDue / 500;
    changeDue = changeDue % 500;
    
    int nOne = changeDue / 100;
    changeDue = changeDue % 100;
    
    int nQ = changeDue / 25;
    changeDue = changeDue % 25;
    
    int nD = changeDue / 10;
    changeDue = changeDue % 10;
    
    int nN = changeDue / 5;
    changeDue = changeDue % 5;
    
    int nP = changeDue;
    
    //output change
    
    cout << "Please give the customer the following:" << endl;
    
    //bills
    
    
    if (nTwenty > 0){
    cout << nTwenty << " $20s "<< endl;
    }
    
    if (nTen > 0){
    cout << nTen << " $10s " << endl;
    }
    
    if (nFive > 0){
    cout << nFive << " $5s " << endl;
    }
    if (nOne > 0){
    cout << nOne << " $1s " << endl;
    }
    
    //coins
    if (nQ > 0){
    cout << nQ << " quarters "<< endl;
    }
    
    if (nD > 0){
    cout << nD << " dimes " << endl;
    }
    
    if (nN > 0){
    cout << nN << " nickels " << endl;
    }
    
    if (nP > 0){
    cout << nP << " pennies " << endl;
    }
    return 0;
}