// Entrypoint for docker-g4-app

#include "G4ios.hh"
#include "G4RunManagerFactory.hh"
#include "QGSP_BERT.hh"

#include "ActionInit.hh"

using namespace docker_g4;

int main(){

  // run manager
  auto runManager = G4RunManagerFactory::CreateRunManager();

  G4cout << "Hello from the Geant4 world!" << G4endl;
  
  // action initialization
  runManager->SetUserInitialization(new ActionInit());

  // physics list
  runManager->SetUserInitialization(new QGSP_BERT());


  // primary generator action
  // detector construction

  // stepping action

  return 0;
}