#include "DetConstruction.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"
#include "G4NistManager.hh"

namespace docker_g4 {

G4VPhysicalVolume* DetConstruction::Construct(){
  // solid, then logic, then phys
  G4Box *solidWorld = new G4Box("solidWorld", 1 * m, 1 * m, 1 * m);

  G4Material *vacuum = G4NistManager::Instance()->FindOrBuildMaterial("G4_Galactic");

  G4LogicalVolume *logicWorld = new G4LogicalVolume(
    solidWorld,
    vacuum,
    "logicWorld");

  G4VPhysicalVolume *physWorld = new G4PVPlacement(
    nullptr,              // rotation
    G4ThreeVector(),      // position
    logicWorld,           // logical volume
    "physWorld",          // name
    nullptr,              // mother
    false,                // many?
    0                     // copy number
  );

  return physWorld;
}

} // ! namespace docker_g4