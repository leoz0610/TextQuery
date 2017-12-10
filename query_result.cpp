#include "query_result.h"

#include <vector>
#include <string>
#include <sstream>

using namespace std;


namespace
{
namespace queryresult
{
    // namespace definition
} // queryresult
} // internal


// CREATOR
QueryResult::QueryResult()
: count(0)
, text("test")
, lines()
{
}

QueryResult::QueryResult(const QueryResult &result)
: count(result.count)
, text(result.text)
, lines(result.lines)
{
}


// MEMBER FUNCTIONS
const int QueryResult::getCount() const {
    return this->count;
}

const string QueryResult::getText() const {
    return this->text;
}

const string QueryResult::str() const {
    stringstream ss;
    ss << this->text << " " << this->count;
    return ss.str();
}
