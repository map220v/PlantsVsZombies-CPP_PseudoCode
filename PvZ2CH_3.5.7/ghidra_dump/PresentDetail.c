// Class: PresentDetail


/* PresentDetail::PresentDetail() */

void __thiscall PresentDetail::PresentDetail(PresentDetail *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  this[0x20] = (PresentDetail)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PresentDetail::~PresentDetail() */

void __thiscall PresentDetail::~PresentDetail(PresentDetail *this)

{
  std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>::~vector
            ((vector<NetworkPresentContent,std::allocator<NetworkPresentContent>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* PresentDetail::PresentDetail(PresentDetail&&) */

void __thiscall PresentDetail::PresentDetail(PresentDetail *this,PresentDetail *param_1)

{
  undefined4 uVar1;
  PresentDetail PVar2;
  
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  PVar2 = param_1[0x20];
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  this[0x20] = PVar2;
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* PresentDetail::PresentDetail(PresentDetail const&) */

void __thiscall PresentDetail::PresentDetail(PresentDetail *this,PresentDetail *param_1)

{
  undefined4 uVar1;
  PresentDetail PVar2;
  
  FUN_05475d88();
  std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>::vector
            ((vector<NetworkPresentContent,std::allocator<NetworkPresentContent>> *)(this + 8),
             (vector *)(param_1 + 8));
  PVar2 = param_1[0x20];
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  this[0x20] = PVar2;
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* PresentDetail::TEMPNAMEPLACEHOLDERVALUE(PresentDetail const&) */

PresentDetail * __thiscall PresentDetail::operator=(PresentDetail *this,PresentDetail *param_1)

{
  undefined4 uVar1;
  PresentDetail PVar2;
  
  thunk_FUN_05475e00();
  std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>::operator=
            ((vector<NetworkPresentContent,std::allocator<NetworkPresentContent>> *)(this + 8),
             (vector *)(param_1 + 8));
  PVar2 = param_1[0x20];
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  this[0x20] = PVar2;
  *(undefined4 *)(this + 0x24) = uVar1;
  return this;
}

