#ifndef BRAIN_H
#define BRAIN_H

#include <QVector>
#include <QDateTime>

#include "data/datafeed.h"
#include "algo/algorithm.h"

class Brain
{
public:
    Brain();

    void update();

    DataFeed* datafeed;

private:

    struct Algo {
        QDateTime lastUpdate;
        Algorithm* algo;
        int state;
    };

    QVector<Algo*> Algos;

};

#endif // BRAIN_H
