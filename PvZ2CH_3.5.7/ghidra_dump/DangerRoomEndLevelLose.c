// Class: DangerRoomEndLevelLose


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelLose::GetLayoutName() */

void __thiscall DangerRoomEndLevelLose::GetLayoutName(DangerRoomEndLevelLose *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DangerRoomEndLevelLose");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelLose::OnCreate() */

void __thiscall DangerRoomEndLevelLose::OnCreate(DangerRoomEndLevelLose *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImageBackground");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(this + 0x138) = uVar1;
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::setWindowCenter((Dialog *)this,*(Widget **)(this + 0x138));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* DangerRoomEndLevelLose::OnClose() */

void __thiscall DangerRoomEndLevelLose::OnClose(DangerRoomEndLevelLose *this)

{
  UI::Dialog::OnClose((Dialog *)this);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* DangerRoomEndLevelLose::~DangerRoomEndLevelLose() */

void __thiscall DangerRoomEndLevelLose::~DangerRoomEndLevelLose(DangerRoomEndLevelLose *this)

{
  *(undefined ***)this = &PTR_GetClass_06941a30;
  *(undefined **)(this + 0xd8) = &DAT_06941d80;
  UISingletonDialog<DangerRoomEndLevelLose>::~UISingletonDialog
            ((UISingletonDialog<DangerRoomEndLevelLose> *)this);
  return;
}


/* DangerRoomEndLevelLose::~DangerRoomEndLevelLose() */

void __thiscall DangerRoomEndLevelLose::~DangerRoomEndLevelLose(DangerRoomEndLevelLose *this)

{
  ~DangerRoomEndLevelLose(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomEndLevelLose::DangerRoomEndLevelLose() */

void __thiscall DangerRoomEndLevelLose::DangerRoomEndLevelLose(DangerRoomEndLevelLose *this)

{
  UISingletonDialog<DangerRoomEndLevelLose>::UISingletonDialog
            ((UISingletonDialog<DangerRoomEndLevelLose> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06941a30;
  *(undefined **)(this + 0xd8) = &DAT_06941d80;
  *(undefined4 *)(this + 0x140) = 0xbf800000;
  *(undefined4 *)(this + 0x144) = 0xbf800000;
  return;
}


/* DangerRoomEndLevelLose::Start(bool, float) */

void __thiscall
DangerRoomEndLevelLose::Start(DangerRoomEndLevelLose *this,bool param_1,float param_2)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  float fVar4;
  undefined4 uVar5;
  
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  if (!param_1) {
    *(undefined4 *)(this + 0x144) = 0xbf800000;
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x140) = fVar4 + param_2;
    iVar1 = FUN_04a91320(600);
    iVar2 = FUN_04a91320(0x23a);
    this_00 = gLawnApp;
    pPVar3 = ::operator_new(0x210);
    GameOverDialog::GameOverDialog((GameOverDialog *)pPVar3,1);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,pPVar3);
    PVZ2UIDialog::Hide(pPVar3,7);
    Sexy::LazySingleton<talkingGame>::GetInstancePtr();
    Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_0547429c();
    nop();
    return;
  }
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x144) = uVar5;
  return;
}


/* DangerRoomEndLevelLose::Update() */

void __thiscall DangerRoomEndLevelLose::Update(DangerRoomEndLevelLose *this)

{
  char cVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x144);
  if ((0.0 < fVar4) && (fVar3 = (float)PVZ_T(), fVar4 < fVar3)) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x144) = fVar4 + 0.5;
    cVar1 = LawnApp::IsPVZ2DialogExist(gLawnApp);
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0x144) = 0xbf800000;
      UISingletonDialog<DangerRoomEndLevelLose>::CloseDialog();
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        Board::Quit(*(Board **)(gLawnApp + 0x9f0));
      }
    }
  }
  fVar4 = *(float *)(this + 0x140);
  if ((0.0 < fVar4) && (fVar3 = (float)PVZ_T(), fVar4 < fVar3)) {
    plVar2 = *(long **)(this + 0x138);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
    }
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
    *(undefined4 *)(this + 0x140) = 0xbf800000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomEndLevelLose::ButtonDepress(int) */

void __thiscall DangerRoomEndLevelLose::ButtonDepress(DangerRoomEndLevelLose *this,int param_1)

{
  TGALogMgr *this_00;
  long lVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 1:
    lVar1 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    FUN_04a91278(lVar1 + 0x100);
    goto LAB_04a91638;
  case 2:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
    uVar2 = 3;
    break;
  default:
    goto switchD_04a91618_default;
  }
  FUN_04a91270(gGameStateMgr + 0x1eb8,uVar2);
LAB_04a91638:
  UISingletonDialog<DangerRoomEndLevelLose>::CloseDialog();
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_10,"true");
    TGALogMgr::LogSegments(this_00,0x2720,0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  }
switchD_04a91618_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to DangerRoomEndLevelLose::ButtonDepress(int) */

void __thiscall DangerRoomEndLevelLose::ButtonDepress(DangerRoomEndLevelLose *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

