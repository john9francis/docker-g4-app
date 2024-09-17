// Entrypoint for docker-g4-app

#include <iostream>
#include "G4RunManagerFactory.hh"

int main(){

  // Todo:

  // Get the g4 app compiling in the first place...

  // run manager
  auto runManager = G4RunManagerFactory::CreateRunManager();

  std::cout << "Hello from the Geant4 world!" << std::endl;
  
  // action initialization
  // physics list
  // primary generator action
  // detector construction

  // stepping action

  return 0;
}