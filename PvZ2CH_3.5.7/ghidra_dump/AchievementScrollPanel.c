// Class: AchievementScrollPanel


/* AchievementScrollPanel::~AchievementScrollPanel() */

void __thiscall AchievementScrollPanel::~AchievementScrollPanel(AchievementScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06802620;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<AchievementContentInfo,std::allocator<AchievementContentInfo>>::~vector
            ((vector<AchievementContentInfo,std::allocator<AchievementContentInfo>> *)(this + 0xd8))
  ;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AchievementScrollPanel::~AchievementScrollPanel() */

void __thiscall AchievementScrollPanel::~AchievementScrollPanel(AchievementScrollPanel *this)

{
  ~AchievementScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementScrollPanel::InitView() */

void __thiscall AchievementScrollPanel::InitView(AchievementScrollPanel *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  AchievementContentInfo *pAVar6;
  AchievementContent *this_01;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_041d3f08(5);
  FUN_05476574(auStack_10);
  uVar9 = 0;
  iVar8 = iVar1;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0xd8);
    uVar7 = FUN_041d3afc(uVar10,*(undefined8 *)(this + 0xe0));
    if (uVar7 <= uVar9) break;
    pAVar6 = (AchievementContentInfo *)FUN_041d3b1c(uVar10,uVar9);
    this_01 = ::operator_new(0x140);
    AchievementContent::AchievementContent(this_01,pAVar6,(int)uVar9);
    uVar2 = FUN_041d3f08(0x15e);
    uVar3 = FUN_041d3f08(0x46);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar1,iVar8,uVar2,uVar3);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    iVar4 = FUN_041d3f08(7);
    iVar5 = FUN_041d3f08(0x46);
    iVar8 = iVar8 + iVar4 + iVar5;
    uVar9 = uVar9 + 1;
  }
  *(int *)(this + 0x54) = iVar8;
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AchievementScrollPanel::AchievementScrollPanel(Sexy::TRect<int>&,
   std::vector<AchievementContentInfo, std::allocator<AchievementContentInfo> > const&) */

void __thiscall
AchievementScrollPanel::AchievementScrollPanel
          (AchievementScrollPanel *this,TRect *param_1,vector *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06802620;
  std::vector<AchievementContentInfo,std::allocator<AchievementContentInfo>>::vector
            ((vector<AchievementContentInfo,std::allocator<AchievementContentInfo>> *)(this + 0xd8),
             param_2);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}

