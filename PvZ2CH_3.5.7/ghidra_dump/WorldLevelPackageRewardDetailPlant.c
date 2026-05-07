// Class: WorldLevelPackageRewardDetailPlant


/* WorldLevelPackageRewardDetailPlant::~WorldLevelPackageRewardDetailPlant() */

void __thiscall
WorldLevelPackageRewardDetailPlant::~WorldLevelPackageRewardDetailPlant
          (WorldLevelPackageRewardDetailPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_06869fd0;
  WorldLevelPackageRewardDetailWidget::~WorldLevelPackageRewardDetailWidget
            ((WorldLevelPackageRewardDetailWidget *)this);
  return;
}


/* WorldLevelPackageRewardDetailPlant::~WorldLevelPackageRewardDetailPlant() */

void __thiscall
WorldLevelPackageRewardDetailPlant::~WorldLevelPackageRewardDetailPlant
          (WorldLevelPackageRewardDetailPlant *this)

{
  ~WorldLevelPackageRewardDetailPlant(this);
  AK::FreeHook(this);
  return;
}


/* WorldLevelPackageRewardDetailPlant::WorldLevelPackageRewardDetailPlant(int) */

void __thiscall
WorldLevelPackageRewardDetailPlant::WorldLevelPackageRewardDetailPlant
          (WorldLevelPackageRewardDetailPlant *this,int param_1)

{
  WorldLevelPackageRewardDetailWidget::WorldLevelPackageRewardDetailWidget
            ((WorldLevelPackageRewardDetailWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06869fd0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardDetailPlant::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageRewardDetailPlant::Draw(WorldLevelPackageRewardDetailPlant *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    this_00 = *(SalesProgressBar **)(this + 0xd8);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  iVar2 = FUN_045aaddc(0);
  iVar3 = FUN_045aaddc(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,*(int *)(this + 0x50),iVar3);
  bVar1 = std::operator!=((wstring *)(this + 0xe8),L"");
  if (bVar1) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,(wstring *)(this + 0xe8),aIStack_28,uVar4,(Color *)aIStack_18,5,1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardDetailPlant::InitHeadshotPopanim(std::string) */

void WorldLevelPackageRewardDetailPlant::InitHeadshotPopanim(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string *psVar3;
  PopAnimRig *pPVar4;
  UIWidgetAnim *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pPVar4 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this);
  uVar1 = FUN_045aaddc(0xffffffe2);
  uVar2 = FUN_045aaddc(0x14);
  (**(code **)(*(long *)this + 0x198))
            (this,uVar1,uVar2,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  this[0x59] = (UIWidgetAnim)0x0;
  UIWidgetAnim::SetAnimRig(this,pPVar4);
  std::string::string((string *)aRStack_10,"idle");
  UIWidgetAnim::SetLabel((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  (**(code **)(*param_1 + 0x60))(param_1,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardDetailPlant::InitView() */

void __thiscall
WorldLevelPackageRewardDetailPlant::InitView(WorldLevelPackageRewardDetailPlant *this)

{
  string asStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [16];
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldLevelPackageRewardDetailWidget::InitView((WorldLevelPackageRewardDetailWidget *)this);
  GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
  FUN_05475d88(asStack_40,auStack_28);
  InitHeadshotPopanim(this,asStack_40);
  std::string::~string(asStack_40);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

