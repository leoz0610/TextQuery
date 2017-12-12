#ifndef TEXTQUERYALGR
#define TEXTQUERYALGR


#include <string>
#include <fstream>
#include <memory>
#include "query_result.h"


using namespace std;

class TextQueryAlgr {
private:
    const string fileName;
    const unique_ptr<ifstream> fPtr;
    shared_ptr<QueryResult> result;

public:
    TextQueryAlgr() = default;

    TextQueryAlgr(const string &fileName)
    : fileName(fileName)
    , fPtr(new ifstream(fileName))
    , result(nullptr)
    { }

    shared_ptr<QueryResult> search(const string &exp);
};


#endif //TEXTQUERYALGR
