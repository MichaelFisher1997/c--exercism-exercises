with import <nixpkgs> {};

mkShell {
  buildInputs = [
    gcc
    glew
    glfw
    libGL
    pkg-config
    cmake
    fish
  ];
}