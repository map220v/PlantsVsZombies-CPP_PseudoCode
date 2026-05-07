// Class: UnlockAnimationAction


/* UnlockAnimationAction::UnlockAnimationAction(Sexy::RtWeakPtr<HotUIAnim>, std::string const&,
   std::string const&, std::string const&) */

void __thiscall
UnlockAnimationAction::UnlockAnimationAction
          (UnlockAnimationAction *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(undefined ***)this = &PTR__UnlockAnimationAction_06674c60;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),param_2);
  FUN_05475d88(this + 0x18,param_3);
  FUN_05475d88(this + 0x20,param_4);
  FUN_05475d88(this + 0x28,param_5);
  return;
}


/* UnlockAnimationAction::~UnlockAnimationAction() */

void __thiscall UnlockAnimationAction::~UnlockAnimationAction(UnlockAnimationAction *this)

{
  *(undefined ***)this = &PTR__UnlockAnimationAction_06674c60;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* UnlockAnimationAction::~UnlockAnimationAction() */

void __thiscall UnlockAnimationAction::~UnlockAnimationAction(UnlockAnimationAction *this)

{
  ~UnlockAnimationAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnlockAnimationAction::onAnimFinished(std::string const&) */

void UnlockAnimationAction::onAnimFinished(string *param_1)

{
  char cVar1;
  HotUIAnim *pHVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    pHVar2 = (HotUIAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    HotUIAnim::PlayAndContinue(pHVar2,param_1 + 0x20,0,aDStack_38);
  }
  RunnableAction::End((RunnableAction *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnlockAnimationAction::onBegin() */

void __thiscall UnlockAnimationAction::onBegin(UnlockAnimationAction *this)

{
  char cVar1;
  HotUIAnim *pHVar2;
  string *psVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = (HotUIAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UnlockAnimationAction,void(UnlockAnimationAction::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  HotUIAnim::PlayAndStop(pHVar2,this + 0x18,0,aDStack_38);
  cVar1 = FUN_0547419c(this + 0x28);
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,this + 0x28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

