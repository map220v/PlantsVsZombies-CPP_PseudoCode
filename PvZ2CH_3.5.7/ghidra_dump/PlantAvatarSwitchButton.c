// Class: PlantAvatarSwitchButton


/* PlantAvatarSwitchButton::TouchBegan(Sexy::Touch const&) */

void __thiscall PlantAvatarSwitchButton::TouchBegan(PlantAvatarSwitchButton *this,Touch *param_1)

{
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)param_1;
  return;
}


/* PlantAvatarSwitchButton::OnSelectTinyIcon() */

void __thiscall PlantAvatarSwitchButton::OnSelectTinyIcon(PlantAvatarSwitchButton *this)

{
  this[0xf0] = (PlantAvatarSwitchButton)0x0;
  return;
}


/* PlantAvatarSwitchButton::~PlantAvatarSwitchButton() */

void __thiscall PlantAvatarSwitchButton::~PlantAvatarSwitchButton(PlantAvatarSwitchButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0683fcb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAvatarSwitchButton::~PlantAvatarSwitchButton() */

void __thiscall PlantAvatarSwitchButton::~PlantAvatarSwitchButton(PlantAvatarSwitchButton *this)

{
  ~PlantAvatarSwitchButton(this);
  AK::FreeHook(this);
  return;
}


/* PlantAvatarSwitchButton::setData(int, bool) */

void __thiscall
PlantAvatarSwitchButton::setData(PlantAvatarSwitchButton *this,int param_1,bool param_2)

{
  undefined8 uVar1;
  
  *(int *)(this + 0xe0) = param_1;
  this[0xe4] = (PlantAvatarSwitchButton)param_2;
  uVar1 = NewAvatar::GetAvatarTinyImage(param_1);
  *(undefined8 *)(this + 0xd8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButton::PlantAvatarSwitchButton() */

void __thiscall PlantAvatarSwitchButton::PlantAvatarSwitchButton(PlantAvatarSwitchButton *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0683fcb0;
  this[0xf0] = (PlantAvatarSwitchButton)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectTinyIcon);
  Sexy::Delegate0::Delegate0<PlantAvatarSwitchButton,void(PlantAvatarSwitchButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::SelectTinyIcon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButton::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantAvatarSwitchButton::TouchEnded(PlantAvatarSwitchButton *this,Touch *param_1)

{
  undefined *this_00;
  int iVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)param_1 != *(long *)(this + 0xe8)) goto LAB_043a5538;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar1 = PlayerInfo::GetWhichAvatarType((int)this_02);
  if (iVar1 == 1) {
    iVar1 = 0;
LAB_043a5598:
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::EquipAvatar,iVar1);
  }
  else {
    iVar1 = PlayerInfo::GetWhichAvatarType((int)this_02);
    if (iVar1 != 2) {
      iVar1 = -1;
      goto LAB_043a5598;
    }
    NewAvatar::GetAvatarInfoByAvatarId(*(int *)(this + 0xe0));
    this_00 = gMessageRouter;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    MessageRouter::Post<int,int>
              ((MessageRouter *)this_00,Message::EquipAvatar,*(int *)(lVar2 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (this[0xe4] != (PlantAvatarSwitchButton)0x0) {
    PlayerInfo::EquipAvatar(this_02,*(int *)(this + 0xe0));
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0xf0] = (PlantAvatarSwitchButton)0x1;
LAB_043a5538:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarSwitchButton::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarSwitchButton::Draw(PlantAvatarSwitchButton *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RenderEffectDefinition *pRVar4;
  RenderEffect *pRVar5;
  Image *pIVar6;
  code *pcVar7;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    if (this[0xe4] == (PlantAvatarSwitchButton)0x0) {
      pRVar4 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06b00a80);
      pRVar5 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar4);
      pcVar7 = *(code **)(*(long *)pRVar5 + 0x38);
      std::string::string(asStack_20,"Default");
      (*pcVar7)(pRVar5,asStack_20,1);
      std::string::~string(asStack_20);
      nop();
      Sexy::RenderEffectAutoState::RenderEffectAutoState
                ((RenderEffectAutoState *)asStack_20,param_1,pRVar5,1);
      while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                               ((RenderEffectAutoState *)asStack_20), bVar1) {
        iVar2 = FUN_043a19d8(8);
        iVar3 = FUN_043a19d8(0x22);
        Sexy::Insets::Insets(aIStack_30,iVar2,iVar2,iVar3,iVar3);
        DrawAdaptiveImage(param_1,aIStack_30,*(undefined8 *)(this + 0xd8));
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    }
    else {
      iVar2 = FUN_043a19d8(8);
      iVar3 = FUN_043a19d8(0x22);
      Sexy::Insets::Insets((Insets *)asStack_20,iVar2,iVar2,iVar3,iVar3);
      DrawAdaptiveImage(param_1,(Insets *)asStack_20,*(undefined8 *)(this + 0xd8));
    }
  }
  if (this[0xf0] != (PlantAvatarSwitchButton)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01318);
    iVar2 = FUN_043a19d8(4);
    iVar3 = FUN_043a19d8(0x2a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar2,iVar3,iVar3);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

