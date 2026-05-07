// Class: OrchidMageSubsystem


/* OrchidMageSubsystem::onZombieDropHead(Zombie*) */

void OrchidMageSubsystem::onZombieDropHead(Zombie *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::StaticClassInit() */

void OrchidMageSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieMove");
    (*pcVar3)(plVar2,asStack_10,FUN_03468210,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"OrchidMageSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_034685cc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidMageSubsystem::StaticGetClass() */

long * OrchidMageSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidMageSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OrchidMageSubsystem::GetClass() const */

long * OrchidMageSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"OrchidMageSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::findPath(ZombieMove&) */

void __thiscall OrchidMageSubsystem::findPath(OrchidMageSubsystem *this,ZombieMove *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  int local_20 [6];
  long local_8;
  
  lVar6 = 0;
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  local_20[0] = 0;
  local_20[1] = 1;
  fVar7 = *(float *)(lVar4 + 4);
  local_20[2] = 2;
  local_20[3] = 3;
  local_20[4] = 4;
  iVar2 = BoardTransforms::GridToBoardSpaceY(0);
  iVar2 = (int)ABS((float)iVar2 - fVar7);
  do {
    iVar1 = local_20[lVar6];
    iVar3 = BoardTransforms::GridToBoardSpaceY(iVar1);
    if (ABS((float)iVar3 - fVar7) < (float)iVar2) {
      iVar5 = (int)lVar6;
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar1);
      iVar2 = (int)ABS((float)iVar2 - fVar7);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  if (local_8 == ___stack_chk_guard) {
    BoardTransforms::GridToBoardSpaceY(local_20[iVar5]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::moveToDestination(ZombieMove&) */

void __thiscall
OrchidMageSubsystem::moveToDestination(OrchidMageSubsystem *this,ZombieMove *param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  Zombie *this_00;
  float fVar7;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var2);
  if (*pfVar3 != *(float *)(param_1 + 0x10)) {
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    local_18 = *puVar4;
    fVar7 = *(float *)(param_1 + 0x18);
    local_10 = *(undefined4 *)(puVar4 + 1);
    if (fVar7 == 0.0) {
      this_00 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      iVar1 = Zombie::GetFacing(this_00);
      if (iVar1 == 0) {
        fVar7 = *(float *)(param_1 + 0x10) - (float)local_18;
        *(float *)(param_1 + 0x18) = fVar7;
      }
      else {
        fVar7 = (float)local_18 - *(float *)(param_1 + 0x10);
        *(float *)(param_1 + 0x18) = fVar7;
      }
    }
    if (param_1[9] == (ZombieMove)0x0) {
      local_18._4_4_ = local_18._4_4_ - fVar7;
      if (local_18._4_4_ <= *(float *)(param_1 + 0xc)) {
        param_1[10] = (ZombieMove)0x1;
        local_18 = CONCAT44(*(float *)(param_1 + 0xc),(float)local_18);
      }
    }
    else {
      fVar7 = fVar7 + local_18._4_4_;
      local_18 = CONCAT44(fVar7,(float)local_18);
      if (*(float *)(param_1 + 0xc) <= fVar7) {
        param_1[10] = (ZombieMove)0x1;
        local_18 = CONCAT44(*(float *)(param_1 + 0xc),(float)local_18);
      }
    }
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    puVar5 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    *(undefined4 *)(param_1 + 0x10) = *puVar5;
    iVar1 = BoardTransforms::GridToBoardSpaceY(0);
    local_20 = (float)iVar1;
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1 + -1);
    local_1c = (float)iVar1;
    pfVar3 = eastl::max_alt<float>(&local_20,(float *)((long)&local_18 + 4));
    local_18 = CONCAT44(*pfVar3,(float)local_18);
    pfVar3 = eastl::min_alt<float>(&local_1c,(float *)((long)&local_18 + 4));
    local_18 = CONCAT44(*pfVar3,(float)local_18);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::ChangePosition(ZombieMove&) */

void __thiscall OrchidMageSubsystem::ChangePosition(OrchidMageSubsystem *this,ZombieMove *param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined4 *puVar4;
  Zombie *pZVar5;
  float fVar6;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (*(float *)(param_1 + 0x1c) <= fVar6) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar2 = FUN_03461f68(*(undefined4 *)(lVar3 + 0x354),lVar3 + 0x358);
    if (cVar2 == '\0') {
      param_1[8] = (ZombieMove)0x0;
    }
    else {
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      Zombie::ResetTargetPostion(pZVar5);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_03461f88(lVar3 + 0x360);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      puVar4 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      uVar1 = *puVar4;
      param_1[8] = (ZombieMove)0x0;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar2 = FUN_03461f68(*(undefined4 *)(lVar3 + 0x354),lVar3 + 0x358);
    if (cVar2 == '\0') {
      DVec3::DVec3((DVec3 *)&local_18);
      local_18 = *(undefined4 *)(param_1 + 0x14);
      local_14 = *(undefined4 *)(param_1 + 0xc);
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      Zombie::SetTargetPosition(pZVar5,(SexyVector3 *)&local_18);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      FUN_03462168(lVar3 + 0x360);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::haveZombieMove(Zombie*) */

void OrchidMageSubsystem::haveZombieMove(Zombie *param_1)

{
  char cVar1;
  RtWeakPtrBase *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) break;
    this = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') break;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::setZombiePositionX(Zombie*, float) */

void OrchidMageSubsystem::setZombiePositionX(Zombie *param_1,float param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (cVar2 == '\0') break;
      this_00[8] = (RtWeakPtrBase)0x1;
      *(float *)(this_00 + 0x14) = param_2;
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::GetZombieMove(Zombie*) */

void __thiscall OrchidMageSubsystem::GetZombieMove(OrchidMageSubsystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  ZombieMove *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      ZombieMove::ZombieMove(in_x8);
LAB_034666b0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      ZombieMove::ZombieMove(in_x8,(ZombieMove *)this_00);
      goto LAB_034666b0;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* OrchidMageSubsystem::OrchidMageSubsystem() */

void __thiscall OrchidMageSubsystem::OrchidMageSubsystem(OrchidMageSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_066399b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<OrchidMageSubsystem,void(OrchidMageSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDropHead);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<OrchidMageSubsystem,void(OrchidMageSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDropHead,&local_50);
  return;
}


/* OrchidMageSubsystem::StaticNew() */

OrchidMageSubsystem * OrchidMageSubsystem::StaticNew(void)

{
  OrchidMageSubsystem *this;
  
  this = ::operator_new(0x28);
  OrchidMageSubsystem(this);
  return this;
}


/* OrchidMageSubsystem::~OrchidMageSubsystem() */

void __thiscall OrchidMageSubsystem::~OrchidMageSubsystem(OrchidMageSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066399b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ZombieMove,std::allocator<ZombieMove>>::~vector
            ((vector<ZombieMove,std::allocator<ZombieMove>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* OrchidMageSubsystem::~OrchidMageSubsystem() */

void __thiscall OrchidMageSubsystem::~OrchidMageSubsystem(OrchidMageSubsystem *this)

{
  ~OrchidMageSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::Update() */

void __thiscall OrchidMageSubsystem::Update(OrchidMageSubsystem *this)

{
  long lVar1;
  ZombieMove *pZVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03461fd8(uVar5,*(undefined8 *)(this + 0x18));
  if (lVar1 != 0) {
    do {
      pZVar2 = (ZombieMove *)FUN_03462000(uVar5,uVar4);
      if (pZVar2[8] == (ZombieMove)0x0) {
        moveToDestination(this,pZVar2);
        if (pZVar2[10] != (ZombieMove)0x0) goto LAB_0346a718;
      }
      else {
        ChangePosition(this,pZVar2);
        if (pZVar2[8] == (ZombieMove)0x0) {
LAB_0346a718:
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x10));
          local_18 = __gnu_cxx::
                     __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                     ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                  *)&local_20,uVar4);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<ZombieMove,std::allocator<ZombieMove>>::erase
                    ((vector<ZombieMove,std::allocator<ZombieMove>> *)(this + 0x10),local_10);
        }
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(this + 0x10);
      uVar3 = FUN_03461fd8(uVar5,*(undefined8 *)(this + 0x18));
    } while (uVar4 < uVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::onZombieDestroyed(Zombie*) */

void OrchidMageSubsystem::onZombieDestroyed(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_0346a7f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<ZombieMove,std::allocator<ZombieMove>>::erase
                ((vector<ZombieMove,std::allocator<ZombieMove>> *)this,local_10);
      goto LAB_0346a7f8;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageSubsystem::addZombieToVector(ZombieMove&) */

void __thiscall
OrchidMageSubsystem::addZombieToVector(OrchidMageSubsystem *this,ZombieMove *param_1)

{
  vector<ZombieMove,std::allocator<ZombieMove>> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined4 *puVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  RtWeakPtrBase *this_01;
  code *pcVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  puVar5 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var4);
  pcVar8 = *(code **)(*(long *)this + 0x88);
  *(undefined4 *)(param_1 + 0x10) = *puVar5;
  iVar3 = (*pcVar8)(this,param_1);
  *(float *)(param_1 + 0xc) = (float)iVar3;
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var4);
  if ((float)iVar3 - *(float *)(lVar6 + 4) < 0.0) {
    param_1[9] = (ZombieMove)0x0;
  }
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_1);
  if (pRVar7 != (ResourceInfo *)0x0) {
    this_00 = (vector<ZombieMove,std::allocator<ZombieMove>> *)(this + 0x10);
    cVar1 = std::vector<ZombieMove,std::allocator<ZombieMove>>::empty(this_00);
    if (cVar1 != '\0') {
      std::vector<ZombieMove,std::allocator<ZombieMove>>::push_back(this_00,param_1);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    do {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) goto LAB_0346af14;
      this_01 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)param_1);
      if (cVar1 != '\0') goto LAB_0346af14;
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (!bVar2);
    std::vector<ZombieMove,std::allocator<ZombieMove>>::push_back(this_00,param_1);
  }
LAB_0346af14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

