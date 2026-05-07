// Class: AddAuraCardEffect


/* AddAuraCardEffect::AddAuraCardEffect() */

void __thiscall AddAuraCardEffect::AddAuraCardEffect(AddAuraCardEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_06667af0;
  return;
}


/* AddAuraCardEffect::StaticNew() */

AddAuraCardEffect * AddAuraCardEffect::StaticNew(void)

{
  AddAuraCardEffect *this;
  
  this = ::operator_new(0x28);
  AddAuraCardEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddAuraCardEffect::StaticClassInit() */

void AddAuraCardEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"AddAuraCardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360d764,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddAuraCardEffect::StaticGetClass() */

long * AddAuraCardEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddAuraCardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddAuraCardEffect::~AddAuraCardEffect() */

void __thiscall AddAuraCardEffect::~AddAuraCardEffect(AddAuraCardEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_06667af0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* AddAuraCardEffect::~AddAuraCardEffect() */

void __thiscall AddAuraCardEffect::~AddAuraCardEffect(AddAuraCardEffect *this)

{
  ~AddAuraCardEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddAuraCardEffect::DoEffect() */

void __thiscall AddAuraCardEffect::DoEffect(AddAuraCardEffect *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  AddAuraCardEffectProperty *pAVar2;
  long *plVar3;
  long lVar4;
  CardSystemManager *pCVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x20) = 2;
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pAVar2 = Sexy::RtObject::Cast<AddAuraCardEffectProperty>(this_01);
  this_00 = (RtWeakPtr *)(pAVar2 + 0x10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar4 = (**(code **)(*plVar3 + 0x48))();
    if (lVar4 != 0) {
      pCVar5 = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
      CardSystemManager::RegisterAura(aRStack_10,pCVar5,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  *(undefined4 *)(this + 0x20) = 3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

