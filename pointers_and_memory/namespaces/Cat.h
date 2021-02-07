
#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;
/* The location doesn't matter for these because its going to be 
added to Cat.cpp when complied */

namespace cats {

const string CATNAME = "Freddy";

class Cat {
public:
    Cat();
    virtual ~Cat();
    void speak();
};

} /* namespace cats */

#endif /* CAT_H_ */
