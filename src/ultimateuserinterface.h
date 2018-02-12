#ifndef ULTIMATEUSERINTERFACE_H
#define ULTIMATEUSERINTERFACE_H

#include "src_global.h"
#include "abstractultimateuserinterface.h"
#include <QObject>

namespace UltimateUserInterface {
    class SRCSHARED_EXPORT UltimateUserInterface : public QObject, public AbstractUltimateUserInterface
    {
    public:
        UltimateUserInterface();
        DispositionState getCurrentDispositionState() const override;
        void setCurrentDispositionState( const DispositionState& ) override;
    protected:

    };
}

#endif // ULTIMATEUSERINTERFACE_H
