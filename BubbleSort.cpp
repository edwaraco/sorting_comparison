#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

class Bubble: public Sorting {
public:
  Bubble() {
    className = const_cast<char*>(string("Bubble").c_str());
  }
  vector<string> sort(vector<string> arrayString) const {
    vector<string> newArray = arrayString;
    int sizeArray = newArray.size();
    string swap;
    for(int i=0; i < sizeArray - 1; i++) {
      for(int j=0; j < sizeArray -  (i + 1); j++) {
	if(newArray[j].compare(newArray[j+1]) > 0) {
	  swap = newArray[j];
	  newArray[j] = newArray[j+1];
	  newArray[j+1] = swap;
	}
      }
    }
    return newArray;
  }
};