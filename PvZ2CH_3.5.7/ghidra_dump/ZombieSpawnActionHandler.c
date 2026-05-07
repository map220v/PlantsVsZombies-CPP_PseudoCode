// Class: ZombieSpawnActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler::StaticClassInit() */

void ZombieSpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f36fd8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnActionHandler::StaticGetClass() */

long * ZombieSpawnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnActionHandler::GetClass() const */

long * ZombieSpawnActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieSpawnActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1);
  }
  return;
}


/* ZombieSpawnActionHandler::ZombieSpawnActionHandler() */

void __thiscall ZombieSpawnActionHandler::ZombieSpawnActionHandler(ZombieSpawnActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a16720;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombieSpawnActionHandler::StaticNew() */

ZombieSpawnActionHandler * ZombieSpawnActionHandler::StaticNew(void)

{
  ZombieSpawnActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombieSpawnActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler::onAnimationDone(std::string const&) */

void __thiscall
ZombieSpawnActionHandler::onAnimationDone(ZombieSpawnActionHandler *this,string *param_1)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  cVar1 = std::operator==(param_1,(string *)(pZVar2 + 0xa0));
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_1,(string *)(pZVar2 + 0xa8));
    if (cVar1 != '\0') {
      ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
    }
  }
  else {
    this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
    pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(pZVar3,pZVar2 + 0xa8,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler::onStartAction() */

void __thiscall ZombieSpawnActionHandler::onStartAction(ZombieSpawnActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  undefined8 uVar2;
  long lVar3;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pcVar5 = *(code **)(*(long *)pZVar1 + 0x90);
  uVar2 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (*pcVar5)(avStack_68,pZVar1,uVar2);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::operator=
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28),
             (vector *)avStack_68);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_68);
  lVar3 = FUN_04f2d4ec(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  if (lVar3 == 0) {
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar5 = *(code **)(*(long *)pZVar4 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)avStack_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             avStack_68);
  (*pcVar5)(pZVar4,pZVar1 + 0xa0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)avStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnActionHandler::~ZombieSpawnActionHandler() */

void __thiscall ZombieSpawnActionHandler::~ZombieSpawnActionHandler(ZombieSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a16720;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28))
  ;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieSpawnActionHandler::~ZombieSpawnActionHandler() */

void __thiscall ZombieSpawnActionHandler::~ZombieSpawnActionHandler(ZombieSpawnActionHandler *this)

{
  ~ZombieSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombieSpawnActionHandler::onEndAction() */

void __thiscall ZombieSpawnActionHandler::onEndAction(ZombieSpawnActionHandler *this)

{
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x28))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler::spawnZombie(std::string&, Sexy::RtWeakPtr<Plant>) */

void __thiscall
ZombieSpawnActionHandler::spawnZombie
          (ZombieSpawnActionHandler *this,undefined8 param_2,RtWeakPtr *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  string *psVar5;
  RtObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar6;
  long lVar7;
  long *extraout_x0;
  long *plVar8;
  code *pcVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  plVar8 = *(long **)(gLawnApp + 0x9f0);
  pcVar9 = *(code **)(*plVar8 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  this_00 = (RtObject *)(*pcVar9)(plVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_10 = *(undefined4 *)(puVar6 + 1);
  local_18 = (float)*puVar6;
  fStack_14 = (float)((ulong)*puVar6 >> 0x20);
  _local_18 = CONCAT44(*(float *)(pZVar4 + 0xb4) + fStack_14,*(float *)(pZVar4 + 0xb0) + local_18);
  if ((((this_00 != (RtObject *)0x0) && (pZVar4[0xb8] != (ZombossHydraSprayActionDefinition)0x0)) &&
      (bVar1 = Sexy::RtObject::IsA<ZombieCarnieDove>(this_00), bVar1)) &&
     ((bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3), bVar1 &&
      (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_3), cVar2 != '\0')))) {
    nop();
    pcVar9 = *(code **)(*extraout_x0 + 0xa08);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    uVar3 = *(undefined4 *)(lVar7 + 0x114);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    (*pcVar9)(extraout_x0,uVar3,*(undefined4 *)(lVar7 + 0x110));
  }
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  lVar7 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  uVar3 = FUN_04f2d3a4(*(undefined4 *)(lVar7 + 0x24));
  RealObject::JoinTeam((RealObject *)this_00,uVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler::startSpawnZombies() */

void __thiscall ZombieSpawnActionHandler::startSpawnZombies(ZombieSpawnActionHandler *this)

{
  int iVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  RtWeakPtrBase *pRVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  std::vector<WeightsInt,std::allocator<WeightsInt>>::vector
            ((vector<WeightsInt,std::allocator<WeightsInt>> *)&local_50,(vector *)(pZVar2 + 0x40));
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar5 = 0;
  while( true ) {
    uVar7 = local_50;
    uVar4 = FUN_04f2d67c(local_50,local_48);
    if (uVar4 <= uVar5) break;
    piVar3 = (int *)FUN_04f2d6a4(uVar7,uVar5);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar3,piVar3[1]);
    uVar5 = uVar5 + 1;
  }
  iVar1 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  uVar7 = *(undefined8 *)(this + 0x28);
  uVar5 = FUN_04f2d4ec(uVar7,*(undefined8 *)(this + 0x30));
  if (uVar5 < (ulong)(long)iVar1) {
    uVar4 = 0;
    while (uVar4 < uVar5) {
      pcVar8 = *(code **)(*(long *)this + 0xb8);
      pRVar6 = (RtWeakPtrBase *)FUN_04f2d6ac(uVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar6);
      (*pcVar8)(this,pZVar2 + 0x38,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      uVar7 = *(undefined8 *)(this + 0x28);
      uVar5 = FUN_04f2d4ec(uVar7,*(undefined8 *)(this + 0x30));
      uVar4 = uVar4 + 1;
    }
  }
  else if (0 < iVar1) {
    lVar9 = 0;
    while( true ) {
      pcVar8 = *(code **)(*(long *)this + 0xb8);
      pRVar6 = (RtWeakPtrBase *)FUN_04f2d6ac(uVar7,lVar9);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar6);
      (*pcVar8)(this,pZVar2 + 0x38,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      if (iVar1 <= (int)(lVar9 + 1)) break;
      uVar7 = *(undefined8 *)(this + 0x28);
      lVar9 = lVar9 + 1;
    }
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  std::vector<WeightsInt,std::allocator<WeightsInt>>::~vector
            ((vector<WeightsInt,std::allocator<WeightsInt>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

