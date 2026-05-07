// Class: ArtifactPresentDetail


/* ArtifactPresentDetail::ArtifactPresentDetail() */

void __thiscall ArtifactPresentDetail::ArtifactPresentDetail(ArtifactPresentDetail *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


/* ArtifactPresentDetail::~ArtifactPresentDetail() */

void __thiscall ArtifactPresentDetail::~ArtifactPresentDetail(ArtifactPresentDetail *this)

{
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::~vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             (this + 8));
  std::string::~string((string *)this);
  return;
}


/* ArtifactPresentDetail::ArtifactPresentDetail(ArtifactPresentDetail&&) */

void __thiscall
ArtifactPresentDetail::ArtifactPresentDetail
          (ArtifactPresentDetail *this,ArtifactPresentDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  return;
}


/* ArtifactPresentDetail::ArtifactPresentDetail(ArtifactPresentDetail const&) */

void __thiscall
ArtifactPresentDetail::ArtifactPresentDetail
          (ArtifactPresentDetail *this,ArtifactPresentDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  return;
}


/* ArtifactPresentDetail::TEMPNAMEPLACEHOLDERVALUE(ArtifactPresentDetail const&) */

ArtifactPresentDetail * __thiscall
ArtifactPresentDetail::operator=(ArtifactPresentDetail *this,ArtifactPresentDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  operator=((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  return this;
}

