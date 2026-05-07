// Class: WorldResourceLoadState


/* WorldResourceLoadState::~WorldResourceLoadState() */

void __thiscall WorldResourceLoadState::~WorldResourceLoadState(WorldResourceLoadState *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  return;
}


void __thiscall WorldResourceLoadState::~WorldResourceLoadState(WorldResourceLoadState *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  return;
}


void __thiscall WorldResourceLoadState::~WorldResourceLoadState(WorldResourceLoadState *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  return;
}


void __thiscall WorldResourceLoadState::~WorldResourceLoadState(WorldResourceLoadState *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  return;
}


/* WorldResourceLoadState::WorldResourceLoadState(WorldResourceLoadState const&) */

void __thiscall
WorldResourceLoadState::WorldResourceLoadState
          (WorldResourceLoadState *this,WorldResourceLoadState *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  return;
}


/* WorldResourceLoadState::TEMPNAMEPLACEHOLDERVALUE(WorldResourceLoadState&&) */

WorldResourceLoadState * __thiscall
WorldResourceLoadState::operator=(WorldResourceLoadState *this,WorldResourceLoadState *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}

