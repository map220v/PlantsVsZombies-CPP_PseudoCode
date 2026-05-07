// Class: ZombieHeianSushi


/* ZombieHeianSushi::onEnterState_Spawning(ZombieState) */

void ZombieHeianSushi::onEnterState_Spawning(long *param_1)

{
  (**(code **)(*param_1 + 0xa38))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::onThrow() */

void __thiscall ZombieHeianSushi::onThrow(ZombieHeianSushi *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa50))(this,this + 0x804);
  std::string::string(asStack_10,"Play_TombRaiser_Throw");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianSushi::~ZombieHeianSushi() */

void __thiscall ZombieHeianSushi::~ZombieHeianSushi(ZombieHeianSushi *this)

{
  *(undefined ***)this = &PTR_GetClass_06887b80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianSushi_068885f0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieHeianSushi::~ZombieHeianSushi() */

void __thiscall ZombieHeianSushi::~ZombieHeianSushi(ZombieHeianSushi *this)

{
  ~ZombieHeianSushi(this + -0x10);
  return;
}


/* ZombieHeianSushi::~ZombieHeianSushi() */

void __thiscall ZombieHeianSushi::~ZombieHeianSushi(ZombieHeianSushi *this)

{
  ~ZombieHeianSushi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHeianSushi::~ZombieHeianSushi() */

void __thiscall ZombieHeianSushi::~ZombieHeianSushi(ZombieHeianSushi *this)

{
  ~ZombieHeianSushi(this + -0x10);
  return;
}


/* ZombieHeianSushi::ZombieHeianSushi() */

void __thiscall ZombieHeianSushi::ZombieHeianSushi(ZombieHeianSushi *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06887b80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianSushi_068885f0;
  Sexy::Point::Point((Point *)(this + 0x804));
  return;
}


/* ZombieHeianSushi::StaticNew() */

ZombieHeianSushi * ZombieHeianSushi::StaticNew(void)

{
  ZombieHeianSushi *this;
  
  this = ::operator_new(0x810);
  ZombieHeianSushi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::updateState_Waiting() */

void __thiscall ZombieHeianSushi::updateState_Waiting(ZombieHeianSushi *this)

{
  char cVar1;
  ZombieHeianSushiProps *pZVar2;
  float fVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombieHeianSushiProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar2 + 0x210);
  Sexy::Point::Point(aPStack_10);
  if (fVar4 < fVar3) {
    cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
    }
    else {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianSushi::onSpawnAnimDone() */

void __thiscall ZombieHeianSushi::onSpawnAnimDone(ZombieHeianSushi *this)

{
  char cVar1;
  ZombieHeianSushiProps *pZVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieHeianSushiProps>((Zombie *)this);
  fVar5 = (float)BoardHelpers::ApplyLevelBasedModifierValue(*(float *)(pZVar2 + 0x214),0xe,0x11,1);
  pcVar3 = *(code **)(*(long *)this + 0x328);
  *(float *)(this + 0x800) = fVar5 + fVar4;
  cVar1 = (*pcVar3)(this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::throwSushi(Sexy::Point const&) */

void __thiscall ZombieHeianSushi::throwSushi(ZombieHeianSushi *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  ZombieHeianSushiProps *pZVar6;
  TombraiserProjectile *this_01;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_30;
  int local_2c;
  string asStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_0464fde8(*(undefined8 *)(lVar4 + 0x20));
  uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_0464fde8(*(undefined8 *)(lVar4 + 0x20));
  lVar7 = *(long *)(lVar4 + 0x50);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_0464fde8(*(undefined8 *)(lVar4 + 0x20));
  *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar4 + 0x50) + 0xc) + -1);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_28,"zombie_egypt_tr_bone");
  PopAnimRig::CalcSymbolRect(this_00,asStack_28,(TRect *)&local_18);
  std::string::~string(asStack_28);
  nop();
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_0464fde8(*(undefined8 *)(lVar4 + 0x20));
  *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc) = uVar1;
  fVar12 = *(float *)(this + 0x1c);
  fVar9 = (float)FUN_0464fe90(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
  iVar2 = FUN_0464ffc4(local_18 + local_10 / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar10 = *(float *)(lVar4 + 0xc4);
  iVar3 = FUN_0464ffc4(local_14 + local_c / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar11 = *(float *)(lVar4 + 200);
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  pZVar6 = Zombie::GetProps<ZombieHeianSushiProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(pZVar6 + 0x218));
  this_01 = (TombraiserProjectile *)
            Board::AddProjectile
                      ((Board *)(float)(int)((fVar9 - fVar10) + (float)iVar2),(float)(int)fVar12,
                       (float)-(int)((float)iVar3 - fVar11),uVar8,asStack_28,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  TombraiserProjectile::SetGridTarget(this_01,param_1);
  BoardTransforms::GridToBoardSpace(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
  Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)asStack_28,250.0,1.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::startSpawnAnim() */

void __thiscall ZombieHeianSushi::startSpawnAnim(ZombieHeianSushi *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_a0,"Play_TombRaiser_Puke");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_a0,0.0);
  std::string::~string(asStack_a0);
  nop();
  (**(code **)(*(long *)this + 0xa58))(this,this + 0x804);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string(asStack_b8,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_c0,asStack_b8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onThrow");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_a8,asStack_a0);
  (*pcVar2)(pZVar1,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_b8);
  nop();
  Sexy::RtId::~RtId(aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::findTargetPosition(Sexy::Point&) */

void __thiscall ZombieHeianSushi::findTargetPosition(ZombieHeianSushi *this,Point *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  ulong uVar6;
  TPoint *pTVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  local_28 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  local_28 = local_28 + -2;
  local_20 = 1;
  piVar5 = eastl::max_alt<int>(&local_28,(int *)&local_20);
  local_28 = *piVar5 + 3;
  local_20 = 9;
  iVar10 = *piVar5 + -1;
  piVar5 = eastl::min_alt<int>(&local_28,(int *)&local_20);
  iVar1 = *piVar5;
  iVar3 = BoardTransforms::BoardSpaceToGridY(pfVar4[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    if (iVar1 <= iVar10) {
LAB_04652100:
      uVar9 = CONCAT44(uStack_1c,local_20);
      iVar10 = 0;
      uVar6 = FUN_0464fe7c(uVar9,local_18);
      if (uVar6 != 0) {
        uVar8 = 0;
        iVar10 = 0;
        while ((uVar8 < uVar6 && (iVar10 == 0))) {
          pTVar7 = (TPoint *)FUN_0464fe88(uVar9,uVar8);
          Sexy::Point::Point((Point *)&local_28,pTVar7);
          cVar2 = canSpawnSushiAt(local_28,iStack_24);
          if (cVar2 != '\0') {
            iVar10 = 1;
            *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
          }
          uVar9 = CONCAT44(uStack_1c,local_20);
          uVar8 = uVar8 + 1;
          uVar6 = FUN_0464fe7c(uVar9,local_18);
        }
      }
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar10);
    }
    cVar2 = canSpawnSushiAt(iVar10,iVar3);
    if (cVar2 != '\0') {
      Sexy::Point::Point((Point *)&local_28);
      local_28 = iVar10;
      iStack_24 = iVar3;
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_28);
      goto LAB_04652100;
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::StaticClassInit() */

void ZombieHeianSushi::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieHeianSushi");
      (*pcVar4)(plVar1,asStack_150,FUN_04652b70,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianSushi,void(ZombieHeianSushi::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieHeianSushi,void(ZombieHeianSushi::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianSushi,void(ZombieHeianSushi::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SS_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04652748(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianSushi,void(ZombieHeianSushi::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieHeianSushi,void(ZombieHeianSushi::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHeianSushi,void(ZombieHeianSushi::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SS_Spawning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04652748(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHeianSushi::StaticGetClass() */

long * ZombieHeianSushi::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianSushi::GetClass() const */

long * ZombieHeianSushi::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianSushi::onPlaceOnBoard() */

void __thiscall ZombieHeianSushi::onPlaceOnBoard(ZombieHeianSushi *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianSushi::updateState_Walk() */

void __thiscall ZombieHeianSushi::updateState_Walk(ZombieHeianSushi *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((*pfVar3 <= (float)iVar2) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    Sexy::Point::Point(aPStack_10);
    fVar4 = (float)PVZ_T();
    if ((*(float *)(this + 0x800) < fVar4) &&
       (cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_04653028;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
LAB_04653028:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

