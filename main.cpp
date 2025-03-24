#include <iostream>
using namespace std;

int main(int argc, char* argv[]){

    if(argc < 3 ||string(argv[2])=="hash" && argc != 4){
            cerr << "Usage: "<<argv[0] << " <filename> <avl|hash> [hash_size]"<<endl;
            return 1;
        }

        
    string inputFile = argv[1];
    string algorithm = argv[2];



    return 0;
}