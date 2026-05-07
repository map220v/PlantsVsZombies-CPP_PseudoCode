// Class: ZombieInstantTargetAttackActionDefinition


/* ZombieInstantTargetAttackActionDefinition::ZombieInstantTargetAttackActionDefinition() */

void __thiscall
ZombieInstantTargetAttackActionDefinition::ZombieInstantTargetAttackActionDefinition
          (ZombieInstantTargetAttackActionDefinition *this)

{
  ZombieProjectileLaunchActionDefinition::ZombieProjectileLaunchActionDefinition
            ((ZombieProjectileLaunchActionDefinition *)this);
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined ***)this = &PTR_GetClass_0687f3a0;
  return;
}


/* ZombieInstantTargetAttackActionDefinition::StaticNew() */

ZombieInstantTargetAttackActionDefinition *
ZombieInstantTargetAttackActionDefinition::StaticNew(void)

{
  ZombieInstantTargetAttackActionDefinition *this;
  
  this = ::operator_new(0x90);
  ZombieInstantTargetAttackActionDefinition(this);
  return this;
}


/* ZombieInstantTargetAttackActionDefinition::~ZombieInstantTargetAttackActionDefinition() */

void __thiscall
ZombieInstantTargetAttackActionDefinition::~ZombieInstantTargetAttackActionDefinition
          (ZombieInstantTargetAttackActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f3a0;
  ZombieProjectileLaunchActionDefinition::~ZombieProjectileLaunchActionDefinition
            ((ZombieProjectileLaunchActionDefinition *)this);
  return;
}


/* ZombieInstantTargetAttackActionDefinition::~ZombieInstantTargetAttackActionDefinition() */

void __thiscall
ZombieInstantTargetAttackActionDefinition::~ZombieInstantTargetAttackActionDefinition
          (ZombieInstantTargetAttackActionDefinition *this)

{
  ~ZombieInstantTargetAttackActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombieInstantTargetAttackActionDefinition::isValidTarget(BoardEntity*) const */

byte __thiscall
ZombieInstantTargetAttackActionDefinition::isValidTarget
          (ZombieInstantTargetAttackActionDefinition *this,BoardEntity *param_1)

{
  byte bVar1;
  Zombie *pZVar2;
  
  if (*(int *)(this + 0x88) != 1) {
    return 1;
  }
  if ((param_1 != (BoardEntity *)0x0) &&
     (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) {
    bVar1 = Zombie::HasArmor(pZVar2,0x40);
    return bVar1 ^ 1;
  }
  return 0;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04631484 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieInstantTargetAttackActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieInstantTargetAttackActionDefinition::TryStartAction
          (ZombieInstantTargetAttackActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3
          )

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieInstantTargetAttackActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInstantTargetAttackActionDefinition::StaticClassInit() */

void ZombieInstantTargetAttackActionDefinition::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Invalid",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PromoteRomans",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"InstantTargetAttackAction");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombieInstantTargetAttackActionDefinition");
    (*pcVar3)(plVar2,avStack_20,FUN_046333a0,0x90,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInstantTargetAttackActionDefinition::StaticGetClass() */

long * ZombieInstantTargetAttackActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieProjectileLaunchActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInstantTargetAttackActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInstantTargetAttackActionDefinition::GetClass() const */

long * ZombieInstantTargetAttackActionDefinition::GetClass(void)

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
  uVar2 = ZombieProjectileLaunchActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInstantTargetAttackActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

