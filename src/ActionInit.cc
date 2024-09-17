#include "ActionInit.hh"
#include "PrimaryGenAction.hh"

namespace docker_g4 {
void ActionInit::Build() const {
  // build user actions
  SetUserAction(new PrimaryGenAction());
}

}