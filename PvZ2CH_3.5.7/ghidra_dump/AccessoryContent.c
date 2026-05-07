// Class: AccessoryContent


/* AccessoryContent::GetId() */

undefined4 __thiscall AccessoryContent::GetId(AccessoryContent *this)

{
  return *(undefined4 *)(this + 0xe0);
}


/* AccessoryContent::GetUIInfo() */

AccessoryContent * __thiscall AccessoryContent::GetUIInfo(AccessoryContent *this)

{
  return this + 0x100;
}


/* AccessoryContent::SetSelected(bool) */

void __thiscall AccessoryContent::SetSelected(AccessoryContent *this,bool param_1)

{
  this[0xf8] = (AccessoryContent)param_1;
  return;
}


/* AccessoryContent::GetBindedType() */

undefined4 __thiscall AccessoryContent::GetBindedType(AccessoryContent *this)

{
  return *(undefined4 *)(this + 0x164);
}


/* AccessoryContent::SetLevel(int) */

void __thiscall AccessoryContent::SetLevel(AccessoryContent *this,int param_1)

{
  *(int *)(this + 0xe4) = param_1;
  return;
}


/* AccessoryContent::IsUnlocked() */

AccessoryContent __thiscall AccessoryContent::IsUnlocked(AccessoryContent *this)

{
  return this[0x138];
}


/* AccessoryContent::IsSelected() */

AccessoryContent __thiscall AccessoryContent::IsSelected(AccessoryContent *this)

{
  return this[0xf8];
}


/* AccessoryContent::IsBinded() */

AccessoryContent __thiscall AccessoryContent::IsBinded(AccessoryContent *this)

{
  return this[0xf9];
}


/* AccessoryContent::SetSpecial(bool) */

void __thiscall AccessoryContent::SetSpecial(AccessoryContent *this,bool param_1)

{
  this[0xfa] = (AccessoryContent)param_1;
  return;
}


/* AccessoryContent::SetDisplayImage(Sexy::Image*) */

void __thiscall AccessoryContent::SetDisplayImage(AccessoryContent *this,Image *param_1)

{
  *(Image **)(this + 0xe8) = param_1;
  return;
}


/* AccessoryContent::GetDisplayImage() */

undefined8 __thiscall AccessoryContent::GetDisplayImage(AccessoryContent *this)

{
  return *(undefined8 *)(this + 0xe8);
}


/* AccessoryContent::UnselectOtherContents() */

void __thiscall AccessoryContent::UnselectOtherContents(AccessoryContent *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x140);
    uVar2 = FUN_0494fbf8(uVar4,*(undefined8 *)(this + 0x148));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0494fc04(uVar4,uVar3);
    SetSelected((AccessoryContent *)*puVar1,false);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* AccessoryContent::InternalDraw(Sexy::Graphics*) */

void __thiscall AccessoryContent::InternalDraw(AccessoryContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  int iVar4;
  int iVar5;
  int local_10;
  
  if (*(int *)(this + 0x178) == 2) {
    if (*(LotteryResultProgressBar **)(this + 0x168) == (LotteryResultProgressBar *)0x0) {
      return;
    }
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x168));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x168));
    iVar4 = *(int *)(this + 0x50);
    iVar5 = *(int *)(this + 0x54);
    pIVar3 = *(Image **)(this + 0x168);
  }
  else {
    if (*(LotteryResultProgressBar **)(this + 0xe8) == (LotteryResultProgressBar *)0x0) {
      return;
    }
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
    iVar4 = *(int *)(this + 0x50);
    iVar5 = *(int *)(this + 0x54);
    pIVar3 = *(Image **)(this + 0xe8);
  }
  local_10 = (int)((float)iVar1 * 0.6);
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,(iVar4 - local_10) / 2,(iVar5 - (int)((float)iVar2 * 0.6)) / 2,local_10,
             (int)((float)iVar2 * 0.6));
  return;
}


/* AccessoryContent::OnNotifyTutorialSelectContent(std::string const&) */

void __thiscall
AccessoryContent::OnNotifyTutorialSelectContent(AccessoryContent *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = std::operator==(param_1,(string *)(this + 0x158));
  if (cVar1 != '\0') {
    lVar2 = LawnApp::getPlantAccessoryUI(gLawnApp);
    if (*(char *)(lVar2 + 0x204) == '\0') {
      lVar2 = LawnApp::getPlantAccessoryUI(gLawnApp);
      lVar3 = *(long *)this;
      *(undefined1 *)(lVar2 + 0x204) = 1;
      (**(code **)(lVar3 + 0x210))(this,0,0,0);
      return;
    }
  }
  return;
}


/* AccessoryContent::InitView() */

void __thiscall AccessoryContent::InitView(AccessoryContent *this)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(this + 0x120)) {
  case 0:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71c78);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  case 1:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b715b8);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  case 2:
  case 4:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71b10);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  case 3:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b718d0);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  case 5:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71a68);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  default:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
    *(undefined8 *)(this + 0xf0) = uVar1;
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContent::AccessoryContent(int, BindedType, AccessoryUIInfo&, bool, std::string, bool,
   AccessoryPieceUIInfo&, PlantAccessoryUITabPanel) */

void __thiscall
AccessoryContent::AccessoryContent
          (AccessoryContent *this,undefined4 param_1,undefined4 param_3,AccessoryUIInfo *param_4,
          AccessoryContent param_5,undefined8 param_6,AccessoryContent param_7,long param_8,
          undefined4 param_9)

{
  undefined *puVar1;
  undefined4 uVar2;
  ResourceInfo *pRVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  string asStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = param_1;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_06913c90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06913fb0;
  this[0xfa] = (AccessoryContent)0x0;
  AccessoryUIInfo::AccessoryUIInfo((AccessoryUIInfo *)(this + 0x100),param_4);
  this[0x138] = param_5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  FUN_05475d88(this + 0x158,param_6);
  this[0x160] = param_7;
  *(undefined4 *)(this + 0x164) = param_3;
  FUN_05476574(this + 0x170);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x178) = param_9;
  this[0xf8] = (AccessoryContent)0x0;
  this[0xf9] = (AccessoryContent)0x0;
  FUN_05475d88(asStack_1a0,this + 0x118);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_190);
  *(ResourceInfo **)(this + 0xe8) = pRVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_190);
  if (*(int *)(this + 0x178) == 2) {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_190);
    *(ResourceInfo **)(this + 0x168) = pRVar3;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_190);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    FUN_0546065c(auStack_168,*(undefined4 *)(param_8 + 8));
    FUN_05462824(asStack_198,auStack_178);
    Sexy::ToWString(asStack_198);
    FUN_054766c8(this + 0x170,(RtWeakPtr *)&local_190);
    FUN_05476c50((RtWeakPtr *)&local_190);
    std::string::~string(asStack_198);
    FUN_054617bc(auStack_178);
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      uVar2 = PlayerInfo::GetPlantAccessoryLevelById(this_01,(long)*(int *)(this + 0xe0));
      *(undefined4 *)(this + 0xe4) = uVar2;
    }
  }
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyTutorialSelectContent);
  local_1b0 = local_180;
  local_1c0 = local_190;
  uStack_1b8 = uStack_188;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AccessoryContent,void(AccessoryContent::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialSelectContent,&local_1c0);
  std::string::~string(asStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryContent::~AccessoryContent() */

void __thiscall AccessoryContent::~AccessoryContent(AccessoryContent *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06913fb0;
  *(undefined ***)this = &PTR_GetClass_06913c90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x170);
  std::string::~string((string *)(this + 0x158));
  std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::~vector
            ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0x140));
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessoryContent::~AccessoryContent() */

void __thiscall AccessoryContent::~AccessoryContent(AccessoryContent *this)

{
  ~AccessoryContent(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryContent::MouseDown(int, int, int) */

void AccessoryContent::MouseDown(int param_1,int param_2,int param_3)

{
  AccessoryContent *this;
  
  this = (AccessoryContent *)(ulong)(uint)param_1;
  if (this[0xfa] != (AccessoryContent)0x0) {
    return;
  }
  SetSelected(this,true);
  UnselectOtherContents(this);
  MessageRouter::Post<AccessoryContent*,AccessoryContent*>
            ((MessageRouter *)gMessageRouter,Message::NoticeMainUI,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContent::Draw(Sexy::Graphics*) */

void __thiscall AccessoryContent::Draw(AccessoryContent *this,Graphics *param_1)

{
  AccessoryContent *pAVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  RenderEffectDefinition *pRVar11;
  RenderEffect *pRVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar13;
  CachedUIResourcePtr<Sexy::Image> *pCVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  Image *local_38;
  undefined1 auStack_30 [8];
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),0,0);
  }
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  if (this[0x138] == (AccessoryContent)0x0) {
    pRVar11 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b71bb0);
    pRVar12 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar11);
    pcVar17 = *(code **)(*(long *)pRVar12 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar17)(pRVar12,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar12,1);
    while (bVar3 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar3) {
      InternalDraw(this,param_1);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
    iVar5 = *(int *)(this + 0x164);
    if (iVar5 != 1) goto LAB_04955240;
LAB_049552f0:
    pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b714e0;
LAB_049552f8:
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
    Sexy::Graphics::DrawImage(param_1,pIVar13,0,0);
    cVar4 = IsSelected(this);
    if (cVar4 == '\0') goto LAB_04955258;
LAB_04955320:
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70f08);
    Sexy::Graphics::DrawImage(param_1,pIVar13,0,0);
    if (this[0x160] != (AccessoryContent)0x0) goto LAB_04955348;
LAB_04955260:
    if (this[0x138] != (AccessoryContent)0x0) goto LAB_04955268;
LAB_049553ac:
    iVar6 = FUN_04950334(6);
    iVar5 = *(int *)(this + 0x54);
    iVar2 = *(int *)(this + 0x50);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71ae0);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar6,iVar6,iVar6 * -2 + iVar2,iVar6 * -2 + iVar5);
    iVar5 = *(int *)(this + 0xe4);
    if (iVar5 == 1) goto LAB_0495540c;
LAB_04955274:
    if (iVar5 == 2) {
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70fd8;
      goto LAB_04955414;
    }
    if (iVar5 == 3) {
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b712e0;
      goto LAB_04955414;
    }
    if (iVar5 == 4) {
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71088;
      goto LAB_04955414;
    }
    if (iVar5 != 5) goto LAB_04955294;
    local_38 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b717d0);
    iVar5 = *(int *)(this + 0x50);
  }
  else {
    InternalDraw(this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
    iVar5 = *(int *)(this + 0x164);
    if (iVar5 == 1) goto LAB_049552f0;
LAB_04955240:
    if (iVar5 == 2) {
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71010;
      goto LAB_049552f8;
    }
    cVar4 = IsSelected(this);
    if (cVar4 != '\0') goto LAB_04955320;
LAB_04955258:
    if (this[0x160] == (AccessoryContent)0x0) goto LAB_04955260;
LAB_04955348:
    iVar5 = *(int *)(this + 0x50);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71290);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(this + 0x54);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71290);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71290);
    Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar5 - iVar6) / 2,(iVar2 - iVar7) / 2);
    if (this[0x138] == (AccessoryContent)0x0) goto LAB_049553ac;
LAB_04955268:
    iVar5 = *(int *)(this + 0xe4);
    if (iVar5 != 1) goto LAB_04955274;
LAB_0495540c:
    pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71658;
LAB_04955414:
    local_38 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
    iVar5 = *(int *)(this + 0x50);
  }
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  iVar2 = iVar2 >> 2;
  iVar6 = FUN_04950334(5);
  Sexy::Graphics::DrawImage(param_1,local_38,(iVar5 - iVar2) - iVar6,iVar6,iVar2,iVar2);
LAB_04955294:
  if (*(int *)(this + 0x178) == 2) {
    pAVar1 = this + 0x170;
    cVar4 = FUN_054765e8(pAVar1);
    if (cVar4 == '\0') {
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      FUN_05477b24((Color *)asStack_20,pAVar1);
      iVar6 = Sexy::PrimeTypeface::StringWidth(uVar15,(Color *)asStack_20);
      FUN_05476c50((Color *)asStack_20);
      iVar5 = *(int *)(this + 0x50);
      iVar7 = FUN_04950334(10);
      iVar8 = FUN_04950334(0xf);
      iVar2 = *(int *)(this + 0x54);
      iVar9 = FUN_04950334(0x14);
      uVar15 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      uVar16 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
      FUN_05477b24(auStack_30,pAVar1);
      iVar10 = Sexy::PrimeTypeface::StringWidth(uVar16,auStack_30);
      FUN_05477b24(aGStack_28,pAVar1);
      Sexy::Color::Color((Color *)asStack_20,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)((iVar5 - iVar6) - iVar7),(float)((iVar2 - iVar8) - iVar9),
                 (float)iVar10,uVar15,param_1,aGStack_28,1,(Color *)asStack_20,0);
      FUN_05476c50(aGStack_28);
      FUN_05476c50(auStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryContent::LinkContents(std::vector<AccessoryContent*, std::allocator<AccessoryContent*>
   >) */

void __thiscall AccessoryContent::LinkContents(AccessoryContent *this,undefined8 *param_2)

{
  AccessoryContent **ppAVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *param_2;
    uVar2 = FUN_0494fbf8(uVar5,param_2[1]);
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        return;
      }
      ppAVar1 = (AccessoryContent **)FUN_0494fc0c(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*ppAVar1 == this);
    std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::push_back
              ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0x140),ppAVar1
              );
  } while( true );
}

