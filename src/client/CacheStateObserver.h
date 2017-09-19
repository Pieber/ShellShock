// Generated by dia2code
#ifndef CLIENT__CACHESTATEOBSERVER__H
#define CLIENT__CACHESTATEOBSERVER__H

#include <vector>
#include "state/State.h"
#include "state/StateEvent.h"

namespace state {
  class StateObserver;
}

#include "state/StateObserver.h"

namespace client {

  /// class CacheStateObserver - Save the StateEvent that the Pilote will update after
  class CacheStateObserver : public state::StateObserver {
    // Attributes
  protected:
    std::vector<state::StateEvent*> stateEvent;
    // Operations
  public:
    void stateChanged (const state::StateEvent& e);
    virtual void applyStateChanged () = 0;
  protected:
    void clear ();
  };

};

#endif
