#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s1 = "There once was a person named ",
           s2 = " who lived in ",
           s3 = "\nand who loved ",
           s4 = ". At the age of ",
           s5 = ",",
           s6 = " graduated \nfrom high school and went to work in a  ",
           s7 = " factory. \n",
           s8 = "got married and had ",
           s9 = " children and a pet ",
           s10 = " named ",
           s11 = ".\nEvery weekend the family and ",
           s12 = " had fun ",
           s13 = " together.";
     
    string name, city, activity, animal, product, petName;
    int age, kids;
    
    cout << "Enter the following information and I\'ll "
         << "tell you a story.\n" << endl;
    cout << "Your name: " << endl;
    getline(cin, name);
    
    cout << "The name of a city: ";
    getline(cin, name);
    
    cout << "A physical activity (e.g. running, playing basketball): ";
    getline(cin, activity);
    
    cout << "An animal: ";
    getline(cin, animal);
    
    cout << "A food or product you can buy: ";
    getline(cin, product);
    
    cout << "An adjective and noun (e.g. blue car): ";
    getline(cin, petName);
    
    cout << "A number between 1 and 50: ";
    getline(cin, age);
    
    cout << "A number between 1 and 15: ";
    getline(cin, kids);
    
    cout << endl << s1 << name << s2 << city << s3 << activity;
    cout << s4 << animal << s5 << name << s6 << product << s7;
    cout << name << s8 << kids << s9 << animal << s10 << petName;
    cout << s11 << petName << s12 << activity << s13 << endl;
    
	return 0;
}