#ifndef QUERYRESULT_H
#define QUERYRESULT_H


#include <vector>
#include <string>
#include <sstream>

using namespace std;

class QueryResult {
private:
    int count;
    string text;
    vector<string> lines;

public:
    QueryResult();

    QueryResult(const QueryResult &result);

    const int getCount() const;

    const string getText() const;

    const string str() const;

    void addLine(const string& line, const int cnt);
};

// inline member functions

inline const int QueryResult::getCount() const {
    return this->count;
}

inline const string QueryResult::getText() const {
    return this->text;
}

inline const string QueryResult::str() const {
    stringstream ss;
    ss << this->text << " " << this->count;
    return ss.str();
}


#endif //QUERYRESULT_H
