//
// Created by Olcay Taner YILDIZ on 2019-08-25.
//

#ifndef SENTINET_SENTINET_H
#define SENTINET_SENTINET_H

#include <map>
#include "SentiSynSet.h"

using namespace std;

class SentiNet {
private:
    map<string, SentiSynSet> sentiSynSetList;
public:
    SentiNet();
    SentiSynSet getSentiSynSet(string id);
    vector<string> getPolarity(PolarityType polarityType);
    vector<string> getPositives();
    vector<string> getNegatives();
    vector<string> getNeutrals();
};


#endif //SENTINET_SENTINET_H