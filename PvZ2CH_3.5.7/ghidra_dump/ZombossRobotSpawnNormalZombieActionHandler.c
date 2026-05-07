// Class: ZombossRobotSpawnNormalZombieActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::StaticClassInit() */

void ZombossRobotSpawnNormalZombieActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotSpawnNormalZombieActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f17980,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpawnNormalZombieActionHandler::StaticGetClass() */

long * ZombossRobotSpawnNormalZombieActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotSpawnNormalZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpawnNormalZombieActionHandler::GetClass() const */

long * ZombossRobotSpawnNormalZombieActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotSpawnNormalZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpawnNormalZombieActionHandler::startNextAction() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::startNextAction
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pZVar1 + 0x3c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::playSyncAnimation() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::playSyncAnimation
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  bool bVar1;
  int iVar2;
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar3;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  float *pfVar5;
  long *plVar6;
  undefined8 *puVar7;
  string *psVar8;
  PopAnimRig *this_04;
  int iVar9;
  float fVar10;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar3 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBOSS_PVZ1_ROBOT_SPAWN_NORMAL_ZOMBIE");
  GetPAMByName((string *)&local_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)this_02 + 0x80))(0x3f333333,this_02);
  this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_03);
  fVar10 = (float)FUN_04f11e94(*(undefined4 *)(this_02 + 0xd4));
  EATextSquish::Vec3::Vec3
            ((Vec3 *)local_18,*pfVar5 + fVar10 * 220.0,
             ((float)((*(int *)(this + 0x58) + -2) * 0x4c) + pfVar5[1]) - fVar10 * 1200.0,0.0);
  plVar6 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  iVar2 = (**(code **)(*plVar6 + 0x170))();
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_02,(SexyVector3 *)local_18,iVar2 + 1);
  std::string::string((string *)local_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr *)local_18,0);
  std::string::~string((string *)local_18);
  nop();
  iVar2 = FUN_04f11f68(*(undefined4 *)(pZVar3 + 0x240));
  do {
    puVar7 = (undefined8 *)(**(code **)(*(long *)pZVar3 + 0x290))(pZVar3,iVar9);
    local_20 = FUN_04f16dcc(*puVar7);
    local_18[0] = FUN_04f16e1c(puVar7[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)local_18), bVar1)
    {
      psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      this_04 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_02);
      PopAnimRig::SetLayerVisibility(this_04,psVar8,iVar2 == iVar9);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpawnNormalZombieActionHandler::ZombossRobotSpawnNormalZombieActionHandler() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::ZombossRobotSpawnNormalZombieActionHandler
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a10440;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
            ((ZombossRobotSpawnZombieInfo *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* ZombossRobotSpawnNormalZombieActionHandler::StaticNew() */

ZombossRobotSpawnNormalZombieActionHandler *
ZombossRobotSpawnNormalZombieActionHandler::StaticNew(void)

{
  ZombossRobotSpawnNormalZombieActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossRobotSpawnNormalZombieActionHandler(this);
  return this;
}


/* ZombossRobotSpawnNormalZombieActionHandler::~ZombossRobotSpawnNormalZombieActionHandler() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::~ZombossRobotSpawnNormalZombieActionHandler
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10440;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  return;
}


/* ZombossRobotSpawnNormalZombieActionHandler::~ZombossRobotSpawnNormalZombieActionHandler() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::~ZombossRobotSpawnNormalZombieActionHandler
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  ~ZombossRobotSpawnNormalZombieActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::spawnZombie() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::spawnZombie
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  string asStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x48);
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_20,this + 0x48);
    plVar6 = *(long **)(gLawnApp + 0x9f0);
    pcVar7 = *(code **)(*plVar6 + 0x318);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)(*pcVar7)(plVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0xfffffffb,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    iVar3 = *(int *)(this + 0x58);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,*(undefined4 *)(this + 0x54));
    (**(code **)(*(long *)this_00 + 0x9d8))(this_00);
    Zombie::SetHasPlantFood(SUB81(this_00,0));
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_18 = *puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(6);
    local_18 = CONCAT44(local_18._4_4_,(float)iVar2);
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar3);
    local_18 = CONCAT44((float)iVar3,(undefined4)local_18);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::OnPopAnimCommand(std::string const&, float,
   std::string const&, std::string const&) */

void ZombossRobotSpawnNormalZombieActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  Zombie *this;
  RtObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = (RtObject *)Zombie::GetAnimRig(this);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_00);
  FUN_04f120c8(asStack_10);
  cVar1 = std::operator==(param_3,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    spawnZombie((ZombossRobotSpawnNormalZombieActionHandler *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::pickRandomRowToSpawn() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::pickRandomRowToSpawn
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int local_34;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = FUN_04f11f94(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  if (4 < uVar3) {
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x30));
  }
  local_34 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  do {
    while( true ) {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar4,uVar5,&local_34);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_20,&local_34);
      local_34 = local_34 + 1;
      if (4 < local_34) goto LAB_04f201e4;
    }
    local_34 = local_34 + 1;
  } while (local_34 < 5);
LAB_04f201e4:
  iVar2 = FUN_04f11f94(local_20,local_18);
  iVar2 = Sexy::Rand(iVar2);
  puVar6 = (undefined4 *)FUN_04f12038(local_20,(long)iVar2);
  local_28 = CONCAT44(local_28._4_4_,*puVar6);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,(int *)&local_28);
  uVar3 = local_28;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3 & 0xffffffff);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::playSpawnNormalZombieAnim() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::playSpawnNormalZombieAnim
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  undefined4 uVar1;
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar2;
  char *pcVar3;
  code *pcVar4;
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
  pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  if (*(int *)(this + 0x58) == -1) {
    uVar1 = pickRandomRowToSpawn(this);
    *(undefined4 *)(this + 0x58) = uVar1;
  }
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x170);
  FUN_04f120c8(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpawnNormalZombieAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar4)(pZVar2,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  playSyncAnimation(this);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"pvz1_robot_spawn_zombie");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpawnNormalZombieActionHandler::onUpdateAction() */

void ZombossRobotSpawnNormalZombieActionHandler::onUpdateAction(void)

{
  char cVar1;
  ZombossRobotSpawnNormalZombieActionHandler *in_x0;
  float fVar2;
  undefined4 uVar3;
  
  nop();
  cVar1 = FUN_04f11f6c(in_x0[0x28]);
  if ((cVar1 == '\0') && (fVar2 = (float)PVZ_T(), *(float *)(in_x0 + 0x2c) < fVar2)) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x2c) = uVar3;
    cVar1 = FUN_0547419c(in_x0 + 0x48);
    if (cVar1 == '\0') {
      playSpawnNormalZombieAnim(in_x0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::pickRandowSpawnZombieInfo() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::pickRandowSpawnZombieInfo
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  char cVar1;
  bool bVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  ZombossRobotSpawnZombieInfo *pZVar4;
  long lVar5;
  ZombossRobotSpawnZombieInfo *in_x8;
  undefined8 local_90;
  undefined8 local_88;
  vector<ZombossRobotSpawnZombieInfo,std::allocator<ZombossRobotSpawnZombieInfo>> avStack_80 [24];
  ZombossRobotSpawnZombieInfo aZStack_68 [8];
  int local_60;
  ZombossRobotSpawnZombieInfo aZStack_50 [24];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  std::vector<ZombossRobotSpawnZombieInfo,std::allocator<ZombossRobotSpawnZombieInfo>>::vector
            (avStack_80,(vector *)(pZVar3 + 0x48));
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(in_x8);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2) {
    pZVar4 = (ZombossRobotSpawnZombieInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(aZStack_68,pZVar4);
    cVar1 = FUN_0547419c(aZStack_68);
    if ((cVar1 == '\0') && (0 < local_60)) {
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(aZStack_50,aZStack_68);
      ProbabilitySet<ZombossRobotSpawnZombieInfo>::AddItem
                ((ProbabilitySet<ZombossRobotSpawnZombieInfo> *)aPStack_38,aZStack_50,local_60);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_50);
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_68);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_90);
  }
  lVar5 = ProbabilitySet<ZombossRobotSpawnZombieInfo>::GetSize
                    ((ProbabilitySet<ZombossRobotSpawnZombieInfo> *)aPStack_38);
  if (lVar5 != 0) {
    ProbabilitySet<ZombossRobotSpawnZombieInfo>::PickItem();
    ZombossRobotSpawnZombieInfo::operator=(in_x8,aZStack_50);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aZStack_50);
  }
  ProbabilitySet<ZombossRobotSpawnZombieInfo>::~ProbabilitySet
            ((ProbabilitySet<ZombossRobotSpawnZombieInfo> *)aPStack_38);
  std::vector<ZombossRobotSpawnZombieInfo,std::allocator<ZombossRobotSpawnZombieInfo>>::~vector
            (avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::onStartAction() */

void __thiscall
ZombossRobotSpawnNormalZombieActionHandler::onStartAction
          (ZombossRobotSpawnNormalZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossRobotBaseZombieActionHandler::onStartAction((ZombossRobotBaseZombieActionHandler *)this);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pickRandowSpawnZombieInfo(this);
  ZombossRobotSpawnZombieInfo::operator=
            ((ZombossRobotSpawnZombieInfo *)(this + 0x48),(ZombossRobotSpawnZombieInfo *)apStack_20)
  ;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler::onSpawnNormalZombieAnimStoppedCallback(std::string
   const&) */

void ZombossRobotSpawnNormalZombieActionHandler::onSpawnNormalZombieAnimStoppedCallback
               (string *param_1)

{
  int iVar1;
  int iVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  Zombie *this;
  RtObject *this_00;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar4;
  code *pcVar5;
  float fVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar1 = *(int *)(pZVar3 + 0x40);
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar2 + 1;
  if (iVar2 + 1 < iVar1) {
    fVar6 = (float)PVZ_T();
    *(float *)(param_1 + 0x2c) = fVar6 + *(float *)(pZVar3 + 0x44);
    pickRandowSpawnZombieInfo((ZombossRobotSpawnNormalZombieActionHandler *)param_1);
    ZombossRobotSpawnZombieInfo::operator=
              ((ZombossRobotSpawnZombieInfo *)(param_1 + 0x48),
               (ZombossRobotSpawnZombieInfo *)&local_68);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_68);
    this = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
    this_00 = (RtObject *)Zombie::GetAnimRig(this);
    pZVar4 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_00);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x268);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar5)(pZVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  else {
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
              ((ZombossRobotSpawnZombieInfo *)&local_68);
    ZombossRobotSpawnZombieInfo::operator=
              ((ZombossRobotSpawnZombieInfo *)(param_1 + 0x48),
               (ZombossRobotSpawnZombieInfo *)&local_68);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_68);
    (**(code **)(*(long *)param_1 + 0xb0))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

