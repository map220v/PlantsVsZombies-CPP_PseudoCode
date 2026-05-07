// Class: PennyPerkZombieInhibitor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitor::StaticClassInit() */

void PennyPerkZombieInhibitor::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkZombieInhibitor");
    (*pcVar2)(plVar1,asStack_10,FUN_036bffb4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkZombieInhibitor::StaticGetClass() */

long * PennyPerkZombieInhibitor::StaticGetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkZombieInhibitor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkZombieInhibitor::GetClass() const */

long * PennyPerkZombieInhibitor::GetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkZombieInhibitor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkZombieInhibitor::~PennyPerkZombieInhibitor() */

void __thiscall PennyPerkZombieInhibitor::~PennyPerkZombieInhibitor(PennyPerkZombieInhibitor *this)

{
  *(undefined ***)this = &PTR_GetClass_06681540;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkZombieInhibitor::~PennyPerkZombieInhibitor() */

void __thiscall PennyPerkZombieInhibitor::~PennyPerkZombieInhibitor(PennyPerkZombieInhibitor *this)

{
  ~PennyPerkZombieInhibitor(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkZombieInhibitor::PennyPerkZombieInhibitor() */

void __thiscall PennyPerkZombieInhibitor::PennyPerkZombieInhibitor(PennyPerkZombieInhibitor *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_06681540;
  return;
}


/* PennyPerkZombieInhibitor::StaticNew() */

PennyPerkZombieInhibitor * PennyPerkZombieInhibitor::StaticNew(void)

{
  PennyPerkZombieInhibitor *this;
  
  this = ::operator_new(0x28);
  PennyPerkZombieInhibitor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkZombieInhibitor::TryOverrideZombieType(Sexy::RtWeakPtr<ZombieType const>) */

void PennyPerkZombieInhibitor::TryOverrideZombieType
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,
               RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  long extraout_x0;
  long lVar2;
  char *pcVar3;
  RtClass *pRVar4;
  ClassRestrictionSet *this;
  string *psVar5;
  ResourceInfo *pRVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  pcVar3 = (char *)FUN_0547429c(lVar2 + 0x10);
  pRVar4 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar3);
  this = (ClassRestrictionSet *)
         FUN_036be31c(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(param_2 + 0x10));
  cVar1 = ClassRestrictionSet::IsIncluded(this,pRVar4);
  if (cVar1 != '\0') {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    if (pRVar6 != (ResourceInfo *)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_036c4190;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)param_3);
LAB_036c4190:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

