// Class: RiftThemeJunggled


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeJunggled::StaticClassInit() */

void RiftThemeJunggled::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeJunggled");
    (*pcVar2)(plVar1,asStack_10,FUN_036f8f20,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeJunggled::StaticGetClass() */

long * RiftThemeJunggled::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeJunggled",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeJunggled::GetClass() const */

long * RiftThemeJunggled::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeJunggled",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeJunggled::~RiftThemeJunggled() */

void __thiscall RiftThemeJunggled::~RiftThemeJunggled(RiftThemeJunggled *this)

{
  *(undefined ***)this = &PTR_GetClass_06686aa0;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeJunggled::~RiftThemeJunggled() */

void __thiscall RiftThemeJunggled::~RiftThemeJunggled(RiftThemeJunggled *this)

{
  ~RiftThemeJunggled(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeJunggled::RiftThemeJunggled() */

void __thiscall RiftThemeJunggled::RiftThemeJunggled(RiftThemeJunggled *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06686aa0;
  return;
}


/* RiftThemeJunggled::StaticNew() */

RiftThemeJunggled * RiftThemeJunggled::StaticNew(void)

{
  RiftThemeJunggled *this;
  
  this = ::operator_new(0x20);
  RiftThemeJunggled(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeJunggled::syncProps() */

void RiftThemeJunggled::syncProps(void)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [12];
  SexyVector3 aSStack_7c [12];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  vector<std::string,std::allocator<std::string>> avStack_58 [24];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  vector<std::string,std::allocator<std::string>> avStack_28 [24];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  ZombieJuggledData::ZombieJuggledData
            ((ZombieJuggledData *)aRStack_88,
             (ZombieJuggledData *)(*(long *)(gLawnApp + 0x9f0) + 0xd50));
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_28,(vector *)(extraout_x0 + 0x80));
  local_5c = *(undefined4 *)(extraout_x0 + 0x4c);
  local_64 = *(undefined4 *)(extraout_x0 + 0x44);
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_58,(vector *)(extraout_x0 + 0x50));
  Sexy::SexyVector3::operator=(aSStack_7c,(SexyVector3 *)(extraout_x0 + 0x2c));
  local_70 = *(undefined8 *)(extraout_x0 + 0x38);
  Sexy::SexyVector3::operator=((SexyVector3 *)aRStack_88,(SexyVector3 *)(extraout_x0 + 0x20));
  local_60 = *(undefined4 *)(extraout_x0 + 0x48);
  local_68 = *(undefined4 *)(extraout_x0 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_40,(vector *)(extraout_x0 + 0x68));
  local_10 = 1;
  ZombieJuggledData::operator=
            ((ZombieJuggledData *)(*(long *)(gLawnApp + 0x9f0) + 0xd50),
             (ZombieJuggledData *)aRStack_88);
  ZombieJuggledData::~ZombieJuggledData((ZombieJuggledData *)aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeJunggled::Activate() */

void __thiscall RiftThemeJunggled::Activate(RiftThemeJunggled *this)

{
  RiftTheme::Activate((RiftTheme *)this);
  syncProps();
  return;
}

