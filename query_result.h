#ifndef QUERYRESULT_H
#define QUERYRESULT_H


#include <vector>
#include <string>

using namespace std;

class QueryResult {
private:
    int count;
    string text;
    const vector<string> lines;

public:
    QueryResult();

    QueryResult(const QueryResult &result);

    const int getCount() const;

    const string getText() const;

    const string str() const;
};

#endif //QUERYRESULT_H
