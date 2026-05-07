// Class: CardGameZombiesAteYourBaseModule


/* CardGameZombiesAteYourBaseModule::startTestingForZombieWin() */

void __thiscall
CardGameZombiesAteYourBaseModule::startTestingForZombieWin(CardGameZombiesAteYourBaseModule *this)

{
  this[0x18] = (CardGameZombiesAteYourBaseModule)0x1;
  return;
}


/* CardGameZombiesAteYourBaseModule::stopTestingForZombieWin() */

void __thiscall
CardGameZombiesAteYourBaseModule::stopTestingForZombieWin(CardGameZombiesAteYourBaseModule *this)

{
  this[0x18] = (CardGameZombiesAteYourBaseModule)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::StaticClassInit() */

void CardGameZombiesAteYourBaseModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameZombiesAteYourBaseModule");
    (*pcVar2)(plVar1,asStack_10,FUN_046d003c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombiesAteYourBaseModule::StaticGetClass() */

long * CardGameZombiesAteYourBaseModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameZombiesAteYourBaseModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameZombiesAteYourBaseModule::GetMaxHitpoints() const */

undefined4 __thiscall
CardGameZombiesAteYourBaseModule::GetMaxHitpoints(CardGameZombiesAteYourBaseModule *this)

{
  return *(undefined4 *)(this + 0x20);
}


/* CardGameZombiesAteYourBaseModule::GetHitpoints() const */

undefined4 __thiscall
CardGameZombiesAteYourBaseModule::GetHitpoints(CardGameZombiesAteYourBaseModule *this)

{
  return *(undefined4 *)(this + 0x1c);
}


/* CardGameZombiesAteYourBaseModule::addToRenderQueue(RenderQueue*) */

void __thiscall
CardGameZombiesAteYourBaseModule::addToRenderQueue
          (CardGameZombiesAteYourBaseModule *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::AddMessage(Sexy::RtWeakPtr<Zombie>, int, Sexy::Color, float) */

void __thiscall
CardGameZombiesAteYourBaseModule::AddMessage
          (float param_1,CardGameZombiesAteYourBaseModule *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_3,int param_4,Color *param_5)

{
  int iVar1;
  int iVar2;
  AnimationController *this_00;
  long lVar3;
  AnimationMgr *this_01;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_18,L"[CARD_GAME_BASE_HITPOINT]",auStack_28);
  TodReplaceNumberString(awStack_18,L"{NUMS}",param_4);
  FUN_05476c50(awStack_18);
  nop();
  this_00 = (AnimationController *)DrawMessage::Create(awStack_20);
  AnimationController::SetDuration(this_00,param_1);
  FUN_046cdf40(this_00 + 0x1c);
  DrawMessage::SetColor((DrawMessage *)this_00,param_5);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  uVar7 = *(undefined4 *)(lVar3 + 0x1c);
  uVar4 = FUN_046cdf4c(*(undefined4 *)(lVar3 + 0x18),uVar7,*(undefined4 *)(lVar3 + 0x20));
  fVar5 = (float)FUN_046ce1d4(uVar4);
  fVar6 = (float)FUN_046ce1d4(uVar7);
  iVar1 = FUN_046ce1c0(100);
  iVar2 = FUN_046ce1c0(0x32);
  Sexy::Insets::Insets((Insets *)awStack_18,(int)fVar5,(int)fVar6,iVar1,iVar2);
  DrawMessage::SetRect((DrawMessage *)this_00,(TRect *)awStack_18);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  fVar5 = (float)FUN_046cdf34(*(undefined4 *)(lVar3 + 0x10));
  this_01 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  AnimationMgr::Add(this_01,this_00,fVar5);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::initializeModule() */

void __thiscall
CardGameZombiesAteYourBaseModule::initializeModule(CardGameZombiesAteYourBaseModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this[0x18] = (CardGameZombiesAteYourBaseModule)0x0;
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = *(undefined4 *)(pRVar3 + 0x44);
  uVar2 = *(undefined4 *)(pRVar3 + 0x48);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameZombiesAteYourBaseModule::checkDoesProjectileHit(Sexy::RtWeakPtr<Projectile>) */

bool __thiscall
CardGameZombiesAteYourBaseModule::checkDoesProjectileHit
          (CardGameZombiesAteYourBaseModule *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  ResilienceTutorialIntroProperties *pRVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar2;
  float fVar3;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = *(float *)(pRVar1 + 0x40);
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar3 = fVar3 + 30.0;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  return *pfVar2 - 200.0 <= fVar3;
}


/* CardGameZombiesAteYourBaseModule::checkDoesZombieWin(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
CardGameZombiesAteYourBaseModule::checkDoesZombieWin
          (CardGameZombiesAteYourBaseModule *this,RtWeakPtr *param_2)

{
  char cVar1;
  ResourceInfo *this_00;
  ResilienceTutorialIntroProperties *pRVar2;
  float *pfVar3;
  float fVar4;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar1 = Zombie::GetCanTriggerWin((Zombie *)this_00);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')
       ) && (cVar1 = Zombie::IsControlled((Zombie *)this_00), cVar1 == '\0')) &&
     (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0')) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar4 = *(float *)(pRVar2 + 0x40);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar4 = fVar4 + 30.0;
    }
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    return *pfVar3 - 200.0 <= fVar4;
  }
  return false;
}


/* CardGameZombiesAteYourBaseModule::TakeDamage(float) */

void __thiscall
CardGameZombiesAteYourBaseModule::TakeDamage(CardGameZombiesAteYourBaseModule *this,float param_1)

{
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) - param_1;
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,param_1);
  if (0.0 <= *(float *)(this + 0x1c)) {
    return;
  }
  Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),8);
  return;
}


/* CardGameZombiesAteYourBaseModule::onAirshipTakeDamage(float) */

void CardGameZombiesAteYourBaseModule::onAirshipTakeDamage(float param_1)

{
  long in_x0;
  
  if (0.0 <= *(float *)(in_x0 + 0x1c)) {
    MessageRouter::Post<float,float>
              ((_func_void_float *)gMessageRouter,
               (*(float *)(in_x0 + 0x1c) / *(float *)(in_x0 + 0x20)) * 100.0);
    return;
  }
  return;
}


/* CardGameZombiesAteYourBaseModule::CardGameZombiesAteYourBaseModule() */

void __thiscall
CardGameZombiesAteYourBaseModule::CardGameZombiesAteYourBaseModule
          (CardGameZombiesAteYourBaseModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (CardGameZombiesAteYourBaseModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_068b3ec0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* CardGameZombiesAteYourBaseModule::StaticNew() */

CardGameZombiesAteYourBaseModule * CardGameZombiesAteYourBaseModule::StaticNew(void)

{
  CardGameZombiesAteYourBaseModule *this;
  
  this = ::operator_new(0x60);
  CardGameZombiesAteYourBaseModule(this);
  return this;
}


/* CardGameZombiesAteYourBaseModule::~CardGameZombiesAteYourBaseModule() */

void __thiscall
CardGameZombiesAteYourBaseModule::~CardGameZombiesAteYourBaseModule
          (CardGameZombiesAteYourBaseModule *this)

{
  bool bVar1;
  char cVar2;
  AnimationMgr *this_00;
  long *plVar3;
  RtWeakPtr *this_01;
  
  this_01 = (RtWeakPtr *)(this + 0x58);
  *(undefined ***)this = &PTR_GetModuleClass_068b3ec0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    this_00 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    AnimationMgr::Clear(this_00);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar3 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x40));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardGameZombiesAteYourBaseModule::~CardGameZombiesAteYourBaseModule() */

void __thiscall
CardGameZombiesAteYourBaseModule::~CardGameZombiesAteYourBaseModule
          (CardGameZombiesAteYourBaseModule *this)

{
  ~CardGameZombiesAteYourBaseModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::CheckDestroyProject(Sexy::RtWeakPtr<Projectile>) */

void __thiscall
CardGameZombiesAteYourBaseModule::CheckDestroyProject
          (CardGameZombiesAteYourBaseModule *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    if (*pfVar3 <= 0.0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x40);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Projectile>*,std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>>,Sexy::RtWeakPtr<Projectile>>
                           (uVar4,uVar5,param_2);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::erase
                ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
                 this_00,local_10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
      if (cVar2 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        (**(code **)(*plVar6 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::CheckDestroyZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
CardGameZombiesAteYourBaseModule::CheckDestroyZombie
          (CardGameZombiesAteYourBaseModule *this,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  ResourceInfo *this_01;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar1 = Zombie::GetCanTriggerWin((Zombie *)this_01);
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 == '\0')) &&
     ((cVar1 = Zombie::IsControlled((Zombie *)this_01), cVar1 == '\0' &&
      (pfVar2 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this_01), *pfVar2 <= 0.0)))) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x28);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                         (uVar3,uVar4,param_2);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
               local_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      (**(code **)(*plVar5 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::onUpdate() */

void __thiscall CardGameZombiesAteYourBaseModule::onUpdate(CardGameZombiesAteYourBaseModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  AnimationMgr *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  int extraout_w1;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38 [2];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (CardGameZombiesAteYourBaseModule)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x28);
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)local_38);
      Sexy::RtId::~RtId((RtId *)local_38);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_50);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_40 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                           (uVar3,uVar4,aRStack_48);
      local_38[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)aRStack_48);
        cVar2 = checkDoesZombieWin(this,(RtId *)local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        if (cVar2 != '\0') {
          *(float *)(this + 0x1c) = *(float *)(this + 0x1c) - *(float *)(this + 0x24);
          MessageRouter::Post<float,float>
                    ((_func_void_float *)gMessageRouter,*(float *)(this + 0x24));
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     this_00,(RtWeakPtr *)aRStack_48);
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          Zombie::ApplyCondition((Zombie *)0x42c60000,0,uVar3,0x61,1);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          fVar5 = *(float *)(this + 0x24);
          Sexy::Color::Color((Color *)local_38,2);
          AddMessage((CardGameZombiesAteYourBaseModule *)0x3ecccccd,this,
                     (__normal_iterator *)&local_40,(int)fVar5,(RtId *)local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    if (*(float *)(this + 0x1c) < 0.0) {
      Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),8);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x58));
  if (bVar1) {
    this_01 = (AnimationMgr *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    AnimationMgr::Update(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameZombiesAteYourBaseModule::registerForEvents() */

void __thiscall
CardGameZombiesAteYourBaseModule::registerForEvents(CardGameZombiesAteYourBaseModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)(RenderQueue*)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startTestingForZombieWin);
  Sexy::Delegate0::
  Delegate0<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopTestingForZombieWin);
  Sexy::Delegate0::
  Delegate0<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAirshipTakeDamage);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<CardGameZombiesAteYourBaseModule,void(CardGameZombiesAteYourBaseModule::*)(float)>>
            ((MessageRouter *)puVar1,Message::AirshipTakeDamage,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

