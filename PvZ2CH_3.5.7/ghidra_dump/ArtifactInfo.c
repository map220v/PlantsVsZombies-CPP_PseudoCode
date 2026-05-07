// Class: ArtifactInfo


/* ArtifactInfo::ArtifactInfo() */

void __thiscall ArtifactInfo::ArtifactInfo(ArtifactInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* ArtifactInfo::~ArtifactInfo() */

void __thiscall ArtifactInfo::~ArtifactInfo(ArtifactInfo *this)

{
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10));
  return;
}


void __thiscall ArtifactInfo::~ArtifactInfo(ArtifactInfo *this)

{
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10));
  return;
}


void __thiscall ArtifactInfo::~ArtifactInfo(ArtifactInfo *this)

{
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10));
  return;
}


void __thiscall ArtifactInfo::~ArtifactInfo(ArtifactInfo *this)

{
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10));
  return;
}


/* ArtifactInfo::ArtifactInfo(ArtifactInfo const&) */

void __thiscall ArtifactInfo::ArtifactInfo(ArtifactInfo *this,ArtifactInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return;
}


/* ArtifactInfo::TEMPNAMEPLACEHOLDERVALUE(ArtifactInfo&&) */

ArtifactInfo * __thiscall ArtifactInfo::operator=(ArtifactInfo *this,ArtifactInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::operator=
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::operator=
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}


/* ArtifactInfo::TEMPNAMEPLACEHOLDERVALUE(ArtifactInfo const&) */

ArtifactInfo * __thiscall ArtifactInfo::operator=(ArtifactInfo *this,ArtifactInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::operator=
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::operator=
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}

