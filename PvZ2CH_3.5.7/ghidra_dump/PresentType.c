// Class: PresentType


/* PresentType::~PresentType() */

void __thiscall PresentType::~PresentType(PresentType *this)

{
  *(undefined ***)this = &PTR_GetClass_06833660;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PresentType::~PresentType() */

void __thiscall PresentType::~PresentType(PresentType *this)

{
  ~PresentType(this);
  AK::FreeHook(this);
  return;
}


/* PresentType::PresentType() */

void __thiscall PresentType::PresentType(PresentType *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06833660;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}


/* PresentType::StaticNew() */

PresentType * PresentType::StaticNew(void)

{
  PresentType *this;
  
  this = ::operator_new(0x30);
  PresentType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentType::StaticClassInit() */

void PresentType::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PresentType");
    (*pcVar2)(plVar1,asStack_10,FUN_0431dcd8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentType::StaticGetClass() */

long * PresentType::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresentType::GetClass() const */

long * PresentType::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentType::BuildEffect() const */

void __thiscall PresentType::BuildEffect(PresentType *this)

{
  long lVar1;
  Effect_StaticImage *this_00;
  ResourceInfo *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474184(this + 0x10);
  if (lVar1 == 0) {
    lVar1 = FUN_05474184(this + 0x20);
    if (lVar1 == 0) {
      this_00 = (Effect_StaticImage *)0x0;
    }
    else {
      this_00 = GameObject::CreateOutsideTable<Effect_StaticImage>();
      Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>
                (*(string **)(gLawnApp + 0x848),SUB81(this + 0x20,0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Effect_BouncingArrow::SetArrowImage((Effect_BouncingArrow *)this_00,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Effect_BouncingArrow::SetTransX((Effect_BouncingArrow *)this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(*(undefined4 *)(this + 0x28),this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  else {
    Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>
              (*(string **)(gLawnApp + 0x848),SUB81(this + 0x10,0));
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    this_00 = (Effect_StaticImage *)GameObject::CreateOutsideTable<Effect_PopAnim>();
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_00,this + 0x18,0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    (**(code **)(*(long *)this_00 + 0x80))(*(undefined4 *)(this + 0x28),this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

