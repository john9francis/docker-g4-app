#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4ios.hh"

namespace docker_g4
{

class PrimaryGenAction : public G4VUserPrimaryGeneratorAction {
public:
  PrimaryGenAction();
  void GeneratePrimaries(G4Event* anEvent) override;

private:
  G4ParticleGun* fParticleGun;
};
  
} // namespace docker_g4