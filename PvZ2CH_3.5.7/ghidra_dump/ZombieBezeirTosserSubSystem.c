// Class: ZombieBezeirTosserSubSystem


/* ZombieBezeirTosserSubSystem::SetZombieFlyEndFunc(Sexy::Delegate1<Zombie*>) */

void __thiscall
ZombieBezeirTosserSubSystem::SetZombieFlyEndFunc
          (ZombieBezeirTosserSubSystem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x88),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::StaticClassInit() */

void ZombieBezeirTosserSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"TossedBezeirZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_046dce44,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieBezeirTosserSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046ddf58,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBezeirTosserSubSystem::StaticGetClass() */

long * ZombieBezeirTosserSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBezeirTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBezeirTosserSubSystem::GetClass() const */

long * ZombieBezeirTosserSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBezeirTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBezeirTosserSubSystem::SetZombieFlyFunc(Sexy::Delegate1<Zombie*>) */

void __thiscall
ZombieBezeirTosserSubSystem::SetZombieFlyFunc(ZombieBezeirTosserSubSystem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x58),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::AssignBezeirConfig(Direction, Zombie*, Sexy::SexyVector2) */

void ZombieBezeirTosserSubSystem::AssignBezeirConfig
               (_ccBezierConfig *param_1,float param_2,float param_3,undefined8 param_4,int param_5,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_6)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _ccBezierConfig::_ccBezierConfig(param_1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_20)
  ;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_6);
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,param_2,param_3);
  *(undefined8 *)param_1 = local_10;
  if (param_5 == 0) {
    iVar1 = iVar1 << 1;
  }
  else if (param_5 != 1) {
    if (param_5 == 2) {
      local_20 = (float)iVar1 + fVar4;
      fStack_1c = (float)(iVar2 << 1) + fVar5;
      local_18 = CONCAT44(fStack_1c,local_20);
      *(undefined8 *)(param_1 + 8) = local_18;
      *(undefined8 *)(param_1 + 0x10) = local_18;
    }
    else {
      if (param_5 == 3) {
        fStack_1c = (float)iVar2 + fVar5;
        local_20 = (float)(iVar1 << 1) + fVar4;
      }
      else if (param_5 == 4) {
        local_20 = (float)(iVar1 << 1) + fVar4;
        fStack_1c = fVar5;
      }
      else if (param_5 == 5) {
        local_20 = (float)iVar1 + fVar4;
        fStack_1c = fVar5;
      }
      else {
        if (param_5 != 6) {
          if (param_5 == 7) {
            fStack_1c = fVar5 - (float)iVar2;
            local_20 = fVar4 - (float)(iVar1 << 1);
            local_18 = CONCAT44((float)iVar2 + fVar5,local_20);
            *(ulong *)(param_1 + 8) = CONCAT44(fStack_1c,local_20);
            *(undefined8 *)(param_1 + 0x10) = local_18;
          }
          else if (param_5 == 8) {
            fStack_1c = fVar5 - (float)iVar2;
            local_20 = fVar4 - (float)iVar1;
            *(ulong *)(param_1 + 8) = CONCAT44(fStack_1c,local_20);
            local_18 = CONCAT44((float)iVar2 + fVar5,local_20);
            *(undefined8 *)(param_1 + 0x10) = local_18;
          }
          goto LAB_046db600;
        }
        local_20 = (float)iVar1 + fVar4;
        fStack_1c = fVar5;
      }
      local_18 = CONCAT44(fStack_1c,local_20);
      *(undefined8 *)(param_1 + 8) = local_18;
      *(undefined8 *)(param_1 + 0x10) = local_18;
    }
    goto LAB_046db600;
  }
  local_20 = fVar4 - (float)iVar1;
  *(ulong *)(param_1 + 8) = CONCAT44(fVar5,local_20);
  local_18 = CONCAT44((float)(iVar2 << 1) + fVar5,local_20);
  *(undefined8 *)(param_1 + 0x10) = local_18;
  fStack_1c = fVar5;
LAB_046db600:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* ZombieBezeirTosserSubSystem::CalcDirection(Sexy::Point, Sexy::Point) */

undefined4 __thiscall
ZombieBezeirTosserSubSystem::CalcDirection(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  iVar3 = iVar2 - iVar1;
  if (*param_3 - *param_2 < 1) {
    if (*param_3 == *param_2) {
      if (iVar3 < 0) {
        return 1;
      }
      uVar4 = 8;
      if (iVar2 != iVar1) {
        uVar4 = 5;
      }
      return uVar4;
    }
    uVar4 = 2;
    if (-1 < iVar3) {
      uVar4 = 3;
      if (iVar2 != iVar1) {
        uVar4 = 4;
      }
      return uVar4;
    }
  }
  else {
    if (iVar3 < 0) {
      return 0;
    }
    uVar4 = 7;
    if (iVar2 != iVar1) {
      uVar4 = 6;
    }
  }
  return uVar4;
}


/* ZombieBezeirTosserSubSystem::registerForEvents() */

void __thiscall ZombieBezeirTosserSubSystem::registerForEvents(ZombieBezeirTosserSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieBezeirTosserSubSystem,void(ZombieBezeirTosserSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::ZombieBezeirTosserSubSystem() */

void __thiscall
ZombieBezeirTosserSubSystem::ZombieBezeirTosserSubSystem(ZombieBezeirTosserSubSystem *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b6dc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x58));
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x88));
  Sexy::Delegate1<Zombie*>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x58),(Delegate2 *)aDStack_38);
  Sexy::Delegate1<Zombie*>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x88),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBezeirTosserSubSystem::StaticNew() */

ZombieBezeirTosserSubSystem * ZombieBezeirTosserSubSystem::StaticNew(void)

{
  ZombieBezeirTosserSubSystem *this;
  
  this = ::operator_new(0xb8);
  ZombieBezeirTosserSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::AssignBezeirTarget(Direction, Zombie*, Sexy::SexyVector2, float) */

void ZombieBezeirTosserSubSystem::AssignBezeirTarget
               (undefined4 param_1,undefined4 param_2,ActionSubSystem *param_3)

{
  ActionSubSystem *pAVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  undefined1 auStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AssignBezeirConfig(auStack_68,param_1,param_2);
  pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)aRStack_90);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string(asStack_78,"OnZombieFlyEnd");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,asStack_78)
  ;
  ActionSubSystem::AddActionBezierTo(param_3._0_4_,pAVar1,aRStack_70,auStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBezeirTosserSubSystem::~ZombieBezeirTosserSubSystem() */

void __thiscall
ZombieBezeirTosserSubSystem::~ZombieBezeirTosserSubSystem(ZombieBezeirTosserSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6dc0;
  std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::~vector
            ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)(this + 0x40));
  std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::~vector
            ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieBezeirTosserSubSystem::~ZombieBezeirTosserSubSystem() */

void __thiscall
ZombieBezeirTosserSubSystem::~ZombieBezeirTosserSubSystem(ZombieBezeirTosserSubSystem *this)

{
  ~ZombieBezeirTosserSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::OnZombieFlyEnd(Zombie*) */

void __thiscall
ZombieBezeirTosserSubSystem::OnZombieFlyEnd(ZombieBezeirTosserSubSystem *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_046da994(uVar6,*(undefined8 *)(this + 0x30));
  if (param_1 != (Zombie *)0x0) {
    uVar5 = 0;
    uVar7 = 0;
    if (lVar3 != 0) {
      do {
        lVar3 = FUN_046da9d0(uVar6,uVar5);
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)(lVar3 + 0x40),(RtWeakPtrBase *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        if (cVar1 != '\0') {
          lVar3 = FUN_046da9d0(*(undefined8 *)(this + 0x28),uVar5);
          if (*(char *)(lVar3 + 0x92) != '\0') {
            Zombie::EndCondition(param_1,2);
          }
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x28));
          local_18 = __gnu_cxx::
                     __normal_iterator<TossedBezeirZombie*,std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>>
                     ::operator+((__normal_iterator<TossedBezeirZombie*,std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>>
                                  *)&local_20,(long)(int)uVar7);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::erase
                    ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)(this + 0x28),
                     local_10);
          break;
        }
        uVar6 = *(undefined8 *)(this + 0x28);
        uVar5 = uVar5 + 1;
        uVar7 = uVar5 & 0xffffffff;
        uVar4 = FUN_046da994(uVar6,*(undefined8 *)(this + 0x30));
      } while (uVar5 < uVar4);
    }
  }
  iVar2 = FUN_046da890(*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0xa0));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x88),(SexyURL *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::MoveToTarget(BoardEntity*, Zombie*, Sexy::SexyVector2, float, bool)
    */

void ZombieBezeirTosserSubSystem::MoveToTarget
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,
               ZombieBezeirTosserSubSystem *param_1,undefined8 param_5,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_6,char param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  Zombie *pZVar3;
  undefined1 auStack_110 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_108 [8];
  undefined8 local_100;
  undefined4 local_f8;
  TossedBezeirZombie aTStack_f0 [64];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b0 [81];
  undefined1 local_5f;
  char local_5e;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TossedBezeirZombie::TossedBezeirZombie(aTStack_f0);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_6);
  local_100 = *puVar2;
  local_f8 = *(undefined4 *)(puVar2 + 1);
  Sexy::SexyVector3::operator=((SexyVector3 *)aTStack_f0,(SexyVector3 *)&local_100);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b0,(RtWeakPtrBase *)aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_108);
  local_5f = Zombie::IsFlying((Zombie *)param_6);
  local_5e = param_7;
  std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::push_back
            ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)(param_1 + 0x40),
             aTStack_f0);
  if (param_7 != '\0') {
    pZVar3._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3._0_4_,0,param_6,2,1);
  }
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  uVar1 = CalcDirection(param_1,auStack_110,aRStack_108);
  AssignBezeirTarget(param_1_00,param_2,param_3,param_1,uVar1,param_6);
  TossedBezeirZombie::~TossedBezeirZombie(aTStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::onZombieDestroyed(Zombie*) */

void ZombieBezeirTosserSubSystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBezeirTosserSubSystem::Update() */

void __thiscall ZombieBezeirTosserSubSystem::Update(ZombieBezeirTosserSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  uVar11 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  uVar3 = FUN_046da93c(uVar11,*(undefined8 *)(this + 0x18));
  if (uVar3 != 0) {
    do {
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar4 = FUN_046da994(uVar10,*(undefined8 *)(this + 0x30));
      lVar7 = 0;
      do {
        iVar2 = (int)lVar7;
        if (lVar7 == lVar4) goto LAB_046e4034;
        lVar5 = FUN_046da9d0(uVar10,lVar7);
        pRVar6 = (RtWeakPtrBase *)FUN_046da988(uVar11,uVar9);
        cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar5 + 0x40),pRVar6);
        lVar7 = lVar7 + 1;
      } while (cVar1 == '\0');
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = __gnu_cxx::
                 __normal_iterator<TossedBezeirZombie*,std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>>
                 ::operator+((__normal_iterator<TossedBezeirZombie*,std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>>
                              *)&local_20,(long)iVar2);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::erase
                ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)this_00,local_10);
      uVar11 = *(undefined8 *)(this + 0x10);
      uVar3 = FUN_046da93c(uVar11,*(undefined8 *)(this + 0x18));
LAB_046e4034:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_01);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_01);
  std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::
  insert<__gnu_cxx::__normal_iterator<TossedBezeirZombie*,std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>>,void>
            ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)this_00,local_10,
             uVar11,uVar10);
  std::vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>>::clear
            ((vector<TossedBezeirZombie,std::allocator<TossedBezeirZombie>> *)this_01);
  iVar2 = FUN_046da890(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x70));
  uVar3 = 0;
  if (iVar2 != 0) {
    while( true ) {
      uVar11 = *(undefined8 *)(this + 0x28);
      uVar9 = FUN_046da994(uVar11,*(undefined8 *)(this + 0x30));
      if (uVar9 <= uVar3) break;
      lVar7 = FUN_046da9d0(uVar11,uVar3);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x40));
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x58),(SexyURL *)pRVar8);
      uVar3 = uVar3 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

