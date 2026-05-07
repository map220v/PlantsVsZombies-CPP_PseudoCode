// Class: ZombieCarnieMagician


/* ZombieCarnieMagician::onApplyCondition(ZombieConditions) */

void __thiscall ZombieCarnieMagician::onApplyCondition(undefined8 param_1,int param_2)

{
  if ((param_2 != 0x77 && param_2 != 0x19) && (param_2 != 0x40)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieCarnieMagician::updateState_Walk() */

void __thiscall ZombieCarnieMagician::updateState_Walk(ZombieCarnieMagician *this)

{
  (**(code **)(*(long *)this + 0xa60))();
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieCarnieMagician::updateState_Eat() */

void __thiscall ZombieCarnieMagician::updateState_Eat(ZombieCarnieMagician *this)

{
  (**(code **)(*(long *)this + 0xa60))();
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,2);
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* ZombieCarnieMagician::ZombieCarnieMagician() */

void __thiscall ZombieCarnieMagician::ZombieCarnieMagician(ZombieCarnieMagician *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_06a132a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieMagician_06a13d18;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar1;
  *(undefined4 *)(this + 0x844) = uVar1;
  *(undefined4 *)(this + 0x848) = uVar1;
  return;
}


/* ZombieCarnieMagician::StaticNew() */

ZombieCarnieMagician * ZombieCarnieMagician::StaticNew(void)

{
  ZombieCarnieMagician *this;
  
  this = ::operator_new(0x850);
  ZombieCarnieMagician(this);
  return this;
}


/* ZombieCarnieMagician::onZombieInitialize() */

void __thiscall ZombieCarnieMagician::onZombieInitialize(ZombieCarnieMagician *this)

{
  ZombieCarnieMagicianProps *pZVar1;
  float fVar2;
  float fVar3;
  
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  pZVar1 = Zombie::GetProps<ZombieCarnieMagicianProps>((Zombie *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x840) = fVar2 + *(float *)(pZVar1 + 0x228);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x844) = fVar2 + *(float *)(pZVar1 + 0x22c);
  fVar2 = (float)PVZ_T();
  fVar3 = *(float *)(pZVar1 + 0x230);
  *(undefined4 *)(this + 0x84c) = 3;
  *(float *)(this + 0x848) = fVar2 + fVar3;
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  return;
}


/* ZombieCarnieMagician::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

byte ZombieCarnieMagician::CanBeTargetedByPlant(Zombie *param_1,RtWeakPtr *param_2)

{
  byte bVar1;
  ZombieCarnieMagicianProps *pZVar2;
  ResourceInfo *pRVar3;
  
  pZVar2 = Zombie::GetProps<ZombieCarnieMagicianProps>(param_1);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  bVar1 = PlantRestrictionSet::IsExcluded
                    ((PlantRestrictionSet *)(pZVar2 + 0x248),(PlantType *)pRVar3);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagician::tryStartZombieActions() */

void __thiscall ZombieCarnieMagician::tryStartZombieActions(ZombieCarnieMagician *this)

{
  char cVar1;
  char cVar2;
  ZombieCarnieMagicianProps *pZVar3;
  ZombieWithActionsProps *pZVar4;
  undefined8 uVar5;
  RtWeakPtrBase *pRVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieCarnieMagicianProps>((Zombie *)this);
  cVar1 = Creature::IsOnBoard();
  if (((cVar1 != '\0') && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) &&
     (*(int *)(this + 0x84c) == 3)) {
    fVar9 = (float)PVZ_T();
    if (*(float *)(this + 0x840) < fVar9) {
      *(undefined4 *)(this + 0x84c) = 0;
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x840) = fVar9 + *(float *)(pZVar3 + 0x234);
      pZVar4 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
      uVar8 = 0;
      uVar5 = *(undefined8 *)(pZVar4 + 0x210);
    }
    else {
      fVar9 = (float)PVZ_T();
      if (fVar9 <= *(float *)(this + 0x844)) {
        fVar9 = (float)PVZ_T();
        if (fVar9 <= *(float *)(this + 0x848)) goto LAB_04f319a8;
        *(undefined4 *)(this + 0x84c) = 2;
        fVar9 = (float)PVZ_T();
        *(float *)(this + 0x848) = fVar9 + *(float *)(pZVar3 + 0x23c);
        pZVar4 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
        uVar8 = 2;
        uVar5 = *(undefined8 *)(pZVar4 + 0x210);
      }
      else {
        *(undefined4 *)(this + 0x84c) = 1;
        fVar9 = (float)PVZ_T();
        *(float *)(this + 0x844) = fVar9 + *(float *)(pZVar3 + 0x238);
        pZVar4 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
        uVar5 = *(undefined8 *)(pZVar4 + 0x210);
        uVar8 = 1;
      }
    }
    cVar2 = '\0';
    pRVar6 = (RtWeakPtrBase *)FUN_04f2d654(uVar5,uVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar6);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    cVar1 = (**(code **)(*plVar7 + 0x80))(plVar7,this);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar2 != '\0') goto LAB_04f319c4;
  }
LAB_04f319a8:
  cVar2 = '\0';
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x84c) = 3;
  }
LAB_04f319c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ZombieCarnieMagician::~ZombieCarnieMagician() */

void __thiscall ZombieCarnieMagician::~ZombieCarnieMagician(ZombieCarnieMagician *this)

{
  *(undefined ***)this = &PTR_GetClass_06a132a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieMagician_06a13d18;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieCarnieMagician::~ZombieCarnieMagician() */

void __thiscall ZombieCarnieMagician::~ZombieCarnieMagician(ZombieCarnieMagician *this)

{
  ~ZombieCarnieMagician(this + -0x10);
  return;
}


/* ZombieCarnieMagician::~ZombieCarnieMagician() */

void __thiscall ZombieCarnieMagician::~ZombieCarnieMagician(ZombieCarnieMagician *this)

{
  ~ZombieCarnieMagician(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCarnieMagician::~ZombieCarnieMagician() */

void __thiscall ZombieCarnieMagician::~ZombieCarnieMagician(ZombieCarnieMagician *this)

{
  ~ZombieCarnieMagician(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagician::StaticClassInit() */

void ZombieCarnieMagician::StaticClassInit(void)

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
            (apStack_30,"TELEPORT_OTHER",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"TELEPORT_SELF",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SPAWN_DOVE",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"NO_ACTION",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"MagicianActionStatus");
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
    std::string::string((string *)avStack_20,"ZombieCarnieMagician");
    (*pcVar3)(plVar2,avStack_20,FUN_04f38e54,0x850,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagician::StaticGetClass() */

long * ZombieCarnieMagician::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagician",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagician::GetClass() const */

long * ZombieCarnieMagician::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagician",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

