// Class: RedPackLeaderBoardScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackLeaderBoardScrollPanel::InitView() */

void __thiscall RedPackLeaderBoardScrollPanel::InitView(RedPackLeaderBoardScrollPanel *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  long *plVar6;
  RedPackLeaderBoardContent *this_01;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  wstring awStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_041bd038(10);
  FUN_05476574(awStack_20);
  uVar11 = 0;
  iVar9 = iVar2;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0xd8);
    uVar7 = FUN_041bbec0(uVar10,*(undefined8 *)(this + 0xe0));
    if (uVar7 <= uVar11) break;
    puVar8 = (undefined8 *)FUN_041bbecc(uVar10,uVar11);
    FUN_05475d88(asStack_18,*puVar8);
    bVar1 = std::operator==(asStack_18,"");
    if (bVar1) {
      PlayerInfo::AM_GetName();
    }
    else {
      Sexy::UTF8StringToSexyString(asStack_18);
    }
    FUN_054766c8(awStack_20,awStack_10);
    FUN_05476c50(awStack_10);
    plVar6 = (long *)FUN_041bbecc(*(undefined8 *)(this + 0xd8),uVar11);
    iVar5 = *(int *)(*plVar6 + 0x10);
    Sexy::ToWString((string *)(*plVar6 + 8));
    this_01 = ::operator_new(0xf8);
    RedPackLeaderBoardContent::RedPackLeaderBoardContent(this_01,iVar5 + 1,awStack_20,awStack_10);
    FUN_05476c50(awStack_10);
    iVar3 = FUN_041bd038(0x14);
    iVar5 = *(int *)(this + 0x50);
    uVar4 = FUN_041bd038(100);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar2,iVar9,iVar5 - iVar3,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    iVar5 = FUN_041bd038(10);
    iVar3 = FUN_041bd038(100);
    iVar9 = iVar9 + iVar5 + iVar3;
    std::string::~string(asStack_18);
    uVar11 = uVar11 + 1;
  }
  *(int *)(this + 0x54) = iVar9;
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackLeaderBoardScrollPanel::~RedPackLeaderBoardScrollPanel() */

void __thiscall
RedPackLeaderBoardScrollPanel::~RedPackLeaderBoardScrollPanel(RedPackLeaderBoardScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_067ffdd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::~vector
            ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)
             (this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RedPackLeaderBoardScrollPanel::~RedPackLeaderBoardScrollPanel() */

void __thiscall
RedPackLeaderBoardScrollPanel::~RedPackLeaderBoardScrollPanel(RedPackLeaderBoardScrollPanel *this)

{
  ~RedPackLeaderBoardScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* RedPackLeaderBoardScrollPanel::RedPackLeaderBoardScrollPanel(Sexy::TRect<int>&,
   std::vector<RedPackLeaderBoardInfo*, std::allocator<RedPackLeaderBoardInfo*> > const&) */

void __thiscall
RedPackLeaderBoardScrollPanel::RedPackLeaderBoardScrollPanel
          (RedPackLeaderBoardScrollPanel *this,TRect *param_1,vector *param_2)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  
  Sexy::Widget::Widget((Widget *)this);
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_067ffdd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::clear
            ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)this_00);
  std::vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>>::operator=
            ((vector<RedPackLeaderBoardInfo*,std::allocator<RedPackLeaderBoardInfo*>> *)this_00,
             param_2);
  InitView(this);
  return;
}

