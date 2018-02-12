#ifndef ABSTRACTULTIMATEUSERINTERFACE_H
#define ABSTRACTULTIMATEUSERINTERFACE_H

#include "disposition-state/dispositionstate.h"

namespace UltimateUserInterface {
    class AbstractUltimateUserInterface {
    public:
        virtual DispositionState getCurrentDispositionState() const = 0;
        virtual void setCurrentDispositionState( const DispositionState& ) = 0;
    };
}

#endif // ABSTRACTULTIMATEUSERINTERFACE_H
