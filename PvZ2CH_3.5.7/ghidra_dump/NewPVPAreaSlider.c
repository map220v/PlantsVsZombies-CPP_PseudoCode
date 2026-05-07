// Class: NewPVPAreaSlider


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaSlider::StaticClassInit() */

void NewPVPAreaSlider::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaSlider");
    (*pcVar2)(plVar1,asStack_10,FUN_034c0c08,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaSlider::StaticGetClass() */

long * NewPVPAreaSlider::StaticGetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaSlider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaSlider::GetClass() const */

long * NewPVPAreaSlider::GetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaSlider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaSlider::~NewPVPAreaSlider() */

void __thiscall NewPVPAreaSlider::~NewPVPAreaSlider(NewPVPAreaSlider *this)

{
  *(undefined ***)this = &PTR_GetClass_0664cf70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NewPVPArea::~NewPVPArea((NewPVPArea *)this);
  return;
}


/* NewPVPAreaSlider::~NewPVPAreaSlider() */

void __thiscall NewPVPAreaSlider::~NewPVPAreaSlider(NewPVPAreaSlider *this)

{
  ~NewPVPAreaSlider(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPAreaSlider::NewPVPAreaSlider() */

void __thiscall NewPVPAreaSlider::NewPVPAreaSlider(NewPVPAreaSlider *this)

{
  NewPVPArea::NewPVPArea((NewPVPArea *)this);
  *(undefined ***)this = &PTR_GetClass_0664cf70;
  return;
}


/* NewPVPAreaSlider::StaticNew() */

NewPVPAreaSlider * NewPVPAreaSlider::StaticNew(void)

{
  NewPVPAreaSlider *this;
  
  this = ::operator_new(0x20);
  NewPVPAreaSlider(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaSlider::onGameplayStarted() */

void NewPVPAreaSlider::onGameplayStarted(void)

{
  bool bVar1;
  long extraout_x0;
  GroupInfo *pGVar2;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0x20));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pGVar2 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)aRStack_18,pGVar2);
    Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)aRStack_18,local_10,local_c,1);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaSlider::Activate() */

void __thiscall NewPVPAreaSlider::Activate(NewPVPAreaSlider *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPArea::Activate((NewPVPArea *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPAreaSlider,void(NewPVPAreaSlider::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::LevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

