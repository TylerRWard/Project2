#include <iostream>
using namespace std;

int main(int argc, char* argv[]){

    if(argc != 3 && argc != 4){
            cerr << "Usage: "<<argv[0] << " <input_file> <algorithm> [-print]"<<endl;
            return 1;
        }
    string inputFile = argv[1];
    string algorithm = argv[2];



    return 0;
}