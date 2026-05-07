// Class: PVPSkillUpgrade::SkillButton


/* PVPSkillUpgrade::SkillButton::SetSkill(std::string const&) */

void PVPSkillUpgrade::SkillButton::SetSkill(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x300);
  return;
}


/* PVPSkillUpgrade::SkillButton::GetSkill() */

SkillButton * __thiscall PVPSkillUpgrade::SkillButton::GetSkill(SkillButton *this)

{
  return this + 0x300;
}


/* PVPSkillUpgrade::SkillButton::~SkillButton() */

void __thiscall PVPSkillUpgrade::SkillButton::~SkillButton(SkillButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06953390;
  *(undefined ***)(this + 0x198) = &PTR__SkillButton_069536e8;
  std::string::~string((string *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVPSkillUpgrade::SkillButton::~SkillButton() */

void __thiscall PVPSkillUpgrade::SkillButton::~SkillButton(SkillButton *this)

{
  ~SkillButton(this + -0x198);
  return;
}


/* PVPSkillUpgrade::SkillButton::~SkillButton() */

void __thiscall PVPSkillUpgrade::SkillButton::~SkillButton(SkillButton *this)

{
  ~SkillButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPSkillUpgrade::SkillButton::~SkillButton() */

void __thiscall PVPSkillUpgrade::SkillButton::~SkillButton(SkillButton *this)

{
  ~SkillButton(this + -0x198);
  return;
}


/* PVPSkillUpgrade::SkillButton::SetSelect(bool) */

void __thiscall PVPSkillUpgrade::SkillButton::SetSelect(SkillButton *this,bool param_1)

{
  this[0x2fa] = (SkillButton)param_1;
  return;
}


/* PVPSkillUpgrade::SkillButton::SkillButton(int, Sexy::ButtonListener*, std::wstring const&,
   Sexy::Color const&) */

void __thiscall
PVPSkillUpgrade::SkillButton::SkillButton
          (SkillButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4)

{
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_06953390;
  *(undefined ***)(this + 0x198) = &PTR__SkillButton_069536e8;
  Set8BytesTo0(this + 0x300);
  *(undefined4 *)(this + 0x2fc) = 0;
  this[0x2fa] = (SkillButton)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::SkillButton::DrawLevel(Sexy::Graphics*, int, Sexy::TRect<int> const&) */

void __thiscall
PVPSkillUpgrade::SkillButton::DrawLevel
          (SkillButton *this,Graphics *param_1,int param_2,TRect *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_04b00ba8(0xf);
  iVar1 = *(int *)param_3;
  iVar6 = FUN_04b00ba8(10);
  iVar2 = *(int *)(param_3 + 4);
  iVar7 = FUN_04b00ba8(0x1e);
  iVar3 = *(int *)(param_3 + 8);
  iVar8 = FUN_04b00ba8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar5 + iVar1,iVar6 + iVar2,iVar3 - iVar7,iVar8);
  FUN_05476574(auStack_30);
  switch(param_2) {
  case 1:
    FUN_054772c4(auStack_30,&DAT_0573efb0);
    break;
  case 2:
    FUN_054772c4(auStack_30,&DAT_0573efb8);
    break;
  case 3:
    FUN_054772c4(auStack_30,&DAT_0573efc8);
    break;
  case 4:
    FUN_054772c4(auStack_30,&DAT_0573efd8);
  }
  uVar4 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aCStack_18,1,1);
  FUN_05476c50(auStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::SkillButton::DrawSkillIcon(Sexy::Graphics*, Sexy::TRect<int> const&) */

void __thiscall
PVPSkillUpgrade::SkillButton::DrawSkillIcon(SkillButton *this,Graphics *param_1,TRect *param_2)

{
  int iVar1;
  SeedPacketUtils *this_00;
  long lVar2;
  ResourceInfo *pRVar3;
  GraphicsAutoState aGStack_40 [8];
  Color aCStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  if (*(int *)(this + 0x2fc) == 0) {
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Insets::Insets(aIStack_28,0,0,0,0xff);
    Sexy::ColorLerp((Sexy *)aCStack_38,0x3f000000,(Color *)aIStack_18,aIStack_28);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::SetColor(param_1,aCStack_38);
  }
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar2 = SeedPacketUtils::GetZombiePacketRenderData
                    (this_00,(string *)(this + 0x300),(string *)&PVPManager::PacketsSkillPrefix,-1);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x170));
  if (pRVar3 != (ResourceInfo *)0x0) {
    iVar1 = FUN_04b00ba8(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar1 + *(int *)param_2,iVar1 + *(int *)(param_2 + 4),
               iVar1 * -2 + *(int *)(param_2 + 8),iVar1 * -2 + *(int *)(param_2 + 0xc));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x170));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(TRect *)aIStack_18,(TRect *)(lVar2 + 8));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillUpgrade::SkillButton::DrawLock(Sexy::Graphics*, Sexy::TRect<int> const&) */

void __thiscall
PVPSkillUpgrade::SkillButton::DrawLock(SkillButton *this,Graphics *param_1,TRect *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar7;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 4);
  iVar4 = (iVar1 << 1) / 3;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83118);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83118);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = (iVar5 * iVar4) / iVar6;
  }
  iVar5 = *(int *)(param_2 + 8);
  iVar6 = *(int *)param_2;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b83118);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,iVar6 + (iVar5 - iVar3) / 2,iVar2 + (iVar1 - iVar4) / 2,iVar3,iVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::SkillButton::Draw(Sexy::Graphics*, Sexy::TRect<int> const&, bool) */

void __thiscall
PVPSkillUpgrade::SkillButton::Draw(SkillButton *this,Graphics *param_1,TRect *param_2,bool param_3)

{
  Image *pIVar1;
  SeedPacketUtils *this_00;
  long lVar2;
  ResourceInfo *pRVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVPManager::GetLevelIconString
            ((PVPManager *)(ulong)*(uint *)(this + 0x2fc),(int)___stack_chk_guard);
  pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  if (pIVar1 != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar1,*(int *)param_2,*(int *)(param_2 + 4),*(int *)(param_2 + 8),
               *(int *)(param_2 + 0xc));
  }
  DrawSkillIcon(this,param_1,param_2);
  iVar4 = *(int *)(this + 0x2fc);
  if (iVar4 == 0) {
    DrawLock(this,param_1,param_2);
    iVar4 = *(int *)(this + 0x2fc);
  }
  if (iVar4 - 1U < 4) {
    DrawLevel(this,param_1,iVar4,param_2);
  }
  if (param_3) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar2 = SeedPacketUtils::GetZombiePacketRenderData
                      (this_00,(string *)(this + 0x300),(string *)&PVPManager::PacketsSkillPrefix,-1
                      );
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x170));
    if (pRVar3 != (ResourceInfo *)0x0) {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x170));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,param_2,(TRect *)(lVar2 + 0x128));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillUpgrade::SkillButton::Draw(Sexy::Graphics*) */

void __thiscall PVPSkillUpgrade::SkillButton::Draw(SkillButton *this,Graphics *param_1)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw(this,param_1,(TRect *)aIStack_18,(bool)this[0x2fa]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

