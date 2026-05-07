// Class: NFSLinkageDailySignActivityScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityScrollPanel::~NFSLinkageDailySignActivityScrollPanel() */

void __thiscall
NFSLinkageDailySignActivityScrollPanel::~NFSLinkageDailySignActivityScrollPanel
          (NFSLinkageDailySignActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ed0b8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069ecd90;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Rank_Avatar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DailySignActivityScrollPanel::~DailySignActivityScrollPanel((DailySignActivityScrollPanel *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NFSLinkageDailySignActivityScrollPanel::~NFSLinkageDailySignActivityScrollPanel() */

void __thiscall
NFSLinkageDailySignActivityScrollPanel::~NFSLinkageDailySignActivityScrollPanel
          (NFSLinkageDailySignActivityScrollPanel *this)

{
  ~NFSLinkageDailySignActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityScrollPanel::NFSLinkageDailySignActivityScrollPanel(Sexy::TRect<int>&,
   DailySignBonus&) */

void __thiscall
NFSLinkageDailySignActivityScrollPanel::NFSLinkageDailySignActivityScrollPanel
          (NFSLinkageDailySignActivityScrollPanel *this,TRect *param_1,DailySignBonus *param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityScrollPanel::DailySignActivityScrollPanel
            ((DailySignActivityScrollPanel *)this,param_1,param_2);
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ed0b8;
  *(undefined ***)this = &PTR_GetClass_069ecd90;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Rank_Avatar");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNFSLinkage7DaysLoginReward);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_7DaysLoginReward_const*,Sexy::CBMemberTranslatorX<NFSLinkageDailySignActivityScrollPanel,void(NFSLinkageDailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>>
            ((MessageRouter *)puVar1,Message::NFSLinkage7DaysLoginReward,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityScrollPanel::InitView() */

void __thiscall
NFSLinkageDailySignActivityScrollPanel::InitView(NFSLinkageDailySignActivityScrollPanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SalesProgressBar *this_00;
  NFSLinkageDailySignActivityWidget *this_01;
  vector *pvVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  code *pcVar12;
  Insets aIStack_40 [12];
  int local_34;
  NFSLinkageDailySignActivityWidget *local_30 [2];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04e8e694(5);
  *(undefined4 *)(this + 0x54) = uVar1;
  DailySignActivityScrollPanel::RemoveAllDungeonWidget((DailySignActivityScrollPanel *)this);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::string::string(asStack_20,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (SalesProgressBar *)StringHelper::ToImage(asStack_20,false);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (SalesProgressBar *)0x0) {
    iVar7 = *(int *)(this + 0x50);
    lVar9 = 0;
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar3 = FUN_04e8e694(0x14);
    do {
      uVar10 = *(undefined8 *)(this + 0x110);
      iVar4 = (int)lVar9;
      iVar6 = FUN_04e8dd68(uVar10,*(undefined8 *)(this + 0x118));
      if (iVar6 <= iVar4) break;
      bVar11 = false;
      pvVar8 = (vector *)FUN_04e8dd7c(uVar10,lVar9);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20,pvVar8)
      ;
      if (*(int *)(this + 0xf8) == iVar4) {
        bVar11 = (byte)this[0xfc] ^ 1;
      }
      lVar9 = lVar9 + 1;
      this_01 = ::operator_new(0x1b8);
      NFSLinkageDailySignActivityWidget::NFSLinkageDailySignActivityWidget
                (this_01,iVar4,*(int *)(this + 0xf8),(bool)bVar11,(vector *)asStack_20);
      iVar6 = FUN_04e8e694(5);
      Sexy::Insets::Insets(aIStack_40,0,iVar6 + *(int *)(this + 0x54),iVar7,iVar2 - iVar3);
      pcVar12 = *(code **)(*(long *)this_01 + 0x1a0);
      iVar4 = FUN_04e8e694(5);
      iVar6 = *(int *)(this + 0x54);
      iVar5 = FUN_04e8e694(10);
      Sexy::Insets::Insets
                ((Insets *)local_30,(*(int *)(this + 0x50) - iVar7) / 2,iVar4 + iVar6,iVar5 + iVar7,
                 local_34);
      (*pcVar12)(this_01,(Insets *)local_30);
      DailySignActivityWidget::Init((DailySignActivityWidget *)this_01);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      local_30[0] = this_01;
      std::vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>>::push_back
                ((vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>> *)
                 (this + 0xe0),(DailySignActivityWidget **)local_30);
      iVar6 = FUN_04e8e694(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 + (iVar2 - iVar3);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20);
    } while (lVar9 != 7);
    iVar7 = FUN_04e8e694(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar7;
    iVar7 = FUN_04e8e694(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar7;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NFSLinkageDailySignActivityScrollPanel::OnNFSLinkage7DaysLoginReward(bool, S2C_7DaysLoginReward
   const*) */

void __thiscall
NFSLinkageDailySignActivityScrollPanel::OnNFSLinkage7DaysLoginReward
          (NFSLinkageDailySignActivityScrollPanel *this,bool param_1,S2C_7DaysLoginReward *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  UINFSLinkage *this_00;
  uint *puVar3;
  undefined8 uVar4;
  char *__s;
  TGALogMgr *this_01;
  uint uVar5;
  size_t __n;
  undefined8 local_350;
  undefined8 local_348;
  TGANFSLinkageData aTStack_340 [8];
  undefined1 auStack_338 [16];
  string asStack_328 [8];
  undefined1 auStack_320 [8];
  string asStack_318 [48];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::ShowSevenDaysRewardView(gLawnApp,(vector *)(param_2 + 0x18));
  uVar5 = *(uint *)(param_2 + 0x30);
  __n = (size_t)uVar5;
  this[0xfc] = (NFSLinkageDailySignActivityScrollPanel)0x1;
  *(uint *)(this + 0xf8) = uVar5;
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::UpdateSumDays,uVar5);
  (**(code **)(*(long *)this + 0x310))(this);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_340);
  std::string::append((string *)aTStack_340,"2",__n);
  this_00 = (UINFSLinkage *)UISingletonDialog<UINFSLinkage>::GetSingletonPtr();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar2);
  FUN_05462470(auStack_178,uVar2);
  local_350 = FUN_04e8f8ac(*(undefined8 *)(param_2 + 0x18));
  local_348 = FUN_04e8f8fc(*(undefined8 *)(param_2 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_350,(__normal_iterator *)&local_348), bVar1)
  {
    puVar3 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_350);
    std::string::string(asStack_318,"");
    FUN_05462980(auStack_2e8,asStack_318);
    std::string::~string(asStack_318);
    nop();
    uVar2 = UINFSLinkage::GetCurrentIntegral(this_00);
    uVar4 = FUN_0546065c(auStack_2d8,uVar2);
    FUN_054603b8(uVar4,&DAT_05593348);
    ProfileChangeItemAmount(*puVar3,puVar3[1],false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_318);
    __n = (size_t)*puVar3;
    uVar5 = 0;
    if (*puVar3 == 0x5b18) {
      uVar5 = puVar3[1];
    }
    uVar4 = FUN_0546065c(auStack_2d8,uVar5);
    uVar4 = FUN_054603b8(uVar4,&DAT_05593348);
    uVar2 = UINFSLinkage::GetCurrentIntegral(this_00);
    uVar4 = FUN_0546065c(uVar4,uVar2);
    FUN_054603b8(uVar4,&DAT_05594620);
    uVar4 = FUN_0546065c(auStack_168,*puVar3);
    uVar4 = FUN_054603b8(uVar4,&DAT_05593348);
    FUN_0546065c(uVar4,puVar3[1]);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_350);
  }
  FUN_05462824(asStack_318,auStack_2e8);
  FUN_05474278(auStack_338,asStack_318);
  std::string::~string(asStack_318);
  DString::DString((DString *)asStack_318,*(int *)(param_2 + 0x30));
  __s = (char *)DString::c_str((DString *)asStack_318);
  std::string::append(asStack_328,__s,__n);
  DString::~DString((DString *)asStack_318);
  FUN_05462824(asStack_318,auStack_178);
  FUN_05474278(auStack_320,asStack_318);
  std::string::~string(asStack_318);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogNFSLinkage(this_01,aTStack_340);
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_340);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

