// Class: PlayPAM


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayPAM::StaticClassInit() */

void PlayPAM::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlayPAM");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4fb9c,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayPAM::StaticGetClass() */

long * PlayPAM::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"PlayPAM",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayPAM::GetClass() const */

long * PlayPAM::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"PlayPAM",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayPAM::drawPAM(Sexy::Graphics*) */

void __thiscall PlayPAM::drawPAM(PlayPAM *this,Graphics *param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80))
  ;
  PopAnimRig::Draw(this_00,param_1);
  return;
}


/* PlayPAM::onDestroy() */

void PlayPAM::onDestroy(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  long *plVar2;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x80);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* PlayPAM::PlayPAM() */

void __thiscall PlayPAM::PlayPAM(PlayPAM *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067325c0;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x30));
  Sexy::Point::Point((Point *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  return;
}


/* PlayPAM::StaticNew() */

PlayPAM * PlayPAM::StaticNew(void)

{
  PlayPAM *this;
  
  this = ::operator_new(0x88);
  PlayPAM(this);
  return this;
}


/* PlayPAM::~PlayPAM() */

void __thiscall PlayPAM::~PlayPAM(PlayPAM *this)

{
  *(undefined ***)this = &PTR_GetClass_067325c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x30));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* PlayPAM::~PlayPAM() */

void __thiscall PlayPAM::~PlayPAM(PlayPAM *this)

{
  ~PlayPAM(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayPAM::AddToRenderQueue(RenderQueue*) */

void __thiscall PlayPAM::AddToRenderQueue(PlayPAM *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 1) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,drawPAM);
    Sexy::Delegate1<Sexy::Graphics*>::Delegate1<PlayPAM,void(PlayPAM::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,700000,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayPAM::onAnimDone(std::string const&) */

void PlayPAM::onAnimDone(string *param_1)

{
  int iVar1;
  long *plVar2;
  Delegate1wRet<bool,SexyURL_const&> *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x28) == 1) {
    *(undefined4 *)(param_1 + 0x28) = 2;
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x80));
    (**(code **)(*plVar2 + 0x48))();
    iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(param_1 + 0x30));
    if (iVar1 != 0) {
      this = (Delegate1wRet<bool,SexyURL_const&> *)
             RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
                       ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)
                        (param_1 + 0x30));
      std::string::string(asStack_10,"animation");
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this,(SexyURL *)asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayPAM::Update(float) */

void __thiscall PlayPAM::Update(PlayPAM *this,float param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
    std::string::string(asStack_68,"animation");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    *(undefined4 *)(this + 0x28) = 1;
  }
  else if (*(int *)(this + 0x28) == 1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,param_1,fVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

