// Class: ZombieEliteRomanHealer


/* ZombieEliteRomanHealer::updateState_Eat() */

void __thiscall ZombieEliteRomanHealer::updateState_Eat(ZombieEliteRomanHealer *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x428))();
  if (lVar2 == 0) {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      if (this[0x899] == (ZombieEliteRomanHealer)0x0) {
        Zombie::setZombieState((Zombie *)this,1);
        return;
      }
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x958))(this,lVar2);
  }
  return;
}


/* ZombieEliteRomanHealer::onDraw(Sexy::Graphics*) */

void __thiscall ZombieEliteRomanHealer::onDraw(ZombieEliteRomanHealer *this,Graphics *param_1)

{
  Zombie::onDraw((Graphics *)this);
  (**(code **)(*(long *)(this + 0x858) + 0x10))(this + 0x858,param_1);
  return;
}


/* ZombieEliteRomanHealer::updateState_Walk() */

void __thiscall ZombieEliteRomanHealer::updateState_Walk(ZombieEliteRomanHealer *this)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((this[0x899] != (ZombieEliteRomanHealer)0x0) && (*pfVar2 < (float)iVar1)) {
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanHealer::StaticClassInit() */

void ZombieEliteRomanHealer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteRomanHealer");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef5a6c,0x8a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteRomanHealer::StaticGetClass() */

long * ZombieEliteRomanHealer::StaticGetClass(void)

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
  uVar2 = ZombieRomanHealer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanHealer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteRomanHealer::GetClass() const */

long * ZombieEliteRomanHealer::GetClass(void)

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
  uVar2 = ZombieRomanHealer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteRomanHealer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteRomanHealer::onPlaceOnBoard() */

void __thiscall ZombieEliteRomanHealer::onPlaceOnBoard(ZombieEliteRomanHealer *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  undefined4 *puVar2;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(int *)(lVar1 + 0x1dc) != 2) {
    return;
  }
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SpawnZombieEffect(*puVar2,puVar2[1],puVar2[2],this + 0x858);
  return;
}


/* ZombieEliteRomanHealer::onUpdate() */

void __thiscall ZombieEliteRomanHealer::onUpdate(ZombieEliteRomanHealer *this)

{
  ZombieEliteModule *this_00;
  undefined4 *puVar1;
  float fVar2;
  
  Zombie::onUpdate((Zombie *)this);
  this_00 = (ZombieEliteModule *)(this + 0x858);
  fVar2 = (float)FUN_04ef580c(*(undefined4 *)(this + 0x280));
  ZombieEliteModule::SetCurrentHealth(this_00,fVar2);
  puVar1 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SetPosition(*puVar1,puVar1[1],puVar1[2],this_00);
  fVar2 = (float)PVZ_T();
  HeroPlantTalentButton::OnSelect
            ((HeroPlantTalentButton *)this_00,fVar2 <= *(float *)(this + 0x1bc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanHealer::PlayCureAnim() */

void __thiscall ZombieEliteRomanHealer::PlayCureAnim(ZombieEliteRomanHealer *this)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this[0x898] = (ZombieEliteRomanHealer)0x1;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"power_up");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieEliteRomanHealer,void(ZombieEliteRomanHealer::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteRomanHealer::updateState_Idle() */

void __thiscall ZombieEliteRomanHealer::updateState_Idle(ZombieEliteRomanHealer *this)

{
  long lVar1;
  float fVar2;
  
  ZombieRomanHealer::updateState_Idle((ZombieRomanHealer *)this);
  if (this[0x898] == (ZombieEliteRomanHealer)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x890) < fVar2) {
      Zombie::setZombieState((Zombie *)this,1,0);
      this[0x899] = (ZombieEliteRomanHealer)0x0;
      return;
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x894) < fVar2) {
      PlayCureAnim(this);
    }
    lVar1 = (**(code **)(*(long *)this + 0x428))(this);
    if (lVar1 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
      return;
    }
  }
  return;
}


/* ZombieEliteRomanHealer::ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ZombieRomanHealer::ZombieRomanHealer((ZombieRomanHealer *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x858));
  *(undefined ***)this = &PTR_GetClass_06a05a90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteRomanHealer_06a06500;
  *(undefined ***)(this + 0x858) = &PTR__ZombieEliteRomanHealer_06a06530;
  return;
}


/* ZombieEliteRomanHealer::StaticNew() */

ZombieEliteRomanHealer * ZombieEliteRomanHealer::StaticNew(void)

{
  ZombieEliteRomanHealer *this;
  
  this = ::operator_new(0x8a0);
  ZombieEliteRomanHealer(this);
  return this;
}


/* ZombieEliteRomanHealer::onZombieInitialize() */

void __thiscall ZombieEliteRomanHealer::onZombieInitialize(ZombieEliteRomanHealer *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  ZombieEliteRomanHealerProps *pZVar2;
  float fVar3;
  
  this[0x1b8] = (ZombieEliteRomanHealer)0x1;
  this[0x899] = (ZombieEliteRomanHealer)0x1;
  this[0x898] = (ZombieEliteRomanHealer)0x0;
  ZombieRomanHealer::onZombieInitialize((ZombieRomanHealer *)this);
  fVar3 = (float)FUN_04ef5810(*(undefined4 *)(this + 0x284));
  ZombieEliteModule::SetMaxHealth((ZombieEliteModule *)(this + 0x858),fVar3);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Zombie::SetZombieScale((Zombie *)this,*(float *)(lVar1 + 0x1d4));
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEliteRomanHealerProps>((Zombie *)this);
  *(float *)(this + 0x890) = fVar3 + *(float *)(pZVar2 + 600);
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEliteRomanHealerProps>((Zombie *)this);
  *(float *)(this + 0x894) = fVar3 + *(float *)(pZVar2 + 0x25c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanHealer::DoSpecialSkill() */

void __thiscall ZombieEliteRomanHealer::DoSpecialSkill(ZombieEliteRomanHealer *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  ZombieEliteRomanHealerProps *pZVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  lVar3 = FUN_04ef581c(local_20,local_18);
  if (lVar3 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((((pZVar5 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(pZVar5,2), cVar2 != '\0')) &&
          (cVar2 = (**(code **)(*(long *)pZVar5 + 0x330))(pZVar5), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(pZVar5,0x65), cVar2 == '\0')) {
        pZVar6 = Zombie::GetProps<ZombieEliteRomanHealerProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(pZVar6 + 0x260),0,pZVar5,0x5a,1);
        if (pZVar5 != (Zombie *)this) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar5,0x59,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteRomanHealer::onPopAnimStop(std::string const&) */

void __thiscall ZombieEliteRomanHealer::onPopAnimStop(ZombieEliteRomanHealer *this,string *param_1)

{
  bool bVar1;
  ZombieEliteRomanHealerProps *pZVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"power_up");
  if (bVar1) {
    plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar4 + 0x168);
    std::string::string(asStack_58,"power");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPopAnimStop);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombieEliteRomanHealer,void(ZombieEliteRomanHealer::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    (*pcVar5)(plVar4,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"power");
    if (bVar1) {
      DoSpecialSkill(this);
      plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this);
      pcVar5 = *(code **)(*plVar4 + 0x168);
      std::string::string(asStack_58,"power_down");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPopAnimStop);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ZombieEliteRomanHealer,void(ZombieEliteRomanHealer::*)(std::string_const&)>
                ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
      (*pcVar5)(plVar4,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      bVar1 = std::operator==(param_1,"power_down");
      if (bVar1) {
        this[0x898] = (ZombieEliteRomanHealer)0x0;
        fVar6 = (float)PVZ_T();
        pZVar2 = Zombie::GetProps<ZombieEliteRomanHealerProps>((Zombie *)this);
        *(float *)(this + 0x894) = fVar6 + *(float *)(pZVar2 + 0x25c);
        pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
        std::string::string(asStack_50,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar3,asStack_50,0,aDStack_38);
        std::string::~string(asStack_50);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a05a90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteRomanHealer_06a06500;
  *(undefined ***)(this + 0x858) = &PTR__ZombieEliteRomanHealer_06a06530;
  nop();
  ZombieRomanHealer::~ZombieRomanHealer((ZombieRomanHealer *)this);
  return;
}


/* non-virtual thunk to ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ~ZombieEliteRomanHealer(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ~ZombieEliteRomanHealer(this + -0x858);
  return;
}


/* ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ~ZombieEliteRomanHealer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ~ZombieEliteRomanHealer(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteRomanHealer::~ZombieEliteRomanHealer() */

void __thiscall ZombieEliteRomanHealer::~ZombieEliteRomanHealer(ZombieEliteRomanHealer *this)

{
  ~ZombieEliteRomanHealer(this + -0x858);
  return;
}

