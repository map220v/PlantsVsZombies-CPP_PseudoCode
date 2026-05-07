// Class: CoalCartDefault


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoalCartDefault::StaticClassInit() */

void CoalCartDefault::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoalCartDefault");
    (*pcVar2)(plVar1,asStack_10,FUN_03c51ea4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoalCartDefault::StaticGetClass() */

long * CoalCartDefault::StaticGetClass(void)

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
  uVar2 = Armor::StaticGetClass();
  (*pcVar3)(plVar1,"CoalCartDefault",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoalCartDefault::GetClass() const */

long * CoalCartDefault::GetClass(void)

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
  uVar2 = Armor::StaticGetClass();
  (*pcVar3)(plVar1,"CoalCartDefault",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoalCartDefault::IsBurnt() */

bool __thiscall CoalCartDefault::IsBurnt(CoalCartDefault *this)

{
  float fVar1;
  
  fVar1 = (float)FUN_03c518d8(*(undefined4 *)(this + 0x2c));
  return fVar1 * 0.3 <= *(float *)(this + 0x3c);
}


/* CoalCartDefault::~CoalCartDefault() */

void __thiscall CoalCartDefault::~CoalCartDefault(CoalCartDefault *this)

{
  *(undefined ***)this = &PTR_GetClass_067534c0;
  Armor::~Armor((Armor *)this);
  return;
}


/* CoalCartDefault::~CoalCartDefault() */

void __thiscall CoalCartDefault::~CoalCartDefault(CoalCartDefault *this)

{
  ~CoalCartDefault(this);
  AK::FreeHook(this);
  return;
}


/* CoalCartDefault::CoalCartDefault() */

void __thiscall CoalCartDefault::CoalCartDefault(CoalCartDefault *this)

{
  Armor::Armor((Armor *)this);
  *(undefined ***)this = &PTR_GetClass_067534c0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* CoalCartDefault::StaticNew() */

CoalCartDefault * CoalCartDefault::StaticNew(void)

{
  CoalCartDefault *this;
  
  this = ::operator_new(0x40);
  CoalCartDefault(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoalCartDefault::onTakeDamage(DamageInfo const&) */

void __thiscall CoalCartDefault::onTakeDamage(CoalCartDefault *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  RealObject *this_00;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float local_10 [2];
  long local_8;
  
  fVar8 = *(float *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if ((fVar8 <= 0.0) ||
     (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x400), !bVar1)) {
    cVar2 = DamageInfo::ObtainZombieCondition(param_1,0);
    if (cVar2 == '\0') {
      fVar8 = *(float *)(this + 0x3c);
    }
    else {
      *(float *)(this + 0x3c) = *(float *)(this + 0x3c) - *(float *)(param_1 + 8);
      local_10[0] = 0.0;
      pfVar5 = eastl::max_alt<float>((float *)(this + 0x3c),local_10);
      fVar8 = *pfVar5;
      *(float *)(this + 0x3c) = fVar8;
    }
  }
  else {
    fVar8 = fVar8 + *(float *)(this + 0x3c);
    *(float *)(this + 0x3c) = fVar8;
  }
  fVar7 = (float)FUN_03c518d8(*(undefined4 *)(this + 0x2c));
  if (fVar7 * 0.3 <= fVar8) {
    Armor::getProps((Armor *)this);
    nop();
    this_00 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    RealObject::PlayPositionalSound(this_00,(string *)(extraout_x0 + 0x98),0.1);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    pcVar6 = *(code **)(*plVar3 + 0x350);
    lVar4 = Armor::getProps((Armor *)this);
    FUN_05475d88((string *)local_10,lVar4 + 0x18);
    (*pcVar6)(plVar3,(string *)local_10);
    std::string::~string((string *)local_10);
    Armor::DestroyArmor((Armor *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

