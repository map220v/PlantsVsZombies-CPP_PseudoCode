// Class: TwinsAssistPerson


/* TwinsAssistPerson::GetPopAnimRig() */

RtWeakPtr<Sexy::SoundResource> * TwinsAssistPerson::GetPopAnimRig(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xa8));
  return in_x8;
}


/* TwinsAssistPerson::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall TwinsAssistPerson::SetOwner(TwinsAssistPerson *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),param_2);
  return;
}


/* TwinsAssistPerson::CalcRenderOrder() const */

void __thiscall TwinsAssistPerson::CalcRenderOrder(TwinsAssistPerson *this)

{
  (**(code **)(*(long *)this + 200))();
  return;
}


/* non-virtual thunk to TwinsAssistPerson::CalcRenderOrder() const */

void __thiscall TwinsAssistPerson::CalcRenderOrder(TwinsAssistPerson *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::StaticClassInit() */

void TwinsAssistPerson::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsAssistPerson");
    (*pcVar2)(plVar1,asStack_10,FUN_04d45988,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsAssistPerson::StaticGetClass() */

long * TwinsAssistPerson::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsAssistPerson",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsAssistPerson::GetClass() const */

long * TwinsAssistPerson::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsAssistPerson",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsAssistPerson::TwinsAssistPerson() */

void __thiscall TwinsAssistPerson::TwinsAssistPerson(TwinsAssistPerson *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_069afe70;
  *(undefined ***)(this + 0x10) = &PTR__TwinsAssistPerson_069b0058;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  this[0xb8] = (TwinsAssistPerson)0x0;
  return;
}


/* TwinsAssistPerson::StaticNew() */

TwinsAssistPerson * TwinsAssistPerson::StaticNew(void)

{
  TwinsAssistPerson *this;
  
  this = ::operator_new(200);
  TwinsAssistPerson(this);
  return this;
}


/* TwinsAssistPerson::~TwinsAssistPerson() */

void __thiscall TwinsAssistPerson::~TwinsAssistPerson(TwinsAssistPerson *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  *(undefined ***)this = &PTR_GetClass_069afe70;
  *(undefined ***)(this + 0x10) = &PTR__TwinsAssistPerson_069b0058;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to TwinsAssistPerson::~TwinsAssistPerson() */

void __thiscall TwinsAssistPerson::~TwinsAssistPerson(TwinsAssistPerson *this)

{
  ~TwinsAssistPerson(this + -0x10);
  return;
}


/* TwinsAssistPerson::~TwinsAssistPerson() */

void __thiscall TwinsAssistPerson::~TwinsAssistPerson(TwinsAssistPerson *this)

{
  ~TwinsAssistPerson(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TwinsAssistPerson::~TwinsAssistPerson() */

void __thiscall TwinsAssistPerson::~TwinsAssistPerson(TwinsAssistPerson *this)

{
  ~TwinsAssistPerson(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::SetMoonAntenna(bool) */

void __thiscall TwinsAssistPerson::SetMoonAntenna(TwinsAssistPerson *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"ylg01");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"ylg02");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"ylg03");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"ylg04");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::SetSunAntenna(bool) */

void __thiscall TwinsAssistPerson::SetSunAntenna(TwinsAssistPerson *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"tyg01");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"tyg02");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"tyg03");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"tyg04");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::InitTwinsAssistAnim(std::string const&) */

void __thiscall TwinsAssistPerson::InitTwinsAssistAnim(TwinsAssistPerson *this,string *param_1)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<TwinsAssistPerson,void(TwinsAssistPerson::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsAssistPerson::GetRenderOrder() const */

ulong __thiscall TwinsAssistPerson::GetRenderOrder(TwinsAssistPerson *this)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  Plant *pPVar3;
  ulong uVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar3 != (Plant *)0x0) {
      iVar2 = (**(code **)(*(long *)pPVar3 + 200))();
      return (ulong)(iVar2 - 1);
    }
  }
  uVar4 = (**(code **)(*(long *)this + 0x170))(this);
  return uVar4;
}


/* TwinsAssistPerson::SetSpeedModifier(float) */

void __thiscall TwinsAssistPerson::SetSpeedModifier(TwinsAssistPerson *this,float param_1)

{
  bool bVar1;
  RtObject *this_00;
  Plant *pPVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    *(float *)(this + 0xc4) = param_1;
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar6 = *(float *)(this + 0xc4);
    pcVar4 = *(code **)(*plVar3 + 0x80);
    fVar5 = (float)Plant::GetAdditionValue(pPVar2,3);
    (*pcVar4)(fVar5 + fVar6,plVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::launchLv5BuleStarsProjectile() */

void __thiscall TwinsAssistPerson::launchLv5BuleStarsProjectile(TwinsAssistPerson *this)

{
  undefined8 uVar1;
  float *pfVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"level5BuleStarProjectileDefault");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb0));
  Board::AddProjectile((Board *)(fVar4 - 32.0),fVar5 - 7.0,0x42480000,uVar1,aRStack_18,pRVar3,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::string((string *)aRStack_18,"Play_Lv5Moon_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::launchLv5RedStarsProjectile() */

void __thiscall TwinsAssistPerson::launchLv5RedStarsProjectile(TwinsAssistPerson *this)

{
  undefined8 uVar1;
  float *pfVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"Lv5SunRedStarProjectileDefault");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb0));
  Board::AddProjectile((Board *)(fVar4 - 32.0),fVar5 - 7.0,0x42480000,uVar1,aRStack_18,pRVar3,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::string((string *)aRStack_18,"Play_Lv5Sun_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsAssistPerson::OnAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void TwinsAssistPerson::OnAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"fire");
  if (bVar1) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      launchLv5RedStarsProjectile((TwinsAssistPerson *)param_1);
      return;
    }
    if (*(int *)(param_1 + 0xc0) == 1) {
      launchLv5BuleStarsProjectile((TwinsAssistPerson *)param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::PlayAnim(std::string const&) */

void __thiscall TwinsAssistPerson::PlayAnim(TwinsAssistPerson *this,string *param_1)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,param_1,0,aRStack_50);
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
/* TwinsAssistPerson::setState(TwinsAssistPerson::AssistState) */

void __thiscall TwinsAssistPerson::setState(TwinsAssistPerson *this,undefined4 param_2)

{
  int iVar1;
  PopAnimRig *pPVar2;
  undefined8 uVar3;
  undefined *__n;
  string asStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  __n = &__stack_chk_guard;
  *(undefined4 *)(this + 0xbc) = param_2;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_78);
  if (*(int *)(this + 0xc0) == 0) {
    std::string::append(asStack_78,"ty",(size_t)__n);
  }
  else if (*(int *)(this + 0xc0) == 1) {
    std::string::append(asStack_78,"yl",(size_t)__n);
    iVar1 = *(int *)(this + 0xbc);
    goto joined_r0x04d447e8;
  }
  iVar1 = *(int *)(this + 0xbc);
joined_r0x04d447e8:
  if (iVar1 == 0) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    uVar3 = FUN_0547429c(asStack_78);
    Sexy::StrFormat("idle_%s",asStack_58,uVar3);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
  }
  else if (iVar1 == 1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    uVar3 = FUN_0547429c(asStack_78);
    Sexy::StrFormat("attacklv5_%s",asStack_70,uVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop
              (pPVar2,asStack_70,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
  }
  std::string::~string(asStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TwinsAssistPerson::onAnimStoppedCallback(std::string const&) */

void TwinsAssistPerson::onAnimStoppedCallback(string *param_1)

{
  setState((TwinsAssistPerson *)param_1,0);
  return;
}


/* TwinsAssistPerson::SetPerson(TwinsPersonalityState) */

void __thiscall TwinsAssistPerson::SetPerson(TwinsAssistPerson *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc0) = param_2;
  setState(this,0);
  return;
}


/* TwinsAssistPerson::FindTargetAndFire(PlantWeapon) */

undefined1 __thiscall
TwinsAssistPerson::FindTargetAndFire(TwinsAssistPerson *this,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  Plant *pPVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
    cVar2 = Plant::CanFindTarget(pPVar3,param_2);
    if (cVar2 != '\0') {
      setState(this,1);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::onUpdate() */

void __thiscall TwinsAssistPerson::onUpdate(TwinsAssistPerson *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  RtObject *this_01;
  Plant *this_02;
  PlantConditionTracker *pPVar4;
  PopAnimRig *pPVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  Color aCStack_90 [16];
  PlantConditionTracker aPStack_80 [120];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_02 = Sexy::RtObject::Cast<Plant>(this_01);
    cVar2 = Plant::IsSuspended(this_02);
    if (((cVar2 != '\0') || (cVar2 = FUN_04d414cc(*(undefined4 *)(this + 0x28)), cVar2 != '\0')) ||
       (cVar2 = FUN_04d3fbd8(this_02[0x278]), cVar2 != '\0')) goto LAB_04d4752c;
    iVar3 = FUN_04d3fbd4(*(undefined4 *)(this_02 + 0x50));
    if ((iVar3 == 5) && (*(int *)(this + 0xbc) == 0)) {
      if (*(int *)(this + 0xc0) == 0) {
        FindTargetAndFire(this,1);
      }
      else if (*(int *)(this + 0xc0) == 1) {
        FindTargetAndFire(this);
      }
    }
    pPVar4 = (PlantConditionTracker *)PlayerInfo::GetDisplayingBundleList((PlayerInfo *)this_02);
    PlantConditionTracker::PlantConditionTracker(aPStack_80,pPVar4);
    EntityConditionTracker<Creature,CreatureConditions>::SetDirty
              ((EntityConditionTracker<Creature,CreatureConditions> *)aPStack_80);
    cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)aPStack_80,0x10);
    if (cVar2 == '\0') {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar5);
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      PopAnimRig::SetMultiplicativeOverlayColor(pPVar5,aCStack_90);
    }
    cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
                      ((EntityConditionTracker<Creature,CreatureConditions> *)aPStack_80,8);
    if (cVar2 == '\0') {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      PopAnimRig::ClearShaderOverrideColor(pPVar5);
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      PopAnimRig::SetShaderOverrideColor(pPVar5,aCStack_90);
    }
    if (*(float *)(this_02 + 0xe0) != *(float *)(this + 0xc4)) {
      SetSpeedModifier(this,*(float *)(this_02 + 0xe0));
    }
    PlantConditionTracker::~PlantConditionTracker(aPStack_80);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var6);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar7 == *pfVar8) {
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      lVar10 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      if (*(float *)(lVar10 + 4) == pfVar8[1]) {
        p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar10 = std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var6);
        if (*(float *)(lVar10 + 8) == pfVar8[2]) goto LAB_04d47644;
      }
    }
    pcVar11 = *(code **)(*(long *)this + 0x78);
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar9 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var6);
    (*pcVar11)(this,uVar9);
  }
LAB_04d47644:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar12 = (float)PVZ_T();
    fVar13 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar5,fVar12,fVar13);
  }
LAB_04d4752c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsAssistPerson::Draw(Sexy::Graphics*) */

void __thiscall TwinsAssistPerson::Draw(TwinsAssistPerson *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  RtObject *this_01;
  Plant *this_02;
  undefined4 *puVar6;
  long *plVar7;
  PopAnimRig *pPVar8;
  Graphics *pGVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  Insets aIStack_c8 [12];
  int local_bc;
  Color aCStack_b8 [16];
  ulong local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  SexyTransform2D aSStack_88 [8];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [20];
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  undefined4 local_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  int local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::Draw((BoardEntity *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    this_02 = Sexy::RtObject::Cast<Plant>(this_01);
    if (this_02 != (Plant *)0x0) {
      if (*(code **)(**(long **)(this_02 + 0xa8) + 0x90) ==
          PlantFramework::GetAdditionalDrawHeightOffset) {
        fVar10 = (float)PlantFramework::GetAdditionalDrawHeightOffset();
      }
      else {
        fVar10 = (float)(**(code **)(**(long **)(this_02 + 0xa8) + 0x90))();
      }
      this_00 = (RtWeakPtr *)(this + 0xa8);
      puVar6 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      fVar13 = (float)puVar6[2];
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        fVar10 = fVar10 - fVar13;
        cVar2 = FUN_04d3fbdc(*(undefined4 *)(this_02 + 0x1d0));
        if (cVar2 == '\0') {
          Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_c8,param_1);
          fVar14 = *(float *)(param_1 + 0x20);
          fVar13 = (float)FUN_04d3ff20(*puVar6);
          uVar12 = puVar6[1];
          fVar11 = *(float *)(param_1 + 0x24);
          *(float *)(param_1 + 0x10) =
               *(float *)(param_1 + 0x10) + fVar14 +
               (float)(int)((fVar13 - fVar14) * *(float *)(param_1 + 0x18));
          fVar13 = (float)FUN_04d3ff20(uVar12);
          *(float *)(param_1 + 0x14) =
               *(float *)(param_1 + 0x14) + fVar11 +
               (float)(int)((fVar13 - fVar11) * *(float *)(param_1 + 0x1c));
          UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_02);
          PopAnimRig::GetPAMColor();
          fVar14 = *(float *)(this_02 + 0x13c);
          fVar13 = (float)PVZ_EOT();
          if (fVar14 < fVar13) {
            fVar13 = *(float *)(this_02 + 0x138);
            fVar11 = (float)PVZ_T();
            local_38 = 0x3f800000;
            local_98 = local_98 & 0xffffffff00000000;
            fVar13 = CurveEvaluate<float>
                               ((fVar11 - (fVar14 - fVar13)) / *(float *)(this_02 + 0x138),&local_98
                                ,(Insets *)&local_38,2);
            Sexy::Insets::Insets((Insets *)&local_38,(Insets *)aCStack_b8);
            local_2c = (float)(int)(fVar13 * 255.0);
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::SetPAMColor(pPVar8,(Color *)&local_38);
          }
          Sexy::Graphics::PushState(param_1);
          fVar13 = (float)FUN_04d3ff20(0);
          fVar14 = *(float *)(param_1 + 0x18);
          *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar14 * fVar13;
          fVar13 = (float)FUN_04d3ff20(fVar10);
          fVar14 = fVar14 * *(float *)(this_02 + 0xc4);
          *(float *)(param_1 + 0x14) =
               *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x1c) * fVar13;
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_88);
          Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_88);
          Sexy::SexyTransform2D::Scale(aSStack_88,fVar14,fVar14);
          fVar13 = fVar14;
          if (this_02[0x14c] != (Plant)0x0) {
            Sexy::SexyTransform2D::Scale(aSStack_88,-fVar14,fVar14);
            fVar13 = -fVar14;
          }
          fVar13 = (float)FUN_04d3ff20(fVar13 * 99.0);
          fVar11 = (float)FUN_04d3ff20(fVar14 * 115.0);
          FUN_04d3fadc(-fVar13,-fVar11,auStack_80,auStack_74);
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
          cVar2 = Plant::HasCondition(this_02,0x22);
          if (cVar2 != '\0') {
            Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_60);
            Sexy::SexyTransform2D::Scale(aSStack_60,fVar14,fVar14);
            fVar13 = fVar14;
            if (this_02[0x14c] != (Plant)0x0) {
              Sexy::SexyTransform2D::Scale(aSStack_60,-fVar14,fVar14);
              fVar13 = -fVar14;
            }
            fVar13 = (float)FUN_04d3ff20(fVar13 * 99.0 + 20.0);
            fVar14 = (float)FUN_04d3ff20(fVar14 * 115.0 + 20.0);
            FUN_04d3fadc(-fVar13,-fVar14,auStack_58,auStack_4c);
          }
          pGVar9 = *(Graphics **)(this_02 + 0xa8);
          if (*(code **)(*(long *)pGVar9 + 0x80) == PlantFramework::SetClipRect) {
            cVar2 = PlantFramework::SetClipRect(pGVar9);
          }
          else {
            cVar2 = (**(code **)(*(long *)pGVar9 + 0x80))(pGVar9,param_1);
          }
          *(float *)(param_1 + 0x14) = (float)(int)*(float *)(param_1 + 0x14);
          cVar3 = Plant::HasCondition(this_02,0x22);
          if (cVar3 == '\0') {
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::Draw(pPVar8,param_1,aSStack_88);
          }
          else {
            Sexy::Insets::Insets((Insets *)&local_a8,0x48,0xe6,0xea,0xff);
            cVar3 = FUN_04d3fbe8(this_02[0x560]);
            if ((cVar3 != '\0') && (fVar13 = (float)PVZ_T(), (uint)((int)(fVar13 * 100.0) % 6) < 3))
            {
              uStack_a0 = CONCAT44((int)((double)uStack_a0._4_4_ * 127.5),(undefined4)uStack_a0);
            }
            Sexy::Insets::Insets((Insets *)&local_98,(Insets *)aCStack_b8);
            Sexy::Color::operator*((Color *)&local_98,(Color *)&local_a8);
            local_98 = CONCAT44(uStack_34,local_38);
            uStack_90 = CONCAT44(local_2c,local_30);
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::SetPAMColor(pPVar8,(Color *)&local_98);
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::Draw(pPVar8,param_1,aSStack_60);
          }
          if (cVar2 != '\0') {
            Sexy::Graphics::ClearClipRect(param_1);
          }
          fVar13 = (float)FUN_04d3ff20(0);
          *(float *)(param_1 + 0x10) =
               *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x18) * fVar13;
          fVar10 = (float)FUN_04d3ff20(fVar10);
          *(float *)(param_1 + 0x14) =
               *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x1c) * fVar10;
          Sexy::Graphics::PopState(param_1);
          pPVar8 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PopAnimRig::SetPAMColor(pPVar8,aCStack_b8);
          Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_c8);
        }
        else {
          fVar14 = 1.0;
          Plant::GetRelocating();
          Sexy::Graphics::PushState(param_1);
          (**(code **)(*(long *)this + 0xf8))(this,param_1);
          fVar13 = (float)Plant::UpdateRelocationPositionAndRotation(this_02);
          if (local_18 == 3) {
            fVar14 = (float)PVZ_T();
            fVar14 = 1.0 - (fVar14 - local_24) / (local_20 - local_24);
          }
          cVar2 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar2 != '\0') {
            fVar14 = fVar14 * *(float *)(this_02 + 0xc4);
          }
          fVar11 = (float)FUN_04d3ff20(local_14 + local_30);
          *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar11;
          fVar10 = (float)FUN_04d3ff20(local_10 + local_2c + fVar10);
          *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar10;
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_88);
          Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
          Sexy::Insets::Insets((Insets *)&local_d8);
          plVar7 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_02);
          (**(code **)(*plVar7 + 0x90))(plVar7,(Insets *)&local_d8);
          if (fVar13 != 0.0) {
            fVar11 = (float)local_d8 + (float)local_d0 * 0.5;
            fVar10 = (float)local_d4 + (float)local_cc * 0.5;
            FUN_04d3fadc(-fVar11,-fVar10,auStack_80,auStack_74);
            Sexy::SexyTransform2D::RotateRad(aSStack_88,fVar13);
            FUN_04d3fadc(fVar11,fVar10,auStack_80,auStack_74);
            cVar2 = Plant::HasCondition(this_02,0x22);
            if (cVar2 != '\0') {
              FUN_04d3fadc(-fVar11,-fVar10,auStack_58,auStack_4c);
              Sexy::SexyTransform2D::RotateRad(aSStack_60,fVar13);
              FUN_04d3fadc(fVar11,fVar10,auStack_58,auStack_4c);
            }
          }
          iVar4 = FUN_04d3ff0c(99);
          iVar5 = FUN_04d3ff0c(0x73);
          FUN_04d3fadc((float)-iVar4,(float)-iVar5,auStack_80,auStack_74);
          Sexy::SexyTransform2D::Scale(aSStack_88,fVar14,fVar14);
          cVar2 = Plant::HasCondition(this_02,0x22);
          if (cVar2 != '\0') {
            iVar4 = FUN_04d3ff0c(0x77);
            iVar5 = FUN_04d3ff0c(0x87);
            FUN_04d3fadc((float)-iVar4,(float)-iVar5,auStack_58,auStack_4c);
            Sexy::SexyTransform2D::Scale(aSStack_60,fVar14,fVar14);
          }
          *(float *)(param_1 + 0x14) = (float)(int)*(float *)(param_1 + 0x14);
          cVar2 = Plant::HasCondition(this_02,0x22);
          if (cVar2 == '\0') {
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::Draw(pPVar8,param_1,aSStack_88);
          }
          else {
            Sexy::Insets::Insets(aIStack_c8,0x48,0xe6,0xea,0xff);
            cVar2 = FUN_04d3fbe8(this_02[0x560]);
            if ((cVar2 != '\0') && (fVar10 = (float)PVZ_T(), (uint)((int)(fVar10 * 100.0) % 6) < 3))
            {
              local_bc = (int)((double)local_bc * 127.5);
            }
            UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_02);
            PopAnimRig::GetPAMColor();
            Sexy::Insets::Insets((Insets *)&local_a8,(Insets *)aCStack_b8);
            Sexy::Color::operator*((Color *)&local_a8,(Color *)aIStack_c8);
            local_a8 = local_98;
            uStack_a0 = uStack_90;
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::SetPAMColor(pPVar8,(Color *)&local_a8);
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::Draw(pPVar8,param_1,aSStack_60);
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            PopAnimRig::SetPAMColor(pPVar8,aCStack_b8);
          }
          Sexy::Graphics::PopState(param_1);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to TwinsAssistPerson::Draw(Sexy::Graphics*) */

void __thiscall TwinsAssistPerson::Draw(TwinsAssistPerson *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

