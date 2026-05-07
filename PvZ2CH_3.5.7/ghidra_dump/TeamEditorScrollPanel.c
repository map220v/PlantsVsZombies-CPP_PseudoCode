// Class: TeamEditorScrollPanel


/* TeamEditorScrollPanel::OnTutorialBtnPressed(int) */

void TeamEditorScrollPanel::OnTutorialBtnPressed(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x310))();
  return;
}


/* TeamEditorScrollPanel::GetPlantTeamCount() */

undefined8 __thiscall TeamEditorScrollPanel::GetPlantTeamCount(TeamEditorScrollPanel *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0xf0) == 0) {
    uVar1 = FUN_042c62c4(*(undefined8 *)(this + 0x260),*(undefined8 *)(this + 0x268));
  }
  return uVar1;
}


/* TeamEditorScrollPanel::RemoveLastSelected() */

void __thiscall TeamEditorScrollPanel::RemoveLastSelected(TeamEditorScrollPanel *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0xf0) != 1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe0);
  if (-1 < iVar1) {
    uVar4 = *(undefined8 *)(this + 0x248);
    uVar2 = FUN_042c62c4(uVar4,*(undefined8 *)(this + 0x250));
    if ((ulong)(long)iVar1 < uVar2) {
      puVar3 = (undefined8 *)FUN_042c62d0(uVar4,(long)iVar1);
      if ((TeamSeed *)*puVar3 != (TeamSeed *)0x0) {
        TeamSeed::SetSelected((TeamSeed *)*puVar3,false);
      }
    }
  }
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::TriggerTutorial() */

void __thiscall TeamEditorScrollPanel::TriggerTutorial(TeamEditorScrollPanel *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined8 *)(this + 0x278);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  Sexy::Insets::Insets(aIStack_18);
  GameMaskUI::ShowMask(uVar1,2,asStack_20,aIStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::HasPlantInTeam(int) */

void __thiscall TeamEditorScrollPanel::HasPlantInTeam(TeamEditorScrollPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      iVar2 = TeamSeed::GetPlantId((TeamSeed *)*puVar3);
      if (iVar2 == param_1) break;
      FUN_042c71e8((exception_ptr *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::GetWidgetButtonId(int) */

void __thiscall TeamEditorScrollPanel::GetWidgetButtonId(TeamEditorScrollPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      iVar2 = TeamSeed::GetButtonId((TeamSeed *)*puVar3);
      if (iVar2 == param_1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        uVar4 = *puVar3;
        goto LAB_042c739c;
      }
      FUN_042c71e8();
    }
  }
  uVar4 = 0;
LAB_042c739c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::GetRecoverGems() */

void __thiscall TeamEditorScrollPanel::GetRecoverGems(TeamEditorScrollPanel *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    *(undefined4 *)(this + 0xe8) = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x260));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      iVar2 = AccessoryContent::GetId((AccessoryContent *)*puVar4);
      *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + iVar2;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar3 = *(undefined4 *)(this + 0xe8);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::HasPlantFlag(std::string) */

void __thiscall TeamEditorScrollPanel::HasPlantFlag(TeamEditorScrollPanel *this,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  PlantType *pPVar3;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x260));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
          cVar1 = '\0', bVar2) {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      WishContent::GetProps();
      pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      FUN_05475d88(asStack_10,param_2);
      cVar1 = PlantType::HasPlantAdventureFlag(pPVar3,asStack_10);
      std::string::~string(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 != '\0') break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* TeamEditorScrollPanel::SelectPlant(int) */

void __thiscall TeamEditorScrollPanel::SelectPlant(TeamEditorScrollPanel *this,int param_1)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ProfileMgr *this_01;
  long lVar5;
  TeamEditorScrollPanel *this_02;
  TeamSeed *pTVar6;
  undefined8 uVar7;
  
  if (-1 < param_1) {
    uVar7 = *(undefined8 *)(this + 0x248);
    uVar3 = FUN_042c62c4(uVar7,*(undefined8 *)(this + 0x250));
    if ((ulong)(long)param_1 < uVar3) {
      puVar4 = (undefined8 *)FUN_042c62d0(uVar7,(long)param_1);
      if (((TeamSeed *)*puVar4 != (TeamSeed *)0x0) &&
         (cVar1 = TeamSeed::IsInAdventure((TeamSeed *)*puVar4), cVar1 != '\0')) {
        return;
      }
    }
  }
  if (*(int *)(this + 0xf0) == 1) {
    if (param_1 == -1) {
      *(undefined4 *)(this + 0xe0) = 0xffffffff;
    }
    else {
      if (*(int *)(this + 0xe0) == param_1) {
        puVar4 = (undefined8 *)FUN_042c62d0(*(undefined8 *)(this + 0x248),(long)param_1);
        pTVar6 = (TeamSeed *)*puVar4;
        lVar5 = LawnApp::GetAdventureTeamEditorUI(gLawnApp);
        if (((pTVar6 != (TeamSeed *)0x0) && (lVar5 != 0)) &&
           (this_02 = (TeamEditorScrollPanel *)FUN_042c62bc(*(undefined8 *)(lVar5 + 0x220)),
           this_02 != (TeamEditorScrollPanel *)0x0)) {
          iVar2 = TeamSeed::GetPlantId(pTVar6);
          cVar1 = HasPlantInTeam(this_02,iVar2);
          if (cVar1 != '\0') {
            return;
          }
        }
      }
      RemoveLastSelected(this);
      if (-1 < param_1) {
        uVar7 = *(undefined8 *)(this + 0x248);
        uVar3 = FUN_042c62c4(uVar7,*(undefined8 *)(this + 0x250));
        if ((ulong)(long)param_1 < uVar3) {
          puVar4 = (undefined8 *)FUN_042c62d0(uVar7,(long)param_1);
          pTVar6 = (TeamSeed *)*puVar4;
          if ((pTVar6 != (TeamSeed *)0x0) &&
             (cVar1 = TeamSeed::IsInAdventure(pTVar6), cVar1 == '\0')) {
            TeamSeed::SetSelected(pTVar6,true);
            this_00 = gMessageRouter;
            iVar2 = TeamSeed::GetPlantId(pTVar6);
            MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::AddPlantToTeam,iVar2);
            *(int *)(this + 0xe0) = param_1;
          }
        }
      }
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar5 = ProfileMgr::GetCurrentProfile(this_01);
      iVar2 = FUN_042c62b8(*(undefined4 *)(lVar5 + 0x40));
      if (iVar2 == 0x27) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        return;
      }
    }
  }
  return;
}


/* TeamEditorScrollPanel::UnSelectPlant(int) */

void __thiscall TeamEditorScrollPanel::UnSelectPlant(TeamEditorScrollPanel *this,int param_1)

{
  undefined *this_00;
  int iVar1;
  TeamSeed *this_01;
  long lVar2;
  TeamEditorScrollPanel *this_02;
  
  if (*(int *)(this + 0xf0) == 0) {
    this_01 = (TeamSeed *)GetWidgetButtonId(this,param_1);
    this_00 = gMessageRouter;
    if (this_01 != (TeamSeed *)0x0) {
      iVar1 = TeamSeed::GetPlantId(this_01);
      MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::RemovePlantFromTeam,iVar1);
    }
    lVar2 = LawnApp::GetAdventureTeamEditorUI(gLawnApp);
    if ((lVar2 != 0) &&
       (this_02 = (TeamEditorScrollPanel *)FUN_042c62c0(*(undefined8 *)(lVar2 + 0x228)),
       this_02 != (TeamEditorScrollPanel *)0x0)) {
      RemoveLastSelected(this_02);
      return;
    }
  }
  return;
}


/* TeamEditorScrollPanel::ButtonDepress(int) */

void __thiscall TeamEditorScrollPanel::ButtonDepress(TeamEditorScrollPanel *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xf0);
  if (iVar1 == 0) {
    UnSelectPlant(this,param_1);
    iVar1 = *(int *)(this + 0xf0);
  }
  if (iVar1 == 1) {
    SelectPlant(this,param_1);
    return;
  }
  return;
}


/* non-virtual thunk to TeamEditorScrollPanel::ButtonDepress(int) */

void __thiscall TeamEditorScrollPanel::ButtonDepress(TeamEditorScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* TeamEditorScrollPanel::GetTeamChooser() */

void TeamEditorScrollPanel::GetTeamChooser(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  if (*(int *)(in_x0 + 0xf0) == 1) {
    std::vector<TeamSeed*,std::allocator<TeamSeed*>>::vector
              ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)in_x8,(vector *)(in_x0 + 0x248));
  }
  else {
    if (((gLawnApp == (LawnApp *)0x0) ||
        (lVar1 = LawnApp::GetAdventureTeamEditorUI(gLawnApp), lVar1 == 0)) ||
       (lVar2 = FUN_042c62bc(*(undefined8 *)(lVar1 + 0x220)), lVar2 == 0)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
      return;
    }
    FUN_042c62c0(*(undefined8 *)(lVar1 + 0x228));
    GetTeamChooser();
  }
  return;
}


/* TeamEditorScrollPanel::GetChoosedTeamSeed() */

void TeamEditorScrollPanel::GetChoosedTeamSeed(void)

{
  long in_x0;
  long lVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  if (*(int *)(in_x0 + 0xf0) == 0) {
    std::vector<TeamSeed*,std::allocator<TeamSeed*>>::vector
              ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)in_x8,(vector *)(in_x0 + 0x260));
    return;
  }
  if (((gLawnApp != (LawnApp *)0x0) &&
      (lVar1 = LawnApp::GetAdventureTeamEditorUI(gLawnApp), lVar1 != 0)) &&
     (lVar1 = FUN_042c62bc(*(undefined8 *)(lVar1 + 0x220)), lVar1 != 0)) {
    GetChoosedTeamSeed();
    return;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::InitView() */

void TeamEditorScrollPanel::InitView(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ReceivedDataCallback *in_x0;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar14;
  wchar16 *pwVar15;
  TeamSeed *pTVar16;
  RtWeakPtr<Sexy::SoundResource> *pRVar17;
  LineBreakCategory *in_x3;
  ReceivedDataCallback *in_x4;
  int iVar18;
  int iVar19;
  ReceivedDataCallback *local_90;
  undefined8 uStack_88;
  LineBreakCategory *local_80;
  LevelEditorCardPlantInterface aLStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  TeamSeed *local_60;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  ReceivedDataCallback *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ReceivedDataCallback *local_38;
  undefined8 uStack_30;
  LineBreakCategory *local_28;
  ReceivedDataCallback *local_20;
  undefined8 uStack_18;
  LineBreakCategory *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(in_x0 + 0xe8) = 0;
  iVar8 = FUN_042c67a8(5);
  iVar19 = *(int *)(in_x0 + 0xf0);
  iVar2 = iVar8 * 2;
  *(int *)(in_x0 + 0x54) = iVar2;
  if (iVar19 == 0) {
    *(undefined4 *)(in_x0 + 0xe4) = 100000;
    puVar5 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnAddPlantToTeam);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = (LineBreakCategory *)local_40;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<TeamEditorScrollPanel,void(TeamEditorScrollPanel::*)(int)>>
              ((MessageRouter *)puVar5,Message::AddPlantToTeam,&local_90);
    puVar5 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnRemovePlantFromTeam);
    local_80 = local_28;
    local_90 = local_38;
    uStack_88 = uStack_30;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<TeamEditorScrollPanel,void(TeamEditorScrollPanel::*)(int)>>
              ((MessageRouter *)puVar5,Message::RemovePlantFromTeam,&local_90);
    iVar19 = *(int *)(in_x0 + 0xf0);
    in_x3 = local_28;
    in_x4 = local_38;
  }
  if (iVar19 == 1) {
    iVar19 = 0;
    iVar18 = 0;
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar10 = FUN_042c67a8(5);
    iVar1 = iVar9 + iVar10 + iVar8;
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar11 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar12 = FUN_042c67a8(5);
    iVar11 = iVar11 + iVar12;
    iVar12 = *(int *)(in_x0 + 0xfc);
    *(undefined4 *)(in_x0 + 0xe4) = 0;
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = (iVar12 + iVar8 * -2) / iVar1;
    }
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar13 = FUN_042c62b8(*(undefined4 *)(this_02 + 0x40));
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_70);
    while (bVar6 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_70), puVar5 = gMessageRouter,
          bVar6) {
      ObjectTypeDirectoryIterator<PlantType>::operator*
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_70);
      cVar7 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_68);
      if ((cVar7 == '\0') &&
         (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68),
         *(char *)(lVar14 + 0x30) != '\0')) {
        if (iVar19 == iVar4) {
          iVar18 = iVar18 + 1;
          iVar19 = 0;
        }
        pwVar15 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pRVar17 = aRStack_58;
        std::string::string((string *)&local_20,"EasyAdventure");
        cVar7 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar15,(wchar16 *)&local_20,(LineBreakCategory *)pRVar17,in_x3,
                           (LineBreakCategory *)in_x4);
        if (cVar7 == '\0') {
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          cVar7 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar14 + 8));
          if (cVar7 == '\0') {
            std::string::~string((string *)&local_20);
            nop();
            goto LAB_042cafac;
          }
        }
        std::string::~string((string *)&local_20);
        nop();
        iVar3 = iVar2 + (iVar11 + iVar8) * iVar18;
        Sexy::Insets::Insets
                  ((Insets *)&local_20,((iVar12 - iVar1 * iVar4) - iVar8) / 2 + iVar19 * iVar1,iVar3
                   ,iVar9 + iVar10,iVar11);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_68);
        pTVar16 = ::operator_new(0x120);
        in_x3 = (LineBreakCategory *)(ulong)*(uint *)(in_x0 + 0xe4);
        in_x4 = in_x0 + 0xd8;
        TeamSeed::TeamSeed(pTVar16,*(undefined4 *)(in_x0 + 0xf0),aRStack_58);
        local_60 = pTVar16;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        (**(code **)(*(long *)local_60 + 0x1a0))(local_60,(string *)&local_20);
        nop();
        (**(code **)(*(long *)in_x0 + 0x60))();
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::push_back
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(in_x0 + 0x248),&local_60);
        *(int *)(in_x0 + 0x54) = iVar2 + iVar3 + iVar11;
        if (iVar13 == 0x27) {
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          bVar6 = std::operator==((string *)(lVar14 + 8),"peashooter");
          if (bVar6) {
            *(TeamSeed **)(in_x0 + 0x278) = local_60;
          }
        }
        iVar19 = iVar19 + 1;
        *(int *)(in_x0 + 0xe4) = *(int *)(in_x0 + 0xe4) + 1;
      }
LAB_042cafac:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_70);
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnTutorialBtnPressed);
    local_90 = local_20;
    uStack_88 = uStack_18;
    local_80 = local_10;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<TeamEditorScrollPanel,void(TeamEditorScrollPanel::*)(int)>>
              ((MessageRouter *)puVar5,Message::TutorialBtnPressed,&local_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamEditorScrollPanel::TeamEditorScrollPanel(TeamSeedType, Sexy::TRect<int>&) */

void __thiscall
TeamEditorScrollPanel::TeamEditorScrollPanel
          (TeamEditorScrollPanel *this,undefined4 param_2,Insets *param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0682dc90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682dfb8;
  Sexy::Insets::Insets((Insets *)(this + 0xf4),param_3);
  PlantType::PlantType((PlantType *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x260));
  *(undefined4 *)(this + 0xf0) = param_2;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::clear
            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(this + 0x248));
  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::clear
            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(this + 0x260));
  *(undefined8 *)(this + 0x278) = 0;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)param_3);
  InitView();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::OnAddPlantToTeam(int) */

void __thiscall TeamEditorScrollPanel::OnAddPlantToTeam(TeamEditorScrollPanel *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  TeamSeed *pTVar9;
  AdventureTeamEditorUI *this_02;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  TeamSeed *local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(this + 0xf0) == 0) && (cVar1 = HasPlantInTeam(this,param_1), cVar1 == '\0')) &&
     (iVar2 = FUN_042c62c4(*(undefined8 *)(this + 0x260),*(undefined8 *)(this + 0x268)), iVar2 < 5))
  {
    iVar3 = FUN_042c67a8(5);
    iVar4 = PlantNameMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar6 = FUN_042c67a8(5);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar7 = FUN_042c67a8(5);
    iVar4 = iVar4 + iVar7;
    iVar2 = iVar3 * 2 + (iVar4 + iVar3) * iVar2;
    Sexy::Insets::Insets
              (aIStack_18,(*(int *)(this + 0xfc) - (iVar5 + iVar6)) / 2,iVar2,iVar5 + iVar6,iVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
    pTVar9 = ::operator_new(0x120);
    TeamSeed::TeamSeed(pTVar9,*(undefined4 *)(this + 0xf0),aRStack_20,*(undefined4 *)(this + 0xe4),
                       this + 0xd8);
    local_28 = pTVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*(long *)local_28 + 0x1a0))(local_28,aIStack_18);
    nop();
    (**(code **)(*(long *)this + 0x60))(this,local_28);
    std::vector<TeamSeed*,std::allocator<TeamSeed*>>::push_back
              ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(this + 0x260),&local_28);
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
    *(int *)(this + 0x54) = iVar3 * 2 + iVar2 + iVar4;
    if ((gLawnApp != (LawnApp *)0x0) &&
       (this_02 = (AdventureTeamEditorUI *)LawnApp::GetAdventureTeamEditorUI(gLawnApp),
       this_02 != (AdventureTeamEditorUI *)0x0)) {
      AdventureTeamEditorUI::RefreshReq(this_02);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::RefreshSeedTeam() */

void __thiscall TeamEditorScrollPanel::RefreshSeedTeam(TeamEditorScrollPanel *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar9;
  undefined8 *puVar10;
  AdventureTeamEditorUI *this_02;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    iVar4 = FUN_042c67a8(5);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar6 = FUN_042c67a8(5);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar8 = FUN_042c67a8(5);
    iVar7 = iVar7 + iVar8;
    iVar1 = *(int *)(this + 0xfc);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x260));
    iVar8 = 0;
    while( true ) {
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x260));
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      if (!bVar3) break;
      plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*plVar9 != 0) {
        iVar2 = iVar4 * 2 + (iVar7 + iVar4) * iVar8;
        iVar8 = iVar8 + 1;
        Sexy::Insets::Insets
                  ((Insets *)local_18,(iVar1 - (iVar5 + iVar6)) / 2,iVar2,iVar5 + iVar6,iVar7);
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        (**(code **)(*(long *)*puVar10 + 0x1a0))((long *)*puVar10,(Insets *)local_18);
        *(int *)(this + 0x54) = iVar4 * 2 + iVar2 + iVar7;
      }
      FUN_042c71e8((exception_ptr *)&local_20);
    }
    if ((gLawnApp != (LawnApp *)0x0) &&
       (this_02 = (AdventureTeamEditorUI *)LawnApp::GetAdventureTeamEditorUI(gLawnApp),
       this_02 != (AdventureTeamEditorUI *)0x0)) {
      AdventureTeamEditorUI::RefreshReq(this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamEditorScrollPanel::OnRemovePlantFromTeam(int) */

void __thiscall
TeamEditorScrollPanel::OnRemovePlantFromTeam(TeamEditorScrollPanel *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf0) == 0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x260);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (((TeamSeed *)*puVar3 != (TeamSeed *)0x0) &&
         (iVar2 = TeamSeed::GetPlantId((TeamSeed *)*puVar3), iVar2 == param_1)) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        (**(code **)(*(long *)this + 0x68))(this,*puVar3);
        plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
          plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        }
        *plVar4 = 0;
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<TeamSeed*,std::allocator<TeamSeed*>>::erase
                  ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)this_00,local_10);
        RefreshSeedTeam(this);
        break;
      }
      FUN_042c71e8((__normal_iterator *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamEditorScrollPanel::~TeamEditorScrollPanel() */

void __thiscall TeamEditorScrollPanel::~TeamEditorScrollPanel(TeamEditorScrollPanel *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682dfb8;
  *(undefined ***)this = &PTR_GetClass_0682dc90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  *(undefined8 *)(this + 0x278) = 0;
  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(this + 0x260));
  std::vector<TeamSeed*,std::allocator<TeamSeed*>>::~vector
            ((vector<TeamSeed*,std::allocator<TeamSeed*>> *)(this + 0x248));
  PlantType::~PlantType((PlantType *)(this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TeamEditorScrollPanel::~TeamEditorScrollPanel() */

void __thiscall TeamEditorScrollPanel::~TeamEditorScrollPanel(TeamEditorScrollPanel *this)

{
  ~TeamEditorScrollPanel(this);
  AK::FreeHook(this);
  return;
}

