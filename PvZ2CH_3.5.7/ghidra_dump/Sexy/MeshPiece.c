// Class: Sexy::MeshPiece


/* Sexy::MeshPiece::MeshPiece() */

void __thiscall Sexy::MeshPiece::MeshPiece(MeshPiece *this)

{
  *(undefined ***)this = &PTR__MeshPiece_06a37020;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  return;
}


/* Sexy::MeshPiece::~MeshPiece() */

void __thiscall Sexy::MeshPiece::~MeshPiece(MeshPiece *this)

{
  *(undefined ***)this = &PTR__MeshPiece_06a37020;
  RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)(this + 0x28));
  RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* Sexy::MeshPiece::~MeshPiece() */

void __thiscall Sexy::MeshPiece::~MeshPiece(MeshPiece *this)

{
  ~MeshPiece(this);
  AK::FreeHook(this);
  return;
}

