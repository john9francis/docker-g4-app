#include "PrimaryGenAction.hh"

namespace docker_g4 {

PrimaryGenAction::PrimaryGenAction(){
  fParticleGun = new G4ParticleGun();
}

void PrimaryGenAction::GeneratePrimaries(G4Event* anEvent){
  G4cout << "Pew Pew!" << G4endl;
}

} // docker_g4 namespace