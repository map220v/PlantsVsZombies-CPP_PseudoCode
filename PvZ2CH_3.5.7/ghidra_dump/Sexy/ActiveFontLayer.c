// Class: Sexy::ActiveFontLayer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ActiveFontLayer::GenerateAlphaCorrectedImage(int) */

void Sexy::ActiveFontLayer::GenerateAlphaCorrectedImage(int param_1)

{
  RtMixedPtr *this;
  RtMixedPtr *this_00;
  int iVar1;
  Image *pIVar2;
  MemoryImage *pMVar3;
  MemoryImage *pMVar4;
  void *pvVar5;
  long lVar6;
  undefined8 in_x1;
  _func_void *extraout_x1;
  RtMixedPtrBase *in_x8;
  long lVar7;
  ResourceManager *this_01;
  string asStack_38 [8];
  GetImageOptions aGStack_30 [32];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtMixedPtr *)((ulong)(uint)param_1 + 0x80);
  ResourceManager::GetImageOptions::GetImageOptions(aGStack_30);
  this_00 = (RtMixedPtr *)((ulong)(uint)param_1 + ((long)(int)in_x1 + 1) * 0x10);
  StrFormat("AltFontImage%d",asStack_38,in_x1);
  FUN_05474278(auStack_10,asStack_38);
  std::string::~string(asStack_38);
  this_01 = *(ResourceManager **)(gSexyAppBase + 0x848);
  pIVar2 = RtMixedPtr::operator_cast_to_Image_(this);
  FUN_031f5e7c(asStack_38,&DAT_056ecf00,pIVar2 + 0x30);
  ResourceManager::GetImage(this_01,this_00,asStack_38,aGStack_30,(bool *)0x0);
  std::string::~string(asStack_38);
  pIVar2 = RtMixedPtr::operator_cast_to_Image_(this_00);
  pMVar3 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar2);
  pIVar2 = RtMixedPtr::operator_cast_to_Image_(this);
  pMVar4 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar2);
  if ((pMVar4 == (MemoryImage *)0x0) || (pMVar3 == (MemoryImage *)0x0)) {
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)asStack_38,extraout_x1);
    RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)asStack_38);
    RtId::~RtId((RtId *)asStack_38);
  }
  else {
    (**(code **)(*(long *)pMVar3 + 200))
              (pMVar3,*(undefined4 *)(pMVar4 + 0x38),*(undefined4 *)(pMVar4 + 0x3c));
    (**(code **)(*(long *)pMVar3 + 0x130))(pMVar3,1,1);
    iVar1 = *(int *)(pMVar4 + 0x38) * *(int *)(pMVar4 + 0x3c);
    pvVar5 = operator_new__(0x400);
    *(void **)(pMVar3 + 0x80) = pvVar5;
    pvVar5 = operator_new__((long)iVar1);
    lVar7 = *(long *)(pMVar4 + 0x80);
    *(void **)(pMVar3 + 0x88) = pvVar5;
    if (lVar7 == 0) {
      lVar6 = (**(code **)(*(long *)pMVar4 + 0xd0))(pMVar4,0,0,0);
      lVar7 = 0;
      if (0 < iVar1) {
        do {
          *(char *)(*(long *)(pMVar3 + 0x88) + lVar7) =
               (char)((uint)*(undefined4 *)(lVar6 + lVar7 * 4) >> 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar1);
      }
    }
    else {
      memcpy(pvVar5,*(void **)(pMVar4 + 0x88),(long)iVar1);
    }
    memcpy(*(void **)(pMVar3 + 0x80),FONT_PALETTES + (long)(int)in_x1 * 0x400,0x400);
    RtWeakPtr<Sexy::Image>::RtWeakPtr(in_x8);
  }
  ResourceManager::GetImageOptions::~GetImageOptions(aGStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::ActiveFontLayer::~ActiveFontLayer() */

void __thiscall Sexy::ActiveFontLayer::~ActiveFontLayer(ActiveFontLayer *this)

{
  ActiveFontLayer *this_00;
  
  this_00 = this + 0x90;
  *(undefined ***)this = &PTR__ActiveFontLayer_06a36ee0;
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 200));
  std::
  map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
  ::~map((map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
          *)(this + 0x98));
  do {
    this_00 = this_00 + -0x10;
    RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)this_00);
  } while (this + 0x10 != this_00);
  return;
}


/* Sexy::ActiveFontLayer::~ActiveFontLayer() */

void __thiscall Sexy::ActiveFontLayer::~ActiveFontLayer(ActiveFontLayer *this)

{
  ~ActiveFontLayer(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ActiveFontLayer::PopColor() */

void __thiscall Sexy::ActiveFontLayer::PopColor(ActiveFontLayer *this)

{
  char cVar1;
  
  cVar1 = std::vector<Sexy::Color,std::allocator<Sexy::Color>>::empty
                    ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 200));
  if (cVar1 != '\0') {
    return;
  }
  FUN_053a1290(this + 0xd0);
  return;
}


/* Sexy::ActiveFontLayer::ActiveFontLayer() */

void __thiscall Sexy::ActiveFontLayer::ActiveFontLayer(ActiveFontLayer *this)

{
  ActiveFontLayer *pAVar1;
  
  pAVar1 = this + 0x10;
  *(undefined ***)this = &PTR__ActiveFontLayer_06a36ee0;
  do {
    pAVar1 = pAVar1 + 0x10;
    RtMixedPtr<Sexy::Image>::RtMixedPtr();
  } while (pAVar1 != this + 0x90);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ActiveFontLayer::PushColor(Sexy::Color const&) */

void __thiscall Sexy::ActiveFontLayer::PushColor(ActiveFontLayer *this,Color *param_1)

{
  vector<Sexy::Color,std::allocator<Sexy::Color>> *this_00;
  char cVar1;
  Insets *pIVar2;
  Insets *this_01;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 200);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::Color,std::allocator<Sexy::Color>>::empty(this_00);
  this_01 = (Insets *)param_1;
  if (cVar1 == '\0') {
    this_01 = aIStack_18;
    pIVar2 = (Insets *)
             std::
             vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
             ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                     *)this_00);
    Insets::Insets((Insets *)&local_28,pIVar2);
    Insets::Insets(this_01,(*(int *)param_1 * local_28) / 0xff,
                   (*(int *)(param_1 + 4) * local_24) / 0xff,
                   (*(int *)(param_1 + 8) * local_20) / 0xff,
                   (*(int *)(param_1 + 0xc) * local_1c) / 0xff);
  }
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::push_back(this_00,(Color *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ActiveFontLayer::ActiveFontLayer(Sexy::ActiveFontLayer const&) */

void __thiscall
Sexy::ActiveFontLayer::ActiveFontLayer(ActiveFontLayer *this,ActiveFontLayer *param_1)

{
  ActiveFontLayer *pAVar1;
  ActiveFontLayer *pAVar2;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined ***)this = &PTR__ActiveFontLayer_06a36ee0;
  pAVar2 = this + 0x10;
  do {
    pAVar2 = pAVar2 + 0x10;
    RtMixedPtr<Sexy::Image>::RtMixedPtr();
  } while (pAVar2 != this + 0x90);
  this[0x90] = param_1[0x90];
  std::
  map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
  ::map((map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
         *)(this + 0x98),(map *)(param_1 + 0x98));
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::vector
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 200),
             (vector *)(param_1 + 200));
  pAVar2 = this + 0x10;
  do {
    param_1 = param_1 + 0x10;
    pAVar1 = pAVar2 + 0x10;
    RtMixedPtr<Sexy::Image>::operator=((RtMixedPtr<Sexy::Image> *)pAVar2,(RtMixedPtr *)param_1);
    pAVar2 = pAVar1;
  } while (pAVar1 != this + 0x90);
  return;
}


/* Sexy::ActiveFontLayer::TEMPNAMEPLACEHOLDERVALUE(Sexy::ActiveFontLayer const&) */

ActiveFontLayer * __thiscall
Sexy::ActiveFontLayer::operator=(ActiveFontLayer *this,ActiveFontLayer *param_1)

{
  ActiveFontLayer *pAVar1;
  ActiveFontLayer AVar2;
  ActiveFontLayer *this_00;
  ActiveFontLayer *pAVar3;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  this_00 = this + 0x10;
  pAVar3 = param_1;
  do {
    pAVar3 = pAVar3 + 0x10;
    pAVar1 = this_00 + 0x10;
    RtMixedPtr<Sexy::Image>::operator=((RtMixedPtr<Sexy::Image> *)this_00,(RtMixedPtr *)pAVar3);
    this_00 = pAVar1;
  } while (pAVar1 != this + 0x90);
  AVar2 = param_1[0x91];
  this[0x90] = param_1[0x90];
  this[0x91] = AVar2;
  std::
  map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
  ::operator=((map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
               *)(this + 0x98),(map *)(param_1 + 0x98));
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::operator=
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 200),
             (vector *)(param_1 + 200));
  return this;
}

