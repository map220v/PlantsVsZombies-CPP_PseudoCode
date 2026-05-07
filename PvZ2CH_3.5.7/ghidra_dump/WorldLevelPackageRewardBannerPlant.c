// Class: WorldLevelPackageRewardBannerPlant


/* WorldLevelPackageRewardBannerPlant::~WorldLevelPackageRewardBannerPlant() */

void __thiscall
WorldLevelPackageRewardBannerPlant::~WorldLevelPackageRewardBannerPlant
          (WorldLevelPackageRewardBannerPlant *this)

{
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06869970;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  WorldLevelPackageRewardBannerWidget::~WorldLevelPackageRewardBannerWidget
            ((WorldLevelPackageRewardBannerWidget *)this);
  return;
}


/* WorldLevelPackageRewardBannerPlant::~WorldLevelPackageRewardBannerPlant() */

void __thiscall
WorldLevelPackageRewardBannerPlant::~WorldLevelPackageRewardBannerPlant
          (WorldLevelPackageRewardBannerPlant *this)

{
  ~WorldLevelPackageRewardBannerPlant(this);
  AK::FreeHook(this);
  return;
}


/* WorldLevelPackageRewardBannerPlant::WorldLevelPackageRewardBannerPlant(int) */

void __thiscall
WorldLevelPackageRewardBannerPlant::WorldLevelPackageRewardBannerPlant
          (WorldLevelPackageRewardBannerPlant *this,int param_1)

{
  WorldLevelPackageRewardBannerWidget::WorldLevelPackageRewardBannerWidget
            ((WorldLevelPackageRewardBannerWidget *)this,param_1);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06869970;
  return;
}


/* WorldLevelPackageRewardBannerPlant::SetPlant(std::string) */

void WorldLevelPackageRewardBannerPlant::SetPlant(long param_1)

{
  string *psVar1;
  PlantDisplayBoard *this;
  
  if (*(PlantDisplayFrame **)(param_1 + 0xe8) != (PlantDisplayFrame *)0x0) {
    psVar1 = (string *)
             PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(param_1 + 0xe8));
    PlantDisplayBoard::SetPlantName(psVar1);
    this = (PlantDisplayBoard *)
           PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(param_1 + 0xe8));
    PlantDisplayBoard::DisplayNexyAction(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardBannerPlant::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageRewardBannerPlant::Draw(WorldLevelPackageRewardBannerPlant *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    this_00 = *(SalesProgressBar **)(this + 0xd8);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardBannerPlant::InitView() */

void __thiscall
WorldLevelPackageRewardBannerPlant::InitView(WorldLevelPackageRewardBannerPlant *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  PlantDisplayFrame *this_00;
  undefined8 uVar4;
  long lVar5;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  CachedUIResourcePtr<Sexy::Image> aCStack_60 [40];
  GAME_ITEM_INFO aGStack_38 [16];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
  std::string::string(asStack_78,"IMAGE_UI_LEVELUP_SKILL_BG");
  nop();
  pcVar3 = (char *)FUN_0547429c(asStack_78);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_60,pcVar3);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_60);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_60);
  Sexy::Insets::Insets((Insets *)aCStack_60,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_00 = ::operator_new(0x108);
  PlantDisplayFrame::PlantDisplayFrame(this_00,asStack_28,(TRect *)aCStack_60,asStack_78);
  lVar5 = *(long *)this_00;
  *(PlantDisplayFrame **)(this + 0xe8) = this_00;
  (**(code **)(lVar5 + 0x1a0))(this_00,aCStack_60);
  PlantDisplayFrame::InitView(*(PlantDisplayFrame **)(this + 0xe8));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
  lVar5 = PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(this + 0xe8));
  FUN_045aa900(lVar5 + 0xd2);
  uVar4 = PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(this + 0xe8));
  iVar1 = FUN_045aaddc(0x28);
  iVar2 = FUN_045aaddc(10);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,(float)-iVar1,(float)iVar2);
  PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_68,local_64,uVar4);
  lVar5 = PlantDisplayFrame::GetPlantDisplayPtr(*(PlantDisplayFrame **)(this + 0xe8));
  iVar1 = FUN_045aaddc(0xcd);
  iVar2 = FUN_045aaddc(0xae);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,(float)-iVar1,(float)iVar2);
  FUN_045aa62c(local_68,local_64,lVar5 + 0x124);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  std::string::~string(asStack_78);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

