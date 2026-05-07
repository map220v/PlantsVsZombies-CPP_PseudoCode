// Class: ZombieTreasureYeti


/* ZombieTreasureYeti::onExitState_WalkBackward(ZombieState) */

void ZombieTreasureYeti::onExitState_WalkBackward(Zombie *param_1)

{
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  return;
}


/* ZombieTreasureYeti::~ZombieTreasureYeti() */

void __thiscall ZombieTreasureYeti::~ZombieTreasureYeti(ZombieTreasureYeti *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7060;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTreasureYeti_068b7a90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieTreasureYeti::~ZombieTreasureYeti() */

void __thiscall ZombieTreasureYeti::~ZombieTreasureYeti(ZombieTreasureYeti *this)

{
  ~ZombieTreasureYeti(this + -0x10);
  return;
}


/* ZombieTreasureYeti::~ZombieTreasureYeti() */

void __thiscall ZombieTreasureYeti::~ZombieTreasureYeti(ZombieTreasureYeti *this)

{
  ~ZombieTreasureYeti(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTreasureYeti::~ZombieTreasureYeti() */

void __thiscall ZombieTreasureYeti::~ZombieTreasureYeti(ZombieTreasureYeti *this)

{
  ~ZombieTreasureYeti(this + -0x10);
  return;
}


/* ZombieTreasureYeti::onWalkContinued(std::string const&, std::string const&, int) */

void ZombieTreasureYeti::onWalkContinued(string *param_1,string *param_2,int param_3)

{
  char cVar1;
  
  if (((*(float *)(param_1 + 0x804) <= 0.0) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))
                         (param_1,*(code **)(*(long *)param_1 + 0x330),param_3), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)param_1,0x1f);
    return;
  }
  return;
}


/* ZombieTreasureYeti::onZombieDied(Zombie*, DamageInfo const*) */

void ZombieTreasureYeti::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  long lVar1;
  
  if (param_1 != (Zombie *)param_2) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x2f0))();
  lVar1 = *(long *)(gLawnApp + 0x9f0);
  *(undefined1 *)(lVar1 + 0x961) = 1;
  *(int *)(lVar1 + 400) = *(int *)(lVar1 + 400) + 1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* ZombieTreasureYeti::ZombieTreasureYeti() */

void __thiscall ZombieTreasureYeti::ZombieTreasureYeti(ZombieTreasureYeti *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b7060;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTreasureYeti_068b7a90;
  return;
}


/* ZombieTreasureYeti::StaticNew() */

ZombieTreasureYeti * ZombieTreasureYeti::StaticNew(void)

{
  ZombieTreasureYeti *this;
  
  this = ::operator_new(0x810);
  ZombieTreasureYeti(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTreasureYeti::DropAllLoot() */

void __thiscall ZombieTreasureYeti::DropAllLoot(ZombieTreasureYeti *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  undefined8 *puVar7;
  float fVar8;
  bool local_41;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  string asStack_28 [4];
  undefined4 local_24;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)FUN_046e9ac4(*(undefined4 *)(this + 0x280));
  if ((((fVar8 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     ((lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar4 == 0 ||
      (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar4 + 0x112) == '\0')))) {
    std::string::string(asStack_40,"");
    nop();
    psVar5 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    bVar2 = std::operator==(psVar5,"egypt5");
    if (bVar2) {
      std::string::~string(asStack_40);
    }
    else {
      std::string::string((string *)&local_38,"spring_mode");
      nop();
      std::string::string(asStack_28,"all");
      nop();
      Board::TryGetYetiDirectDropItemName(*(string **)(gLawnApp + 0x9f0),(string *)&local_38);
      FUN_05474278(asStack_40,asStack_18);
      std::string::~string(asStack_18);
      std::string::~string(asStack_28);
      std::string::~string((string *)&local_38);
      psVar5 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar5);
      cVar1 = FUN_046e9acc(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa02));
      if (p_Var6 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)0x0) {
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var6);
        if (490.0 <= *(float *)((long)puVar7 + 4)) {
          local_30 = *(undefined4 *)(puVar7 + 1);
          local_38._0_4_ = (float)*puVar7;
          local_38 = CONCAT44(0x43f50000,(float)local_38);
          (**(code **)(*(long *)p_Var6 + 0x78))(p_Var6,(string *)&local_38);
          iVar3 = FUN_046e9ad0(*(undefined4 *)(p_Var6 + 0x188));
          if (iVar3 == 1) {
            DVec3::DVec3((DVec3 *)asStack_28);
            DVec3::DVec3((DVec3 *)asStack_18);
            Collectable::GetMotionNewtonianValues
                      ((Collectable *)p_Var6,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                       &local_41);
            local_24 = 0;
            Collectable::SetMotionNewtonian
                      ((Collectable *)p_Var6,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                       local_41);
          }
        }
        if ((cVar1 != '\0') &&
           (p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar5),
           p_Var6 != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)0x0)) {
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(p_Var6);
          local_30 = *(undefined4 *)(puVar7 + 1);
          local_38._0_4_ = (float)*puVar7;
          local_38._4_4_ = 0x43f50000;
          iVar3 = FUN_046e9dc8(200);
          fVar8 = (float)local_38 - (float)iVar3;
          local_38._0_4_ = fVar8;
          iVar3 = FUN_046e9dc8(0x96);
          local_38 = CONCAT44(local_38._4_4_,fVar8 + (float)iVar3);
          (**(code **)(*(long *)p_Var6 + 0x78))(p_Var6,(string *)&local_38);
          iVar3 = FUN_046e9ad0(*(undefined4 *)(p_Var6 + 0x188));
          if (iVar3 == 1) {
            DVec3::DVec3((DVec3 *)asStack_28);
            DVec3::DVec3((DVec3 *)asStack_18);
            Collectable::GetMotionNewtonianValues
                      ((Collectable *)p_Var6,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                       &local_41);
            local_24 = 0;
            Collectable::SetMotionNewtonian
                      ((Collectable *)p_Var6,(SexyVector3 *)asStack_28,(SexyVector3 *)asStack_18,
                       local_41);
          }
        }
      }
      Zombie::SetHasDroppedLoot((Zombie *)this,true);
      std::string::~string(asStack_40);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTreasureYeti::onEnterState_WalkBackward(ZombieState) */

void ZombieTreasureYeti::onEnterState_WalkBackward(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_TreasureYeti::PlayWalkBackward((ZombieAnimRig_TreasureYeti *)this);
  return;
}


/* ZombieTreasureYeti::onHelmDropped(HelmType, int) */

undefined8 ZombieTreasureYeti::onHelmDropped(Zombie *param_1,int param_2)

{
  ZombieHydraHeadAnimRig *this;
  undefined8 uVar1;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  if (param_2 == 9) {
    ZombieAnimRig_TreasureYeti::HideStick((ZombieAnimRig_TreasureYeti *)this);
    uVar1 = ZombieAnimRig_TreasureYeti::DropStick((ZombieAnimRig_TreasureYeti *)this,param_1);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTreasureYeti::onEnterState_Walk(ZombieState) */

void ZombieTreasureYeti::onEnterState_Walk(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  Board *pBVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_58,L"[YETI_ENTER_ADVICE]",aRStack_60);
  Board::DisplayAdvice(pBVar2,asStack_58,7,2);
  FUN_05476c50(asStack_58);
  nop();
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  ZombieAnimRig_TreasureYeti::PlayYetiWalk((ZombieAnimRig_TreasureYeti *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTreasureYeti::StaticClassInit() */

void ZombieTreasureYeti::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieTreasureYeti");
      (*pcVar4)(plVar1,asStack_150,FUN_046ebb28,0x810,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTreasureYeti,void(ZombieTreasureYeti::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieTreasureYeti,void(ZombieTreasureYeti::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTreasureYeti,void(ZombieTreasureYeti::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TreasureYeti_WalkBackward");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046eb8cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTreasureYeti::StaticGetClass() */

long * ZombieTreasureYeti::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTreasureYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTreasureYeti::GetClass() const */

long * ZombieTreasureYeti::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTreasureYeti",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTreasureYeti::onZombieInitialize() */

void __thiscall ZombieTreasureYeti::onZombieInitialize(ZombieTreasureYeti *this)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x800] = (ZombieTreasureYeti)0x0;
  this[0x808] = (ZombieTreasureYeti)0x0;
  *(undefined4 *)(this + 0x804) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ZombieTreasureYeti,void(ZombieTreasureYeti::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  if (ms_yetiCount == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Zomb_Yeti_Vox");
  }
  ms_yetiCount = ms_yetiCount + 1;
  return;
}


/* ZombieTreasureYeti::onDestroy() */

void __thiscall ZombieTreasureYeti::onDestroy(ZombieTreasureYeti *this)

{
  char *pcVar1;
  
  Zombie::onDestroy((Zombie *)this);
  ms_yetiCount = ms_yetiCount + -1;
  if (0 < ms_yetiCount) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_Yeti_Vox");
  return;
}


/* ZombieTreasureYeti::onUpdate() */

void __thiscall ZombieTreasureYeti::onUpdate(ZombieTreasureYeti *this)

{
  ZombieTreasureYeti ZVar1;
  char cVar2;
  float *pfVar3;
  ZombieTreasureYetiProps *pZVar4;
  float fVar5;
  float fVar6;
  
  Zombie::onUpdate((Zombie *)this);
  if (this[0x800] == (ZombieTreasureYeti)0x0) {
    cVar2 = BoardEntity::IntersectsGrid((BoardEntity *)this);
    if (cVar2 == '\0') {
      ZVar1 = this[0x800];
    }
    else {
      this[0x800] = (ZombieTreasureYeti)0x1;
      pZVar4 = Zombie::GetProps<ZombieTreasureYetiProps>((Zombie *)this);
      ZVar1 = this[0x800];
      *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar4 + 0x210);
    }
    if (ZVar1 == (ZombieTreasureYeti)0x0) goto LAB_046ec098;
  }
  cVar2 = (**(code **)(*(long *)this + 0x330))(this);
  if (((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) &&
     (cVar2 = Zombie::isInState((Zombie *)this,0x1f), cVar2 == '\0')) {
    fVar5 = (float)PVZ_Dt();
    fVar6 = *(float *)(this + 0x804);
    *(float *)(this + 0x804) = fVar6 - fVar5;
    if ((fVar6 - fVar5 <= 0.0) && (cVar2 = Zombie::isInState((Zombie *)this,2), cVar2 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
    }
  }
LAB_046ec098:
  cVar2 = Zombie::isInState((Zombie *)this,0x1f);
  if (((cVar2 != '\0') &&
      (pfVar3 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this), 850.0 < *pfVar3)) &&
     (cVar2 = RealObject::IsOnTeam(this,2), cVar2 != '\0')) {
    Zombie::broadcastZombieDied((Zombie *)this,(DamageInfo *)0x0);
    (**(code **)(*(long *)this + 0x48))(this);
    TreasureYeti::YetiEscaped();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTreasureYeti::onTakeBodyDamage(DamageInfo const&) */

void __thiscall ZombieTreasureYeti::onTakeBodyDamage(ZombieTreasureYeti *this,DamageInfo *param_1)

{
  int *piVar1;
  ZombieHydraHeadAnimRig *this_00;
  float fVar2;
  float fVar3;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  local_10 = 4;
  fVar2 = (float)FUN_046e9ac8(*(undefined4 *)(this + 0x284));
  fVar3 = (float)FUN_046e9ac4(*(undefined4 *)(this + 0x280));
  local_c = 0;
  if ((int)(fVar2 * 0.25) != 0) {
    local_c = (int)fVar3 / (int)(fVar2 * 0.25);
  }
  local_c = local_c + 1;
  piVar1 = eastl::min_alt<int>(&local_c,&local_10);
  if ((int)(char)this[0x808] == 4 - *piVar1) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    this[0x808] = SUB41(4 - *piVar1,0);
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    if (local_8 == ___stack_chk_guard) {
      ZombieAnimRig_TreasureYeti::SetDamageIndex
                ((ZombieAnimRig_TreasureYeti *)this_00,(int)(char)this[0x808]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

