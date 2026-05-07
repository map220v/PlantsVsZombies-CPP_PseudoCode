// Class: PennyPerkShockwave


/* PennyPerkShockwave::~PennyPerkShockwave() */

void __thiscall PennyPerkShockwave::~PennyPerkShockwave(PennyPerkShockwave *this)

{
  *(undefined ***)this = &PTR_GetClass_06681f20;
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkShockwave::~PennyPerkShockwave() */

void __thiscall PennyPerkShockwave::~PennyPerkShockwave(PennyPerkShockwave *this)

{
  ~PennyPerkShockwave(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkShockwave::PennyPerkShockwave() */

void __thiscall PennyPerkShockwave::PennyPerkShockwave(PennyPerkShockwave *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06681f20;
  return;
}


/* PennyPerkShockwave::StaticNew() */

PennyPerkShockwave * PennyPerkShockwave::StaticNew(void)

{
  PennyPerkShockwave *this;
  
  this = ::operator_new(0x28);
  PennyPerkShockwave(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwave::StaticClassInit() */

void PennyPerkShockwave::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkShockwave");
    (*pcVar2)(plVar1,asStack_10,FUN_036c8188,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkShockwave::StaticGetClass() */

long * PennyPerkShockwave::StaticGetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkShockwave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkShockwave::GetClass() const */

long * PennyPerkShockwave::GetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkShockwave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwave::calcNextUpdateTime() */

void __thiscall PennyPerkShockwave::calcNextUpdateTime(PennyPerkShockwave *this)

{
  long extraout_x0;
  float *pfVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_036c7d80(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + *pfVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwave::createShockWave() */

void __thiscall PennyPerkShockwave::createShockWave(PennyPerkShockwave *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x0;
  RtObject *this_00;
  PennyPerkShockwaveProjectile *pPVar4;
  undefined4 *puVar5;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar6 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"ShockwavePerkProjectileDefault");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0xc,aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Board::AddProjectile
                        ((Board *)0x43480000,(float)(iVar2 / 2 + 0xa0 + iVar1 * iVar6),0,uVar3,
                         aRStack_18,0,0);
    pPVar4 = Sexy::RtObject::Cast<PennyPerkShockwaveProjectile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_036c7eb8(pPVar4 + 0x24);
    puVar5 = (undefined4 *)
             FUN_036c7d80(*(undefined8 *)(extraout_x0 + 0x78),(long)*(int *)(this + 0x10));
    FUN_036c7d78(*puVar5,pPVar4 + 0x1a8);
    FUN_036c7eac(pPVar4 + 0xd4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwave::onUpdate() */

void __thiscall PennyPerkShockwave::onUpdate(PennyPerkShockwave *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x0;
  RtObject *this_00;
  PennyPerkShockwaveProjectile *pPVar4;
  undefined4 *puVar5;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  for (iVar6 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"ShockwavePerkProjectileDefault");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0xc,aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Board::AddProjectile
                        ((Board *)0x43480000,(float)(iVar2 / 2 + 0xa0 + iVar1 * iVar6),0,uVar3,
                         aRStack_18,0,0);
    pPVar4 = Sexy::RtObject::Cast<PennyPerkShockwaveProjectile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_036c7eb8(pPVar4 + 0x24);
    puVar5 = (undefined4 *)
             FUN_036c7d80(*(undefined8 *)(extraout_x0 + 0x78),(long)*(int *)(this + 0x10));
    FUN_036c7d78(*puVar5,pPVar4 + 0x1a8);
    FUN_036c7eac(pPVar4 + 0xd4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

