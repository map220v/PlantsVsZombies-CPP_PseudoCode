// Class: DangerRoomEndLevelWin


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelWin::GetLayoutName() */

void __thiscall DangerRoomEndLevelWin::GetLayoutName(DangerRoomEndLevelWin *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DangerRoomEndLevelWin");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DangerRoomEndLevelWin::OnClose() */

void __thiscall DangerRoomEndLevelWin::OnClose(DangerRoomEndLevelWin *this)

{
  UI::Dialog::OnClose((Dialog *)this);
  std::
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  ::clear((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
           *)(this + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelWin::ButtonDepress(int) */

void __thiscall DangerRoomEndLevelWin::ButtonDepress(DangerRoomEndLevelWin *this,int param_1)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 - 1U < 2) {
    *(int *)(this + 0x154) = param_1;
    std::string::string(asStack_50,"UIButton_1");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"UIButton_2");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    std::string::~string(asStack_50);
    nop();
    pPVar2 = (PopAnimRig *)FUN_04a8eb78(*(undefined8 *)(*(long *)(this + 0x138) + 0xd8));
    std::string::string(asStack_58,"windows_out");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<DangerRoomEndLevelWin,void(DangerRoomEndLevelWin::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DangerRoomEndLevelWin::ButtonDepress(int) */

void __thiscall DangerRoomEndLevelWin::ButtonDepress(DangerRoomEndLevelWin *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DangerRoomEndLevelWin::onAnimStopped(std::string const&) */

void __thiscall DangerRoomEndLevelWin::onAnimStopped(DangerRoomEndLevelWin *this,string *param_1)

{
  bool bVar1;
  LevelModuleManager *this_00;
  VictoryOutroModule *pVVar2;
  long lVar3;
  
  bVar1 = std::operator==(param_1,"windows_out");
  if (!bVar1) {
    return;
  }
  if (*(int *)(this + 0x154) == 1) {
    lVar3 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    FUN_04a8ec10(lVar3 + 0x100);
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      UISingletonDialog<DangerRoomEndLevelWin>::CloseDialog();
      return;
    }
  }
  else {
    if (*(int *)(this + 0x154) != 2) {
      return;
    }
    if (*(long *)(gLawnApp + 0x9f0) != 0) {
      this_00 = (LevelModuleManager *)
                FUN_04a8eb7c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      pVVar2 = LevelModuleManager::GetModuleByClass<VictoryOutroModule>(this_00);
      if (pVVar2 != (VictoryOutroModule *)0x0) {
        FUN_04a8ec04(pVVar2 + 0x18);
      }
    }
  }
  UISingletonDialog<DangerRoomEndLevelWin>::CloseDialog();
  return;
}


/* DangerRoomEndLevelWin::DangerRoomEndLevelWin() */

void __thiscall DangerRoomEndLevelWin::DangerRoomEndLevelWin(DangerRoomEndLevelWin *this)

{
  UISingletonDialog<DangerRoomEndLevelWin>::UISingletonDialog
            ((UISingletonDialog<DangerRoomEndLevelWin> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_069412f0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined **)(this + 0xd8) = &DAT_06941640;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x150) = 0xbf800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined4 *)(this + 0x174) = 0xffffffff;
  *(undefined4 *)(this + 0x170) = 0xbf800000;
  SlidingController::SlidingController((SlidingController *)(this + 0x178));
  SlidingController::SlidingController((SlidingController *)(this + 0x1a8));
  return;
}


/* DangerRoomEndLevelWin::~DangerRoomEndLevelWin() */

void __thiscall DangerRoomEndLevelWin::~DangerRoomEndLevelWin(DangerRoomEndLevelWin *this)

{
  *(undefined ***)this = &PTR_GetClass_069412f0;
  *(undefined **)(this + 0xd8) = &DAT_06941640;
  SlidingController::~SlidingController((SlidingController *)(this + 0x1a8));
  SlidingController::~SlidingController((SlidingController *)(this + 0x178));
  std::
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  ::~vector((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
             *)(this + 0x158));
  UISingletonDialog<DangerRoomEndLevelWin>::~UISingletonDialog
            ((UISingletonDialog<DangerRoomEndLevelWin> *)this);
  return;
}


/* DangerRoomEndLevelWin::~DangerRoomEndLevelWin() */

void __thiscall DangerRoomEndLevelWin::~DangerRoomEndLevelWin(DangerRoomEndLevelWin *this)

{
  ~DangerRoomEndLevelWin(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomEndLevelWin::PlaySeedAnim(int) */

void __thiscall DangerRoomEndLevelWin::PlaySeedAnim(DangerRoomEndLevelWin *this,int param_1)

{
  int iVar1;
  tuple *ptVar2;
  undefined8 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  SeedPacketPlantWidget *this_00;
  
  if (-1 < param_1) {
    uVar6 = *(undefined8 *)(this + 0x158);
    iVar1 = FUN_04a8eb80(uVar6,*(undefined8 *)(this + 0x160));
    if (param_1 < iVar1) {
      ptVar2 = (tuple *)FUN_04a8eb8c(uVar6,(long)param_1);
      puVar3 = (undefined8 *)std::get<0ul,SeedPacketPlantWidget*,int>(ptVar2);
      this_00 = (SeedPacketPlantWidget *)*puVar3;
      SeedPacketPlantWidget::PlayEffects(this_00);
      iVar1 = SeedPacketPlantWidget::GetNum(this_00);
      ptVar2 = (tuple *)FUN_04a8eb8c(*(undefined8 *)(this + 0x158),(long)param_1);
      piVar4 = (int *)std::
                      get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                                (ptVar2);
      SeedPacketPlantWidget::SetNum(this_00,iVar1 + *piVar4,true);
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_Endless_Plant_Inc");
      return;
    }
  }
  return;
}


/* DangerRoomEndLevelWin::Update() */

void __thiscall DangerRoomEndLevelWin::Update(DangerRoomEndLevelWin *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0x150);
  if ((0.0 < fVar5) && (fVar4 = (float)PVZ_T(), fVar5 < fVar4)) {
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x150) = fVar5 + 0.5;
    lVar3 = LawnApp::GetPVZ2Dialog(gLawnApp);
    if ((lVar3 == 0) && (lVar3 = UISingletonDialog<UIMessageBox>::GetSingletonPtr(), lVar3 == 0)) {
      *(undefined4 *)(this + 0x150) = 0xbf800000;
      UISingletonDialog<DangerRoomEndLevelWin>::CloseDialog();
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      }
    }
  }
  fVar5 = *(float *)(this + 0x170);
  if ((0.0 < fVar5) && (fVar4 = (float)PVZ_T(), fVar5 < fVar4)) {
    iVar1 = *(int *)(this + 0x174) + 1;
    *(int *)(this + 0x174) = iVar1;
    if ((iVar1 < 0) ||
       (iVar2 = FUN_04a8eb80(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160)),
       iVar2 <= iVar1)) {
      *(undefined4 *)(this + 0x174) = 0xffffffff;
      *(undefined4 *)(this + 0x170) = 0xbf800000;
      SlidingController::Update((SlidingController *)(this + 0x178));
      SlidingController::Update((SlidingController *)(this + 0x1a8));
      return;
    }
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x170) = fVar5 + 0.5;
    PlaySeedAnim(this,*(int *)(this + 0x174));
  }
  SlidingController::Update((SlidingController *)(this + 0x178));
  SlidingController::Update((SlidingController *)(this + 0x1a8));
  return;
}


/* DangerRoomEndLevelWin::StartSeedPlantsAnim() */

void __thiscall DangerRoomEndLevelWin::StartSeedPlantsAnim(DangerRoomEndLevelWin *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = std::
          vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
          ::empty((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                   *)(this + 0x158));
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(this + 0x174) = 0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x170) = fVar2 + 0.5;
  PlaySeedAnim(this,*(int *)(this + 0x174));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelWin::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void DangerRoomEndLevelWin::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  DangerRoomManager *pDVar7;
  PopAnimRig *pPVar8;
  undefined8 uVar9;
  long lVar10;
  NumberWidget *pNVar11;
  code *pcVar12;
  float fVar13;
  undefined8 local_48;
  undefined4 local_40;
  float fStack_3c;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_4,"number1_in");
  if (bVar2) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x158))(*(long **)(param_1 + 0x148),1);
    pNVar11 = *(NumberWidget **)(param_1 + 0x148);
    pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar5 = DangerRoomManager::GetLevelScore(pDVar7);
    NumberWidget::SetNumber(pNVar11,iVar5,false);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_40,(float)*(int *)(*(long *)(param_1 + 0x148) + 0x48),
               (float)*(int *)(*(long *)(param_1 + 0x148) + 0x4c));
    fVar13 = fStack_3c;
    uVar1 = local_40;
    iVar5 = FUN_04a8ed7c(0x14);
    fStack_3c = fStack_3c + (float)iVar5;
    SlidingController::StartSlide
              (local_40,fStack_3c,uVar1,fVar13,0x3e4ccccd,param_1 + 0x178,
               *(undefined8 *)(param_1 + 0x148),3);
    NumberWidget::StartFade(*(NumberWidget **)(param_1 + 0x148),0,0xff,0.2);
  }
  else {
    bVar2 = std::operator==(param_4,"number1_reading");
    if (bVar2) {
      NumberWidget::SetNumber(*(NumberWidget **)(param_1 + 0x148),0,true);
    }
    else {
      bVar2 = std::operator==(param_4,"number1_out");
      if (bVar2) {
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_48,(float)*(int *)(*(long *)(param_1 + 0x148) + 0x48),
                   (float)*(int *)(*(long *)(param_1 + 0x148) + 0x4c));
        uVar9 = local_48;
        fVar13 = local_48._4_4_;
        iVar5 = FUN_04a8ed7c(0x14);
        SlidingController::StartSlide
                  ((undefined4)local_48,fVar13,(int)uVar9,fVar13 - (float)iVar5,0x3e4ccccd,
                   param_1 + 0x178,*(undefined8 *)(param_1 + 0x148),3);
        NumberWidget::StartFade(*(NumberWidget **)(param_1 + 0x148),0xff,0,0.2);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_40,(float)*(int *)(*(long *)(param_1 + 0x140) + 0x48),
                   (float)*(int *)(*(long *)(param_1 + 0x140) + 0x4c));
        local_48 = CONCAT44(fStack_3c,local_40);
        iVar5 = FUN_04a8ed7c(0x14);
        SlidingController::StartSlide
                  ((undefined4)local_48,local_48._4_4_,local_40,local_48._4_4_ - (float)iVar5,
                   0x3e4ccccd,param_1 + 0x1a8,*(undefined8 *)(param_1 + 0x140),3);
      }
      else {
        bVar2 = std::operator==(param_4,"number2_in");
        if (bVar2) {
          std::string::string((string *)&local_40,"UIAnim_0");
          plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
          (**(code **)(*plVar6 + 0x158))(plVar6,1);
          std::string::~string((string *)&local_40);
          nop();
          (**(code **)(**(long **)(param_1 + 0x140) + 0x158))(*(long **)(param_1 + 0x140),1);
          pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
          iVar5 = DangerRoomManager::GetLevelScore(pDVar7);
          pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
          iVar4 = DangerRoomManager::GetDayScore(pDVar7);
          NumberWidget::SetNumber(*(NumberWidget **)(param_1 + 0x140),iVar4 - iVar5,false);
        }
        else {
          bVar2 = std::operator==(param_4,"number2_reading");
          if (bVar2) {
            pNVar11 = *(NumberWidget **)(param_1 + 0x140);
            pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
            iVar5 = DangerRoomManager::GetDayScore(pDVar7);
            NumberWidget::SetNumber(pNVar11,iVar5,true);
          }
          else {
            bVar2 = std::operator==(param_4,"number3_in");
            if (bVar2) {
              std::string::string((string *)&local_40,"Medal_Back");
              plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
              lVar10 = *plVar6;
              uVar9 = 1;
            }
            else {
              bVar2 = std::operator==(param_4,"cards_in");
              if (bVar2) {
                std::string::string((string *)&local_40,"Plants_Back");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                (**(code **)(*plVar6 + 0x158))(plVar6,1);
                std::string::~string((string *)&local_40);
                nop();
                std::string::string((string *)&local_40,"UIText_0");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                pcVar12 = *(code **)(*plVar6 + 0x158);
                bVar3 = std::
                        vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                        ::empty((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                                 *)(param_1 + 0x158));
                (*pcVar12)(plVar6,bVar3 ^ 1);
                std::string::~string((string *)&local_40);
                nop();
                goto LAB_04a9010c;
              }
              bVar2 = std::operator==(param_4,"button_in");
              if (bVar2) {
                std::string::string((string *)&local_40,"Buttons_Back");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                std::string::~string((string *)&local_40);
                nop();
                (**(code **)(*plVar6 + 0x158))(plVar6,1);
                Sexy::FastCurve::SetOutRange
                          ((FastCurve *)&local_48,(float)(int)plVar6[9],
                           (float)*(int *)((long)plVar6 + 0x4c));
                uVar9 = local_48;
                iVar5 = FUN_04a8ed7c(100);
                fVar13 = local_48._4_4_ + (float)iVar5;
                local_48 = CONCAT44(fVar13,(undefined4)local_48);
                SlidingController::StartSlide
                          ((undefined4)local_48,fVar13,(int)uVar9,(int)((ulong)uVar9 >> 0x20),
                           0x3f000000,param_1 + 0x178,plVar6,3);
                pPVar8 = (PopAnimRig *)
                         FUN_04a8eb78(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0xd8));
                std::string::string((string *)&local_40,"windows_loop");
                Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
                PopAnimRig::PlayAndContinue(pPVar8,(string *)&local_40,0,aDStack_38);
                std::string::~string((string *)&local_40);
                nop();
                StartSeedPlantsAnim((DangerRoomEndLevelWin *)param_1);
                goto LAB_04a9010c;
              }
              bVar2 = std::operator==(param_4,"button_out");
              if (bVar2) {
                std::string::string((string *)&local_40,"Buttons_Back");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                lVar10 = *plVar6;
                uVar9 = 0;
              }
              else {
                bVar2 = std::operator==(param_4,"cardnumber_allout");
                if (!bVar2) goto LAB_04a9010c;
                std::string::string((string *)&local_40,"UIAnim_0");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                (**(code **)(*plVar6 + 0x158))(plVar6,0);
                std::string::~string((string *)&local_40);
                nop();
                (**(code **)(**(long **)(param_1 + 0x140) + 0x158))(*(long **)(param_1 + 0x140),0);
                std::string::string((string *)&local_40,"Medal_Back");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                (**(code **)(*plVar6 + 0x158))(plVar6,0);
                std::string::~string((string *)&local_40);
                nop();
                std::string::string((string *)&local_40,"Plants_Back");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                (**(code **)(*plVar6 + 0x158))(plVar6,0);
                std::string::~string((string *)&local_40);
                nop();
                std::string::string((string *)&local_40,"UIText_0");
                plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,(string *)&local_40);
                lVar10 = *plVar6;
                uVar9 = 0;
              }
            }
            (**(code **)(lVar10 + 0x158))(plVar6,uVar9);
            std::string::~string((string *)&local_40);
            nop();
          }
        }
      }
    }
  }
LAB_04a9010c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelWin::StartAnim(bool) */

void __thiscall DangerRoomEndLevelWin::StartAnim(DangerRoomEndLevelWin *this,bool param_1)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  char *pcVar3;
  undefined4 uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"UIAnim_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Buttons_Back");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
  (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
  std::string::string(asStack_40,"Medal_Back");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Plants_Back");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIText_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_40);
  nop();
  pPVar2 = (PopAnimRig *)FUN_04a8eb78(*(undefined8 *)(*(long *)(this + 0x138) + 0xd8));
  std::string::string(asStack_40,"windows_in");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (param_1) {
    pPVar2 = (PopAnimRig *)FUN_04a8eb78(*(undefined8 *)(*(long *)(this + 0x138) + 0xd8));
    PopAnimRig::SetPaused(pPVar2,true);
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x150) = uVar4;
  }
  else {
    *(undefined4 *)(this + 0x150) = 0xbf800000;
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Endless_Score_Reward");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelWin::OnCreate() */

void __thiscall DangerRoomEndLevelWin::OnCreate(DangerRoomEndLevelWin *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Widget *pWVar10;
  UIWidgetAnim *pUVar11;
  TimeChallengeEndLevelUI *this_00;
  NumberWidget *pNVar12;
  UIWidgetText *this_01;
  DangerRoomManager *pDVar13;
  ulong uVar14;
  long *plVar15;
  PVZ1ModeNetworkMgr *this_02;
  vector *pvVar16;
  SeedPacketPlantWidget *this_03;
  long *plVar17;
  LotteryResultProgressBar *this_04;
  SalesProgressBar *this_05;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  string *psVar21;
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  *this_06;
  SeedPacketPlantWidget *local_88;
  string asStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_50,"Widget_0");
  pWVar10 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  UI::Dialog::setWindowCenter((Dialog *)this,pWVar10);
  std::string::string(asStack_50,"UIAnim_1");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_50);
  *(UIWidgetAnim **)(this + 0x138) = pUVar11;
  std::string::~string(asStack_50);
  nop();
  this_00 = (TimeChallengeEndLevelUI *)FUN_04a8eb78(*(undefined8 *)(*(long *)(this + 0x138) + 0xd8))
  ;
  if (this_00 != (TimeChallengeEndLevelUI *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPopAnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<DangerRoomEndLevelWin,void(DangerRoomEndLevelWin::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,asStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  }
  pNVar12 = ::operator_new(0x120);
  memset(pNVar12,0,0x120);
  NumberWidget::NumberWidget(pNVar12);
  *(NumberWidget **)(this + 0x140) = pNVar12;
  uVar3 = FUN_04a8ed7c(0xffffffe8);
  uVar4 = FUN_04a8ed7c(0x96);
  uVar5 = FUN_04a8ed7c(500);
  uVar6 = FUN_04a8ed7c(0x32);
  (**(code **)(*(long *)pNVar12 + 0x198))(pNVar12,uVar3,uVar4,uVar5,uVar6);
  LevelEditorTowerDefendStartingPlantfood::SetValue
            (*(LevelEditorTowerDefendStartingPlantfood **)(this + 0x140),2);
  psVar21 = *(string **)(this + 0x140);
  std::string::string(asStack_50,"IMAGE_UI_ADS_NUM");
  ZombieItemWidget::SetType(psVar21);
  std::string::~string(asStack_50);
  nop();
  (**(code **)(**(long **)(this + 0x138) + 0x60))
            (*(long **)(this + 0x138),*(undefined8 *)(this + 0x140));
  pNVar12 = ::operator_new(0x120);
  memset(pNVar12,0,0x120);
  NumberWidget::NumberWidget(pNVar12);
  *(NumberWidget **)(this + 0x148) = pNVar12;
  uVar3 = FUN_04a8ed7c(0xffffffe8);
  uVar4 = FUN_04a8ed7c(0x6e);
  uVar5 = FUN_04a8ed7c(500);
  uVar6 = FUN_04a8ed7c(0x1e);
  (**(code **)(*(long *)pNVar12 + 0x198))(pNVar12,uVar3,uVar4,uVar5,uVar6);
  LevelEditorTowerDefendStartingPlantfood::SetValue
            (*(LevelEditorTowerDefendStartingPlantfood **)(this + 0x148),2);
  psVar21 = *(string **)(this + 0x148);
  std::string::string(asStack_50,"IMAGE_UI_NUM_BLUE_");
  ZombieItemWidget::SetType(psVar21);
  std::string::~string(asStack_50);
  nop();
  FUN_04a8ec1c(*(long *)(this + 0x148) + 0x108);
  (**(code **)(**(long **)(this + 0x138) + 0x60))
            (*(long **)(this + 0x138),*(undefined8 *)(this + 0x148));
  std::string::string(asStack_50,"UIText_Medal");
  this_01 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (this_01 != (UIWidgetText *)0x0) {
    pDVar13 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar14 = DangerRoomManager::GetLevelMedal(pDVar13);
    Sexy::StrFormat("%d",asStack_50,uVar14 & 0xffffffff);
    UIWidgetText::SetString(this_01,asStack_50);
    std::string::~string(asStack_50);
  }
  std::string::string(asStack_50,"Plants_Back");
  plVar15 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  this_02 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pvVar16 = (vector *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this_02);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)asStack_50,
             pvVar16);
  local_88 = (SeedPacketPlantWidget *)0x0;
  Set8BytesTo0(asStack_80);
  pDVar13 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = DangerRoomManager::IsTrainingMode(pDVar13);
  if (cVar1 == '\0') {
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_50);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      lVar20 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      this_03 = ::operator_new(0x100);
      SeedPacketPlantWidget::SeedPacketPlantWidget(this_03);
      local_88 = this_03;
      ServerPlantID::ServerPlantID((ServerPlantID *)&local_60,*(int *)(lVar20 + 0x14));
      ServerPlantID::ToString();
      FUN_05474278(asStack_80,(string *)&local_68);
      std::string::~string((string *)&local_68);
      SeedPacketPlantWidget::SetPlantType((string *)local_88);
      pDVar13 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      iVar9 = DangerRoomManager::GetPlantNum(pDVar13,*(int *)(lVar20 + 0x14));
      SeedPacketPlantWidget::SetNum(local_88,iVar9 - *(int *)(lVar20 + 0x18),false);
      (**(code **)(*plVar15 + 0x60))(plVar15,local_88);
      std::
      vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
      ::emplace_back<SeedPacketPlantWidget*&,int&>
                ((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                  *)(this + 0x158),&local_88,(int *)(lVar20 + 0x18));
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_78);
    }
    std::string::string((string *)&local_60,"UIText_Training_Notice");
    plVar17 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_60);
    lVar20 = *plVar17;
    uVar19 = 0;
  }
  else {
    std::string::string((string *)&local_60,"UIText_Training_Notice");
    plVar17 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_60);
    lVar20 = *plVar17;
    uVar19 = 1;
  }
  this_06 = (vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
             *)(this + 0x158);
  (**(code **)(lVar20 + 0x158))(plVar17,uVar19);
  std::string::~string((string *)&local_60);
  nop();
  cVar1 = std::
          vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
          ::empty(this_06);
  if (cVar1 == '\0') {
    iVar7 = FUN_04a8ed7c(0x14);
    this_04 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7efc0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_04);
    this_05 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7efc0);
    uVar3 = SalesProgressBar::GetCurrentLevel(this_05);
    iVar9 = FUN_04a8eb80(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
    iVar9 = ((int)plVar15[10] - ((iVar8 + iVar7) * iVar9 - iVar7)) / 2;
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_06);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_06);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2)
    {
      puVar18 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      local_60 = *puVar18;
      uStack_58 = puVar18[1];
      puVar18 = (undefined8 *)std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_60);
      local_88 = (SeedPacketPlantWidget *)*puVar18;
      (**(code **)(*(long *)local_88 + 0x198))(local_88,iVar9,0,iVar8,uVar3);
      iVar9 = iVar9 + iVar7 + *(int *)(local_88 + 0x50);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_70);
    }
  }
  std::string::~string(asStack_80);
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

