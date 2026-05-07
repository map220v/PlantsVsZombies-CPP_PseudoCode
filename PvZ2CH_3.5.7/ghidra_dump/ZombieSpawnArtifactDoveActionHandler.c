// Class: ZombieSpawnArtifactDoveActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionHandler::StaticClassInit() */

void ZombieSpawnArtifactDoveActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnArtifactDoveActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f37270,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnArtifactDoveActionHandler::StaticGetClass() */

long * ZombieSpawnArtifactDoveActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieSpawnActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnArtifactDoveActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnArtifactDoveActionHandler::GetClass() const */

long * ZombieSpawnArtifactDoveActionHandler::GetClass(void)

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
  uVar2 = ZombieSpawnActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnArtifactDoveActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnArtifactDoveActionHandler::ZombieSpawnArtifactDoveActionHandler() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::ZombieSpawnArtifactDoveActionHandler
          (ZombieSpawnArtifactDoveActionHandler *this)

{
  ZombieSpawnActionHandler::ZombieSpawnActionHandler((ZombieSpawnActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a167f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombieSpawnArtifactDoveActionHandler::StaticNew() */

ZombieSpawnArtifactDoveActionHandler * ZombieSpawnArtifactDoveActionHandler::StaticNew(void)

{
  ZombieSpawnArtifactDoveActionHandler *this;
  
  this = ::operator_new(0x58);
  ZombieSpawnArtifactDoveActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionHandler::onStartAction() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::onStartAction(ZombieSpawnArtifactDoveActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  undefined8 uVar2;
  long lVar3;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pcVar5 = *(code **)(*(long *)pZVar1 + 0x98);
  uVar2 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (*pcVar5)(avStack_68,pZVar1,uVar2);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::operator=
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40),(vector *)avStack_68);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector(avStack_68);
  lVar3 = FUN_04f2d66c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
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


/* ZombieSpawnArtifactDoveActionHandler::onEndAction() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::onEndAction(ZombieSpawnArtifactDoveActionHandler *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  return;
}


/* ZombieSpawnArtifactDoveActionHandler::~ZombieSpawnArtifactDoveActionHandler() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::~ZombieSpawnArtifactDoveActionHandler
          (ZombieSpawnArtifactDoveActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a167f0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  ZombieSpawnActionHandler::~ZombieSpawnActionHandler((ZombieSpawnActionHandler *)this);
  return;
}


/* ZombieSpawnArtifactDoveActionHandler::~ZombieSpawnArtifactDoveActionHandler() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::~ZombieSpawnArtifactDoveActionHandler
          (ZombieSpawnArtifactDoveActionHandler *this)

{
  ~ZombieSpawnArtifactDoveActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionHandler::spawnZombieToZombie(std::string&, Sexy::RtWeakPtr<Zombie>)
    */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::spawnZombieToZombie
          (ZombieSpawnArtifactDoveActionHandler *this,undefined8 param_2,RtWeakPtr *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  string *psVar5;
  long lVar6;
  RtObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar7;
  ZombieCarnieDoveArtifact *extraout_x0;
  long *plVar8;
  code *pcVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  lVar6 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  local_30 = FUN_04f2d490(*(undefined4 *)(lVar6 + 0x50));
  local_29 = 1;
  local_2c = 0;
  local_2b = 0;
  plVar8 = *(long **)(gLawnApp + 0x9f0);
  pcVar9 = *(code **)(*plVar8 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
  this_00 = (RtObject *)
            (*pcVar9)(plVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xfffffffb,
                      (RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  puVar7 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_38 = *(undefined4 *)(puVar7 + 1);
  local_40 = (float)*puVar7;
  fStack_3c = (float)((ulong)*puVar7 >> 0x20);
  _local_40 = CONCAT44(*(float *)(pZVar4 + 0xb4) + fStack_3c,*(float *)(pZVar4 + 0xb0) + local_40);
  if ((((this_00 != (RtObject *)0x0) && (pZVar4[0xb8] != (ZombossHydraSprayActionDefinition)0x0)) &&
      (bVar1 = Sexy::RtObject::IsA<ZombieCarnieDoveArtifact>(this_00), bVar1)) &&
     ((bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3), bVar1 &&
      (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_3), cVar2 != '\0')))) {
    nop();
    pcVar9 = *(code **)(*(long *)extraout_x0 + 0xa10);
    ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
    (*pcVar9)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)param_3);
    ZombieCarnieDoveArtifact::SetTargetZombie
              (extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    BoardEntity::CalcGridPosition();
    (**(code **)(*(long *)extraout_x0 + 0xa08))(extraout_x0,local_48,local_44);
  }
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  lVar6 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  uVar3 = FUN_04f2d3a4(*(undefined4 *)(lVar6 + 0x24));
  RealObject::JoinTeam((RealObject *)this_00,uVar3);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionHandler::startSpawnZombies() */

void __thiscall
ZombieSpawnArtifactDoveActionHandler::startSpawnZombies(ZombieSpawnArtifactDoveActionHandler *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  long lVar5;
  RtObject *pRVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  RtWeakPtrBase *pRVar10;
  ZombieCarnieMagicianArtifact *pZVar11;
  ZombossHydraSprayActionDefinition *pZVar12;
  undefined8 uVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  lVar5 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  if (lVar5 != 0) {
    pRVar6 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    bVar1 = Sexy::RtObject::IsA<ZombieCarnieMagicianArtifact>(pRVar6);
    if (bVar1) {
      pRVar6 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pZVar11 = Sexy::RtObject::Cast<ZombieCarnieMagicianArtifact>(pRVar6);
      cVar2 = FUN_04f2d4dc(pZVar11[0x861]);
      pZVar12 = pZVar4 + 0x58;
      if (cVar2 != '\0') goto LAB_04f39ed4;
    }
  }
  pZVar12 = pZVar4 + 0x40;
LAB_04f39ed4:
  std::vector<WeightsInt,std::allocator<WeightsInt>>::vector
            ((vector<WeightsInt,std::allocator<WeightsInt>> *)&local_50,(vector *)pZVar12);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar9 = 0;
  while( true ) {
    uVar13 = local_50;
    uVar8 = FUN_04f2d67c(local_50,local_48);
    if (uVar8 <= uVar9) break;
    piVar7 = (int *)FUN_04f2d6a4(uVar13,uVar9);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar7,piVar7[1]);
    uVar9 = uVar9 + 1;
  }
  iVar3 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  uVar13 = *(undefined8 *)(this + 0x40);
  uVar9 = FUN_04f2d66c(uVar13,*(undefined8 *)(this + 0x48));
  if (uVar9 < (ulong)(long)iVar3) {
    uVar8 = 0;
    while (uVar8 < uVar9) {
      pRVar10 = (RtWeakPtrBase *)FUN_04f2d664(uVar13);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar10);
      spawnZombieToZombie(this,pZVar4 + 0x38,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      uVar13 = *(undefined8 *)(this + 0x40);
      uVar9 = FUN_04f2d66c(uVar13,*(undefined8 *)(this + 0x48));
      uVar8 = uVar8 + 1;
    }
  }
  else if (0 < iVar3) {
    lVar5 = 0;
    while( true ) {
      pRVar10 = (RtWeakPtrBase *)FUN_04f2d664(uVar13,lVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar10);
      spawnZombieToZombie(this,pZVar4 + 0x38,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      if (iVar3 <= (int)(lVar5 + 1)) break;
      uVar13 = *(undefined8 *)(this + 0x40);
      lVar5 = lVar5 + 1;
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

