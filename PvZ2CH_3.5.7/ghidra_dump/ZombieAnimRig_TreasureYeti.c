// Class: ZombieAnimRig_TreasureYeti


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::GetHeadParticleName() */

void __thiscall ZombieAnimRig_TreasureYeti::GetHeadParticleName(ZombieAnimRig_TreasureYeti *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"particle_head_particle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::GetStickParticleName() */

void __thiscall ZombieAnimRig_TreasureYeti::GetStickParticleName(ZombieAnimRig_TreasureYeti *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"yeti_horse_head");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti() */

void __thiscall
ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti(ZombieAnimRig_TreasureYeti *this)

{
  *(undefined ***)this = &PTR_GetClass_06874050;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TreasureYeti_068742d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti() */

void __thiscall
ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti(ZombieAnimRig_TreasureYeti *this)

{
  ~ZombieAnimRig_TreasureYeti(this + -0x10);
  return;
}


/* ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti() */

void __thiscall
ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti(ZombieAnimRig_TreasureYeti *this)

{
  ~ZombieAnimRig_TreasureYeti(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti() */

void __thiscall
ZombieAnimRig_TreasureYeti::~ZombieAnimRig_TreasureYeti(ZombieAnimRig_TreasureYeti *this)

{
  ~ZombieAnimRig_TreasureYeti(this + -0x10);
  return;
}


/* ZombieAnimRig_TreasureYeti::ZombieAnimRig_TreasureYeti() */

void __thiscall
ZombieAnimRig_TreasureYeti::ZombieAnimRig_TreasureYeti(ZombieAnimRig_TreasureYeti *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06874050;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TreasureYeti_068742d8;
  return;
}


/* ZombieAnimRig_TreasureYeti::StaticNew() */

ZombieAnimRig_TreasureYeti * ZombieAnimRig_TreasureYeti::StaticNew(void)

{
  ZombieAnimRig_TreasureYeti *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_TreasureYeti(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::StaticClassInit() */

void ZombieAnimRig_TreasureYeti::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TreasureYeti");
    (*pcVar2)(plVar1,asStack_10,FUN_0460f160,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TreasureYeti::StaticGetClass() */

long * ZombieAnimRig_TreasureYeti::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TreasureYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TreasureYeti::GetClass() const */

long * ZombieAnimRig_TreasureYeti::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TreasureYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::DropStick(Zombie*) */

void __thiscall
ZombieAnimRig_TreasureYeti::DropStick(ZombieAnimRig_TreasureYeti *this,Zombie *param_1)

{
  vector *pvVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x268))();
  (**(code **)(*(long *)this + 0x270))(asStack_10,this);
  uVar2 = SpawnZombieParticle(param_1,pvVar1,asStack_10,0.75);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieAnimRig_TreasureYeti::HideStick() */

void __thiscall ZombieAnimRig_TreasureYeti::HideStick(ZombieAnimRig_TreasureYeti *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x268))();
  lVar4 = 0;
  while( true ) {
    uVar5 = *puVar2;
    iVar1 = FUN_0460ef48(uVar5,puVar2[1]);
    if (iVar1 <= (int)lVar4) break;
    psVar3 = (string *)FUN_0460ef54(uVar5,lVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
    lVar4 = lVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::PlayYetiWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
ZombieAnimRig_TreasureYeti::PlayYetiWalk
          (ZombieAnimRig_TreasureYeti *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
    PopAnimRig::CalcPlayingAnimLabelName();
    ZombieAnimRig::setAnimRateForWalkAnim((ZombieAnimRig *)this,asStack_58);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::prepWorldHatLayers(Sexy::PASpriteInst*) */

void __thiscall
ZombieAnimRig_TreasureYeti::prepWorldHatLayers
          (ZombieAnimRig_TreasureYeti *this,PASpriteInst *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_18,*(long *)(param_1 + 0x18) + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_05475ffc(asStack_10,asStack_18,0,9);
    bVar1 = std::operator==(asStack_10,"worldhat_");
    std::string::~string(asStack_10);
    if (bVar1) {
      param_1[10] = (PASpriteInst)0x0;
      goto LAB_0460f4ac;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = FUN_0460ef5c(uVar5,*(undefined8 *)(param_1 + 0x50));
  for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    lVar3 = FUN_0460ef68(uVar5,uVar4);
    if (*(PASpriteInst **)(lVar3 + 8) != (PASpriteInst *)0x0) {
      prepWorldHatLayers(this,*(PASpriteInst **)(lVar3 + 8));
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = FUN_0460ef5c(uVar5,*(undefined8 *)(param_1 + 0x50));
    }
  }
LAB_0460f4ac:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::PlayWalkBackward() */

void __thiscall ZombieAnimRig_TreasureYeti::PlayWalkBackward(ZombieAnimRig_TreasureYeti *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"walk_backwards");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::getHeadLayerNames() */

void ZombieAnimRig_TreasureYeti::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19280 & 1;
  if (((DAT_06b19280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19280), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19258,"yeti_jaw");
    nop();
    std::string::string((string *)&DAT_06b19260,"yeti_skull");
    nop();
    std::string::string((string *)&DAT_06b19268,"yeti_head_top");
    nop();
    __cxa_guard_release(&DAT_06b19280);
    __cxa_atexit(FUN_0460ed90,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19200 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19200), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19350,(string *)&DAT_06b19258,(allocator *)&DAT_06b19270);
    __cxa_guard_release(&DAT_06b19200);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19350,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19350);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::getArmLayerNames() */

void ZombieAnimRig_TreasureYeti::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19208 & 1;
  if (((DAT_06b19208 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19208), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19228,"yeti_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b19230,"yeti_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b19238,"yeti_outhand_2");
    nop();
    __cxa_guard_release(&DAT_06b19208);
    __cxa_atexit(FUN_0460edc4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19270), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b193b0,(string *)&DAT_06b19228,(allocator *)&DAT_06b19240);
    __cxa_guard_release(&DAT_06b19270);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b193b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b193b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::getArmReplacementPairNames() */

void ZombieAnimRig_TreasureYeti::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b192f0 & 1;
  if (((DAT_06b192f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b192f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b193a0,"yeti_arm_outer_norm");
    nop();
    std::string::string((string *)&DAT_06b193a8,"yeti_arm_outer_bone");
    nop();
    __cxa_guard_release(&DAT_06b192f0);
    __cxa_atexit(FUN_0460edf8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19278 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19278), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19210,(string *)&DAT_06b193a0,(allocator *)&DAT_06b193b0);
    __cxa_guard_release(&DAT_06b19278);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19210,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19210);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::getStickLayerNames() */

void ZombieAnimRig_TreasureYeti::getStickLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b193e0 & 1;
  if (((DAT_06b193e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b193e0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b191f8,"yeti_horse_head");
    nop();
    __cxa_guard_release(&DAT_06b193e0);
    __cxa_atexit(FUN_0460ee24,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b191f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b191f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19338,(string *)&DAT_06b191f8,(allocator *)&DAT_06b19200);
    __cxa_guard_release(&DAT_06b191f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19338,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19338);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::SetDamageIndex(int) */

void __thiscall
ZombieAnimRig_TreasureYeti::SetDamageIndex(ZombieAnimRig_TreasureYeti *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06b193d8 & 1;
  if (((DAT_06b193d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b193d8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b192f8,"damage_arm");
    nop();
    std::string::string((string *)&DAT_06b19300,"damage_body");
    nop();
    std::string::string((string *)&DAT_06b19308,"damage_head");
    nop();
    __cxa_guard_release(&DAT_06b193d8);
    __cxa_atexit(FUN_0460ee30,uVar6,&DAT_06a88000);
  }
  if (((DAT_06b19370 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b19370), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19240,(string *)&DAT_06b192f8,(allocator *)&DAT_06b19310);
    __cxa_guard_release(&DAT_06b19370);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19240,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  if (param_1 == 0) {
    while( true ) {
      uVar1 = DAT_06b19240;
      uVar5 = FUN_0460ef48(DAT_06b19240,DAT_06b19248);
      if (uVar5 <= uVar6) break;
      psVar4 = (string *)FUN_0460ef70(uVar1,uVar6);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      uVar6 = uVar6 + 1;
    }
  }
  else {
    for (; uVar1 = DAT_06b19240, uVar5 = FUN_0460ef48(DAT_06b19240,DAT_06b19248), uVar6 < uVar5;
        uVar6 = uVar6 + 1) {
      psVar4 = (string *)FUN_0460ef70(uVar1,uVar6);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,(int)uVar6 < param_1);
    }
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TreasureYeti::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_TreasureYeti::onPopAnimInitialized(ZombieAnimRig_TreasureYeti *this)

{
  uint uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  WorldDataManager *this_02;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar1 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_18);
  lVar2 = FUN_0460ef44(*(undefined8 *)(this + 0x20));
  prepWorldHatLayers(this,*(PASpriteInst **)(lVar2 + 0x50));
  if (1 < uVar1) {
    this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar2 = WorldDataManager::FindWorldDataByLevelName(this_02,asStack_18);
    uVar3 = FUN_0547429c(lVar2 + 0x38);
    Sexy::StrFormat("worldhat_%s",asStack_10,uVar3);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
  }
  SetDamageIndex(this,0);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

