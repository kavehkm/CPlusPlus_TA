#include "name.h"


Name :: Name (string f, string i, string l):
first(f), init(i), last(l) {
    assert(init.size() == 1);
}

Name :: ~Name ()
{
}

void Name :: print () const {
    cout << "Employee name: " << first << " " << init << "." << last << endl;
}