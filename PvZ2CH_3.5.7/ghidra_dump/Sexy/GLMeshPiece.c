// Class: Sexy::GLMeshPiece


/* Sexy::GLMeshPiece::~GLMeshPiece() */

void __thiscall Sexy::GLMeshPiece::~GLMeshPiece(GLMeshPiece *this)

{
  *(undefined ***)this = &PTR__GLMeshPiece_06a335a0;
  if (*(ColourFit **)(this + 0x48) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x48));
  }
  if (*(ColourFit **)(this + 0x50) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  MeshPiece::~MeshPiece((MeshPiece *)this);
  return;
}


/* Sexy::GLMeshPiece::~GLMeshPiece() */

void __thiscall Sexy::GLMeshPiece::~GLMeshPiece(GLMeshPiece *this)

{
  ~GLMeshPiece(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::GLMeshPiece::GLMeshPiece() */

void __thiscall Sexy::GLMeshPiece::GLMeshPiece(GLMeshPiece *this)

{
  MeshPiece::MeshPiece((MeshPiece *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__GLMeshPiece_06a335a0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

