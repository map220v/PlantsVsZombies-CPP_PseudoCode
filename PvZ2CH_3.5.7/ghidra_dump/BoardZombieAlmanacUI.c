// Class: BoardZombieAlmanacUI


/* BoardZombieAlmanacUI::AddAlmanacZombie(std::string const&) */

void __thiscall BoardZombieAlmanacUI::AddAlmanacZombie(BoardZombieAlmanacUI *this,string *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf8),param_1);
  return;
}


/* BoardZombieAlmanacUI::ButtonPress(int) */

int BoardZombieAlmanacUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to BoardZombieAlmanacUI::ButtonPress(int) */

void __thiscall BoardZombieAlmanacUI::ButtonPress(BoardZombieAlmanacUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardZombieAlmanacUI::~BoardZombieAlmanacUI() */

void __thiscall BoardZombieAlmanacUI::~BoardZombieAlmanacUI(BoardZombieAlmanacUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06735470;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06735140;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardZombieAlmanacUI::~BoardZombieAlmanacUI() */

void __thiscall BoardZombieAlmanacUI::~BoardZombieAlmanacUI(BoardZombieAlmanacUI *this)

{
  ~BoardZombieAlmanacUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardZombieAlmanacUI::showNextZombie() */

void __thiscall BoardZombieAlmanacUI::showNextZombie(BoardZombieAlmanacUI *this)

{
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  PVZ2UIAlmanacObjectDisplayer *pPVar9;
  PVZ2UIAlmanacInfoDisplayer *pPVar10;
  RecommendPlantUI *pRVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  int local_48 [4];
  int local_38 [2];
  int local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x18))();
      *(undefined8 *)(this + 0xe0) = 0;
    }
  }
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
      *(undefined8 *)(this + 0xe8) = 0;
    }
  }
  if (*(long *)(this + 0xf0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf0) + 0x18))();
      *(undefined8 *)(this + 0xf0) = 0;
    }
  }
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  this_00 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
            (this + 0xf8);
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x110);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front(this_00);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_18,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)this_00,local_18[0]);
  iVar1 = FUN_03b839d4(0x16);
  iVar7 = *(int *)(this + 0x120);
  iVar2 = FUN_03b839d4(0x46);
  iVar6 = *(int *)(this + 0x124);
  iVar3 = FUN_03b839d4(800);
  iVar4 = FUN_03b839d4(0x2c);
  iVar5 = FUN_03b839d4(0x139);
  Sexy::Insets::Insets((Insets *)local_48,iVar1 + iVar7,iVar2 + iVar6,iVar3 - iVar4,iVar5);
  Sexy::Insets::Insets((Insets *)local_38,(Insets *)local_48);
  local_30 = FUN_03b839d4(0x100);
  local_38[0] = local_48[0];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_01);
  pPVar9 = ::operator_new(0x110);
  PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
            (pPVar9,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  *(PVZ2UIAlmanacObjectDisplayer **)(this + 0xe8) = pPVar9;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  (**(code **)(**(long **)(this + 0xe8) + 0x1a0))(*(long **)(this + 0xe8),(Insets *)local_38);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_48);
  iVar7 = local_48[0] + local_30;
  iVar6 = FUN_03b839d4(8);
  local_28._0_4_ = iVar7 + iVar6;
  iVar7 = FUN_03b839d4(0x108);
  iVar6 = FUN_03b839d4(0x58);
  local_1c = local_1c - iVar6;
  local_20 = local_20 - iVar7;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_01);
  pPVar10 = ::operator_new(0x100);
  PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
            (pPVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_18,1,0,1);
  *(PVZ2UIAlmanacInfoDisplayer **)(this + 0xe0) = pPVar10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  (**(code **)(**(long **)(this + 0xe0) + 0x1a0))(*(long **)(this + 0xe0),(Insets *)&local_28);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  iVar6 = (int)local_28;
  iVar7 = local_28._4_4_ + local_1c;
  iVar2 = FUN_03b839d4(8);
  iVar1 = local_20;
  iVar3 = FUN_03b839d4(0x50);
  Sexy::Insets::Insets((Insets *)local_18,iVar6,iVar7 + iVar2,iVar1,iVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_01);
  pRVar11 = ::operator_new(0xf0);
  RecommendPlantUI::RecommendPlantUI(pRVar11,aRStack_50,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  *(RecommendPlantUI **)(this + 0xf0) = pRVar11;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardZombieAlmanacUI::BoardZombieAlmanacUI(std::vector<std::string, std::allocator<std::string >
   > const&) */

void __thiscall
BoardZombieAlmanacUI::BoardZombieAlmanacUI(BoardZombieAlmanacUI *this,vector *param_1)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *pPVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06735140;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06735470;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf8),param_1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  this_00 = gLawnApp;
  std::string::string((string *)&local_40,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(this_00,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar1 = FUN_03b839d4(800);
  iVar2 = FUN_03b839d4(0x1d6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar1) / 2,
             (*(int *)(this + 0x54) - iVar2) / 2,iVar1,iVar2);
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  showNextZombie(this);
  FUN_05478178(awStack_78,L"[ARENA_ENDING_BTN]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar5,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40)
  ;
  *(PVZ2UIButton **)(this + 0x118) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  plVar8 = *(long **)(this + 0x118);
  iVar1 = FUN_03b839d4(0xb4);
  uVar3 = FUN_03b839d4(0x1c2);
  uVar4 = FUN_03b839d4(0x46);
  (**(code **)(*plVar8 + 0x198))(plVar8,(*(int *)(this + 0x50) - iVar1) / 2,uVar3,iVar1,uVar4);
  pPVar5 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06accbe0,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06accb08,5);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  plVar8 = *(long **)(this + 0x118);
  pcVar7 = *(code **)(*plVar8 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline);
  (*pcVar7)(plVar8,uVar6);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
  plVar8 = *(long **)(gLawnApp + 0x9f0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 800))(plVar8,1);
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardZombieAlmanacUI::ButtonDepress(int) */

void __thiscall BoardZombieAlmanacUI::ButtonDepress(BoardZombieAlmanacUI *this,int param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    lVar1 = FUN_03b839c8(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
    if (lVar1 != 0) {
      showNextZombie(this);
      return;
    }
    LawnApp::KillBoardZombieAlmanacUI(gLawnApp);
    plVar2 = *(long **)(gLawnApp + 0x9f0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 800))(plVar2,0);
    }
  }
  return;
}


/* non-virtual thunk to BoardZombieAlmanacUI::ButtonDepress(int) */

void __thiscall BoardZombieAlmanacUI::ButtonDepress(BoardZombieAlmanacUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardZombieAlmanacUI::Draw(Sexy::Graphics*) */

void __thiscall BoardZombieAlmanacUI::Draw(BoardZombieAlmanacUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x120));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acca78);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  pcVar4 = *(code **)(*(long *)this + 0x290);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  iVar2 = FUN_03b839d4(0xf);
  iVar1 = *(int *)(this + 0x124);
  TodStringTranslate(L"[BOARD_ALMANAC_WARNING]");
  (*pcVar4)(this,param_1,uVar3,aIStack_18,iVar2 + iVar1,auStack_20);
  FUN_05476c50(auStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

