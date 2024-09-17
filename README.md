# Docker G4 App

# Development environment
Windows 11 with vscode

# Dependencies
- Docker
- VSCode devcontainers extension

# How to build the geant4 app
Make a build directory if one doesn't exist by running `mkdir build`

Then run the following
```sh
cd build
cmake ..
make # or even better, make -j10
./docker_g4
```

Enjoy seeing your Geant4 app run!