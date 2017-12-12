#include "query_result.h"

#include <vector>
#include <string>

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
void QueryResult::addLine(const string& line, const int cnt) {
    this->count += cnt;
    this->lines.push_back(line);
}
