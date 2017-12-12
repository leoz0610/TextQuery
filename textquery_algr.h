#ifndef TEXTQUERYALGR
#define TEXTQUERYALGR


#include <string>
#include <fstream>
#include <memory>


using namespace std;

class TextQueryAlgr {
private:
    const string fileName;
    const unique_ptr<ifstream> fPtr;

public:
    TextQueryAlgr() = default;

    TextQueryAlgr(const string &fileName)
    : fileName(fileName)
    , fPtr(new ifstream(fileName))
    { }
};


#endif //TEXTQUERYALGR
