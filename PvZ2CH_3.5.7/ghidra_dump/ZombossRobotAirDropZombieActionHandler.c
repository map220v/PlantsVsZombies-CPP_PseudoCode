// Class: ZombossRobotAirDropZombieActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::StaticClassInit() */

void ZombossRobotAirDropZombieActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotAirDropZombieActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f1c6e8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotAirDropZombieActionHandler::StaticGetClass() */

long * ZombossRobotAirDropZombieActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotAirDropZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotAirDropZombieActionHandler::GetClass() const */

long * ZombossRobotAirDropZombieActionHandler::GetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotAirDropZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::calcAirDropStartPosition(int, int, float) */

void __thiscall
ZombossRobotAirDropZombieActionHandler::calcAirDropStartPosition
          (ZombossRobotAirDropZombieActionHandler *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  local_28 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2);
  fStack_24 = (float)iVar1;
  local_20 = fStack_24 - param_3;
  local_18 = CONCAT44(fStack_24,local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_10 = local_20;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::playReachOutIdleAnim() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::playReachOutIdleAnim
          (ZombossRobotAirDropZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  FUN_04f12408(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotAirDropZombieActionHandler::ZombossRobotAirDropZombieActionHandler() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::ZombossRobotAirDropZombieActionHandler
          (ZombossRobotAirDropZombieActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a10ed0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* ZombossRobotAirDropZombieActionHandler::StaticNew() */

ZombossRobotAirDropZombieActionHandler * ZombossRobotAirDropZombieActionHandler::StaticNew(void)

{
  ZombossRobotAirDropZombieActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombossRobotAirDropZombieActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::playReachOutAnim() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::playReachOutAnim
          (ZombossRobotAirDropZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f123a0(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::startNextAction() */

void ZombossRobotAirDropZombieActionHandler::startNextAction(void)

{
  Zombie *this;
  RtObject *this_00;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  ZombieActionHandler *in_x0;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie(in_x0);
  this_00 = (RtObject *)Zombie::GetAnimRig(this);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_00);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f123a0(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::playRetractHandAnim() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::playRetractHandAnim
          (ZombossRobotAirDropZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f12470(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotAirDropZombieActionHandler::onUpdateAction() */

void ZombossRobotAirDropZombieActionHandler::onUpdateAction(void)

{
  char cVar1;
  ZombossRobotAirDropZombieActionHandler *in_x0;
  float fVar2;
  undefined4 uVar3;
  
  nop();
  cVar1 = FUN_04f11f6c(in_x0[0x28]);
  if ((cVar1 == '\0') && (fVar2 = (float)PVZ_T(), *(float *)(in_x0 + 0x30) < fVar2)) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x30) = uVar3;
    playRetractHandAnim(in_x0);
    return;
  }
  return;
}


/* ZombossRobotAirDropZombieActionHandler::~ZombossRobotAirDropZombieActionHandler() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::~ZombossRobotAirDropZombieActionHandler
          (ZombossRobotAirDropZombieActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10ed0;
  std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::~vector
            ((vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>> *)
             (this + 0x38));
  ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  return;
}


/* ZombossRobotAirDropZombieActionHandler::~ZombossRobotAirDropZombieActionHandler() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::~ZombossRobotAirDropZombieActionHandler
          (ZombossRobotAirDropZombieActionHandler *this)

{
  ~ZombossRobotAirDropZombieActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::airDropZombies() */

void ZombossRobotAirDropZombieActionHandler::airDropZombies(void)

{
  bool bVar1;
  ZombossRobotAirDropZombieActionHandler *in_x0;
  long lVar2;
  string *psVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  ZombossRobotRappellingSubSystem *pZVar4;
  undefined4 *puVar5;
  long *plVar6;
  code *pcVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x38));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    plVar6 = *(long **)(gLawnApp + 0x9f0);
    pcVar7 = *(code **)(*plVar6 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)(*pcVar7)(plVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,0xfffffffb,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    pcVar7 = *(code **)(*(long *)this + 0x78);
    local_38 = calcAirDropStartPosition(in_x0,*(int *)(lVar2 + 0x14),*(int *)(lVar2 + 0x18),0.0);
    local_34 = in_s1;
    local_30 = in_s2;
    (*pcVar7)(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    pZVar4 = Board::GetGameSubSystem<ZombossRobotRappellingSubSystem>(*(Board **)(gLawnApp + 0x9f0))
    ;
    puVar5 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    FUN_04f13624(afStack_28);
    in_s1 = puVar5[1];
    in_s2 = puVar5[2];
    ZombossRobotRappellingSubSystem::rappellingZombie
              (*puVar5,in_s1,in_s2,0x42c80000,pZVar4,this,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::onAnimStoppedCallback(std::string const&) */

void __thiscall
ZombossRobotAirDropZombieActionHandler::onAnimStoppedCallback
          (ZombossRobotAirDropZombieActionHandler *this,string *param_1)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *this_00;
  RtObject *this_01;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  FUN_04f123a0(asStack_10);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_04f12470(asStack_10);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0xb0))(this);
    }
  }
  else {
    playReachOutIdleAnim(this);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar3 + *(float *)(pZVar2 + 0x40);
    airDropZombies();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::pickRandomAirDropZombies() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::pickRandomAirDropZombies
          (ZombossRobotAirDropZombieActionHandler *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  ZombossRobotAirDropZombieInfo *pZVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar11;
  ulong uVar12;
  undefined8 local_a0;
  undefined8 local_98;
  vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>
  avStack_90 [24];
  int local_78 [2];
  int local_70;
  undefined8 local_58 [4];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::vector
            (avStack_90,(vector *)(pZVar4 + 0x50));
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_90);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_90);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    pZVar5 = (ZombossRobotAirDropZombieInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
              ((ZombossRobotAirDropZombieInfo *)local_78,pZVar5);
    cVar1 = FUN_0547419c((ZombossRobotAirDropZombieInfo *)local_78);
    if ((cVar1 == '\0') && (0 < local_70)) {
      ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
                ((ZombossRobotAirDropZombieInfo *)local_58,(ZombossRobotAirDropZombieInfo *)local_78
                );
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::AddItem
                (aPStack_38,(ZombossRobotAirDropZombieInfo *)local_58,local_70);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_58);
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_78);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_a0);
  }
  iVar11 = 3;
  do {
    lVar6 = ProbabilitySet<ZombossRobotAirDropZombieInfo>::GetSize(aPStack_38);
    if (lVar6 != 0) {
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::PickItem();
      std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::
      push_back((vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>
                 *)in_x8,(ZombossRobotAirDropZombieInfo *)local_58);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_58);
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
  local_78[0] = *(int *)(pZVar4 + 0x44);
  if (local_78[0] <= *(int *)(pZVar4 + 0x48)) {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)local_58,local_78);
      local_78[0] = local_78[0] + 1;
    } while (local_78[0] <= *(int *)(pZVar4 + 0x48));
  }
  uVar12 = 0;
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_58);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_58);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar7,uVar8);
  uVar7 = *(undefined8 *)in_x8;
  uVar9 = FUN_04f12090(uVar7,*(undefined8 *)(in_x8 + 8));
  if (uVar9 != 0) {
    do {
      lVar6 = FUN_04f120c0(uVar7,uVar12);
      if (*(int *)(lVar6 + 0x14) == -1) {
        puVar10 = (undefined4 *)FUN_04f12038(local_58[0],uVar12);
        *(undefined4 *)(lVar6 + 0x14) = *puVar10;
      }
      if (*(int *)(lVar6 + 0x18) == -1) {
        uVar3 = Sexy::Rand(5);
        uVar7 = *(undefined8 *)in_x8;
        uVar8 = *(undefined8 *)(in_x8 + 8);
        *(undefined4 *)(lVar6 + 0x18) = uVar3;
        uVar9 = FUN_04f12090(uVar7,uVar8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar9);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_58);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::~ProbabilitySet(aPStack_38);
  std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::~vector
            (avStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler::onStartAction() */

void __thiscall
ZombossRobotAirDropZombieActionHandler::onStartAction(ZombossRobotAirDropZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossRobotBaseZombieActionHandler::onStartAction((ZombossRobotBaseZombieActionHandler *)this);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar2 + *(float *)(pZVar1 + 0x3c);
  pickRandomAirDropZombies(this);
  std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::
  operator=((vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>> *)
            (this + 0x38),(vector *)avStack_20);
  std::vector<ZombossRobotAirDropZombieInfo,std::allocator<ZombossRobotAirDropZombieInfo>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

