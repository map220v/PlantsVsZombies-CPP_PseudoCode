// Class: ArtifactSkillButtonUI


/* ArtifactSkillButtonUI::~ArtifactSkillButtonUI() */

void __thiscall ArtifactSkillButtonUI::~ArtifactSkillButtonUI(ArtifactSkillButtonUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066984f0;
  FUN_05476c50(this + 0x110);
  TouchWidget::~TouchWidget((TouchWidget *)this);
  return;
}


/* ArtifactSkillButtonUI::~ArtifactSkillButtonUI() */

void __thiscall ArtifactSkillButtonUI::~ArtifactSkillButtonUI(ArtifactSkillButtonUI *this)

{
  ~ArtifactSkillButtonUI(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactSkillButtonUI::ArtifactSkillButtonUI() */

void __thiscall ArtifactSkillButtonUI::ArtifactSkillButtonUI(ArtifactSkillButtonUI *this)

{
  TouchWidget::TouchWidget((TouchWidget *)this);
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (ArtifactSkillButtonUI)0x0;
  *(undefined ***)this = &PTR_GetClass_066984f0;
  this[0xf9] = (ArtifactSkillButtonUI)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  FUN_05476574(this + 0x110);
  this[0x59] = (ArtifactSkillButtonUI)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillButtonUI::ShowArtifactLevel(int) */

void ArtifactSkillButtonUI::ShowArtifactLevel(int param_1)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined1 *)((ulong)(uint)param_1 + 0xf9) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Lv.%d",asStack_18);
  Sexy::ToWString(asStack_18);
  FUN_054766c8((ulong)(uint)param_1 + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSkillButtonUI::DisableShowArtifactLevel() */

void __thiscall ArtifactSkillButtonUI::DisableShowArtifactLevel(ArtifactSkillButtonUI *this)

{
  this[0xf9] = (ArtifactSkillButtonUI)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillButtonUI::SetContent(int, int) */

void __thiscall
ArtifactSkillButtonUI::SetContent(ArtifactSkillButtonUI *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  RtWeakPtr aRStack_50 [8];
  ArtifactInfo aAStack_48 [4];
  int local_44;
  long local_8;
  
  *(int *)(this + 0xfc) = param_1;
  local_8 = ___stack_chk_guard;
  pcVar6 = *(code **)(*(long *)this + 0x268);
  *(int *)(this + 0x100) = param_2;
  (*pcVar6)();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetArtifactInfoByID(iVar2);
  this[0xf8] = (ArtifactSkillButtonUI)(local_44 < param_2);
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetArtifactByTypeId(iVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 0xd8));
    if ((bVar1) && (0 < param_2)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0xd8));
      uVar4 = FUN_037ac57c(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if ((ulong)(long)param_2 <= uVar4) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0xd8));
        lVar3 = FUN_037ac56c(*(undefined8 *)(lVar3 + 0x10),(long)(param_2 + -1));
        uVar5 = StringHelper::ToImage((string *)(lVar3 + 0x50),false);
        *(undefined8 *)(this + 0xf0) = uVar5;
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  ArtifactInfo::~ArtifactInfo(aAStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillButtonUI::UpdateTouchInfo() */

void __thiscall ArtifactSkillButtonUI::UpdateTouchInfo(ArtifactSkillButtonUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  ArtifactUtils aAStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetArtifactInfoByID(iVar1);
  iVar1 = *(int *)(this + 0xfc);
  if (local_48 != iVar1) {
    local_40 = 1;
    local_44 = 1;
    local_48 = iVar1;
  }
  if (((*(int *)(this + 0x10c) == local_48) && (*(int *)(this + 0x108) == local_40)) &&
     (*(int *)(this + 0x104) == local_44)) {
    ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_48);
  }
  else {
    *(int *)(this + 0x108) = local_40;
    *(int *)(this + 0x10c) = iVar1;
    *(int *)(this + 0x104) = local_44;
    ArtifactUtils::GetArtifactSkillDescription
              (aAStack_50,iVar1,local_44,local_40,*(int *)(this + 0x100) + -1);
    TouchWidget::SetTouchDescription((wstring *)this);
    FUN_05476c50(aAStack_50);
    ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillButtonUI::Draw(Sexy::Graphics*) */

void __thiscall ArtifactSkillButtonUI::Draw(ArtifactSkillButtonUI *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Image *pIVar3;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xf8] != (ArtifactSkillButtonUI)0x0) {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0798);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xf9] != (ArtifactSkillButtonUI)0x0) {
    iVar1 = FUN_037ad3c8(0x1e);
    Sexy::Insets::Insets(aIStack_18,0,*(int *)(this + 0x54),*(int *)(this + 0x50),iVar1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,this + 0x110,aIStack_18,uVar2,aCStack_28,5,1);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSkillButtonUI::TouchBegan(Sexy::Touch const&) */

void ArtifactSkillButtonUI::TouchBegan(Touch *param_1)

{
  TouchWidget::TouchBegan(param_1);
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_037ac7b0(*(long *)(param_1 + 0xe0) + 0xe0);
    return;
  }
  return;
}

