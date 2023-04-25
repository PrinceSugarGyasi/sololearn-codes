#include <iostream>
using namespace std;

int main (){
    int n;
    char name [20];      //initializes array of 21 cells
    cout << "Welcome to the Name Magic Machine" << endl;
    cout << "Enter only one name: \n";
    cin >> name;         //takes input
    int size, p;

    //Calculates the length of the inputted text
    for (p = 0;p<=20; p++){                 
        if (name[size] != '\0'){
            size++;
        }
    }

    //Translates inputted text as designed text
    for (;n<=size; n++){
        if (name[n] == 'a'){
            cout << "    ##    \n" << "   #  #   \n" << "  ######  \n" << " #      # \n" << "#        #\n\n";
        }else if (name[n] == 'b'){
            cout << "#######   \n" << "#      #  \n" << "#######   \n" << "#      #  \n" << "#######   \n\n";
        }else if (name[n] == 'c'){
            cout << " #######   \n" << "#          \n" << "#          \n" << "#          \n" << " #######   \n\n";
        }else if (name[n] == 'd'){
            cout << "#######     \n" << "#      #    \n" << "#      #    \n" << "#      #    \n" << "#######     \n\n";
        }else if (name[n] == 'e'){
            cout << "########    \n" << "#           \n" << "########    \n" << "#           \n" << "########    \n\n";
        }else if (name[n] == 'f'){
            cout << "########    \n" << "#           \n" << "########    \n" << "#           \n" << "#           \n\n";
        }else if (name[n] == 'g'){
            cout << "########    \n" << "#           \n" << "#   ####    \n" << "#      #    \n" << "########    \n\n";
        }else if (name[n] == 'h'){
            cout << "#      #    \n" << "#      #    \n" << "########    \n" << "#      #    \n" << "#      #    \n\n";
        }else if (name[n] == 'i'){
            cout << "########    \n" << "   ##       \n" << "   ##       \n" << "   ##       \n" << "########    \n\n";
        }else if (name[n] == 'j'){
            cout << "########    \n" << "     #      \n" << "     #      \n" << "#    #      \n" << " ####       \n\n";
        }else if (name[n] == 'k'){
            cout << "#      #    \n" << "#    #      \n" << "#####       \n" << "#     #     \n" << "#      #    \n\n";
        }else if (name[n] == 'l'){
            cout << "#           \n" << "#           \n" << "#           \n" << "#           \n" << "########    \n\n";
        }else if (name[n] == 'm'){
            cout << "#      #    \n" << "# #  # #    \n" << "#  ##  #    \n" << "#      #    \n" << "#      #    \n\n";
        }else if (name[n] == 'n'){
            cout << "#      #    \n" << "# #    #    \n" << "#  # # #    \n" << "#     ##    \n" << "#      #    \n\n";
        }else if (name[n] == 'o'){
            cout << " ######     \n" << "#      #    \n" << "#      #    \n" << "#      #    \n" << " ######     \n\n";
        }else if (name[n] == 'p'){
            cout << "#######     \n" << "#      #    \n" << "#######     \n" << "#           \n" << "#           \n\n";
        }else if (name[n] == 'q'){
            cout << " ######     \n" << "#      #    \n" << "#      #    \n" << "#    # #    \n" << " ##### ###  \n\n";
        }else if (name[n] == 'r'){
            cout << "#######     \n" << "#      #    \n" << "######      \n" << "#     #     \n" << "#      #    \n\n";
        }else if (name[n] == 's'){
            cout << " #######    \n" << "#           \n" << " ######     \n" << "       #    \n" << "#######     \n\n";
        }else if (name[n] == 't'){
            cout << "########### \n" << "    ##      \n" << "    ##      \n" << "    ##      \n" << "    ##      \n\n";
        }else if (name[n] == 'u'){
            cout << "#        #  \n" << "#        #  \n" << "#        #  \n" << "#        #  \n" << " ########   \n\n";
        }else if (name[n] == 'v'){
            cout << "#         #  \n" << " #       #   \n" << "  #     #    \n" << "   #   #     \n" << "    ###      \n\n";
        }else if (name[n] == 'w'){
            cout << "#    ##    # \n" << "#   #  #   # \n" << "#  #    #  # \n" << "# #      # # \n" << "##        ## \n\n";
        }else if (name[n] == 'x'){
            cout << "#        # \n" << " #      #  \n" << "   ####    \n" << "  #    #   \n" << "#        # \n\n";
        }else if (name[n] == 'y'){
            cout << "#        # \n" << " #      #  \n" << "   ####    \n" << "    ##     \n" << "    ##     \n\n";
        }else if (name[n] == 'z'){
            cout << "########## \n" << "      ##   \n" << "    ##     \n" << "  ##       \n" << "########## \n\n";
        }else if (name[n] == ' '){
            cout << "\n\n\n\n\n\n";
        }
    }
    


    return 0;

/*
Found a similar project online by Aleksandar Stevanovic in python
So I tried to recreate it in C++
Unfortunately I couldn't come up with a way to include spaces between names 
So it's limited to single words
*/
}