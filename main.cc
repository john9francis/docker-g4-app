// Entrypoint for docker-g4-app

#include "G4ios.hh"
#include "G4RunManagerFactory.hh"
#include "QGSP_BERT.hh"

#include "ActionInit.hh"
#include "DetConstruction.hh"

using namespace docker_g4;

int main(){

  // run manager
  auto runManager = G4RunManagerFactory::CreateRunManager();

  G4cout << "Hello from the Geant4 world!" << G4endl;

  // physics list
  runManager->SetUserInitialization(new QGSP_BERT());

  // detector construction
  runManager->SetUserInitialization(new DetConstruction());

  // action initialization w/ primary gen action
  runManager->SetUserInitialization(new ActionInit());


  // stepping action

  return 0;
}