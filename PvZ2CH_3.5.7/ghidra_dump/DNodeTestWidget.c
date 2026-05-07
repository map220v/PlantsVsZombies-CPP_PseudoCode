// Class: DNodeTestWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeTestWidget::~DNodeTestWidget() */

void __thiscall DNodeTestWidget::~DNodeTestWidget(DNodeTestWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06a24aa0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeTestWidget::~DNodeTestWidget() */

void __thiscall DNodeTestWidget::~DNodeTestWidget(DNodeTestWidget *this)

{
  ~DNodeTestWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeTestWidget::DNodeTestWidget() */

void __thiscall DNodeTestWidget::DNodeTestWidget(DNodeTestWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06a24aa0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeTestWidget::Initialize() */

void __thiscall DNodeTestWidget::Initialize(DNodeTestWidget *this)

{
  exception_ptr *this_00;
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  DAction *pDVar4;
  Effect_Barrage *pEVar5;
  DAnimNode *this_01;
  PopAnimRig *this_02;
  code *pcVar6;
  DRefPtr<DSpriteNode> aDStack_100 [8];
  DRefPtr<DSpriteNode> aDStack_f8 [8];
  DRefPtr<DSpriteNode> aDStack_f0 [8];
  DRefPtr<DStringNode> aDStack_e8 [8];
  DRefPtr<DRotate> aDStack_e0 [8];
  DRefPtr<DMove> aDStack_d8 [8];
  DRefPtr<DMove> aDStack_d0 [8];
  DRefPtr<DScale> aDStack_c8 [8];
  DRefPtr<DRotate> aDStack_c0 [8];
  DRefPtr<DSequence> aDStack_b8 [8];
  DRefPtr<DSequence> aDStack_b0 [8];
  DRefPtr<DFade> aDStack_a8 [8];
  DRefPtr<DRemoveSelf> aDStack_a0 [8];
  DRefPtr<DSpawn> aDStack_98 [8];
  DRefPtr<DSleep> aDStack_90 [8];
  DRefPtr<DMove> aDStack_88 [8];
  DRefPtr<DSequence> aDStack_80 [8];
  DRefPtr<DMove> aDStack_78 [8];
  DRefPtr<DSequence> aDStack_70 [8];
  DRefPtr<DBezier> aDStack_68 [8];
  DVec2 aDStack_60 [8];
  DVec2 aDStack_58 [8];
  DVec2 aDStack_50 [8];
  undefined4 local_48 [4];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_100);
  this_00 = (exception_ptr *)(this + 0xd8);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"IMAGE_UI_MAINMENU_PY_LOGO_A");
  plVar1 = (long *)(*pcVar6)(plVar1,(string *)local_48);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0x43480000,0x43480000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  (**(code **)(*plVar1 + 0x188))(0x43960000,0x43960000);
  std::string::~string((string *)local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_f8);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"IMAGE_UI_MAINMENU_PY_LOGO_A");
  plVar1 = (long *)(*pcVar6)(plVar1,(string *)local_48);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0x43c80000,0x43480000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  (**(code **)(*plVar1 + 0x188))(0x43960000,0x43960000);
  std::string::~string((string *)local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DSpriteNode>::DRefPtr(aDStack_f0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"IMAGE_UI_MAINMENU_PY_LOGO_A");
  plVar1 = (long *)(*pcVar6)(plVar1,(string *)local_48);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0x43c80000,0x43c80000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  (**(code **)(*plVar1 + 0x188))(0x43960000,0x43960000);
  std::string::~string((string *)local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DStringNode>::DRefPtr(aDStack_e8);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x338))(plVar1,&DAT_0569e3f0);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x138))(0,0,0x43960000,0x42700000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0x43960000,0x43160000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x130))(0x3f000000,0x3f000000);
  (**(code **)(*plVar1 + 0x140))(0x3f800000);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DRotate>::DRefPtr(aDStack_e0);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
  local_48[0] = 0x43b40000;
  pDVar4 = (DAction *)(**(code **)(*(long *)(lVar3 + 0x90) + 0x10))(lVar3 + 0x90,(string *)local_48)
  ;
  pEVar5 = (Effect_Barrage *)DAction::setDuration(pDVar4,20.0);
  Effect_Barrage::SetViceBarrage(pEVar5,(Effect_Barrage *)0x0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e8);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_e0);
  (**(code **)(*plVar1 + 0x298))(plVar1,uVar2);
  DRefPtr<DMove>::DRefPtr(aDStack_d8);
  DRefPtr<DMove>::DRefPtr(aDStack_d0);
  DRefPtr<DScale>::DRefPtr(aDStack_c8);
  DRefPtr<DRotate>::DRefPtr(aDStack_c0);
  DRefPtr<DSequence>::DRefPtr(aDStack_b8);
  DRefPtr<DSequence>::DRefPtr(aDStack_b0);
  DRefPtr<DFade>::DRefPtr(aDStack_a8);
  DRefPtr<DRemoveSelf>::DRefPtr(aDStack_a0);
  DRefPtr<DSpawn>::DRefPtr(aDStack_98);
  DRefPtr<DSleep>::DRefPtr(aDStack_90);
  DRefPtr<DMove>::DRefPtr(aDStack_88);
  DRefPtr<DSequence>::DRefPtr(aDStack_80);
  DRefPtr<DMove>::DRefPtr(aDStack_78);
  DRefPtr<DSequence>::DRefPtr(aDStack_70);
  DRefPtr<DBezier>::DRefPtr(aDStack_68);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  pcVar6 = *(code **)(*plVar1 + 0x40);
  DVec2::DVec2(aDStack_60,200.0,200.0);
  plVar1 = (long *)(*pcVar6)(plVar1,aDStack_60);
  pcVar6 = *(code **)(*plVar1 + 0x50);
  DVec2::DVec2(aDStack_58,200.0,200.0);
  DVec2::DVec2(aDStack_50,-100.0,300.0);
  plVar1 = (long *)(*pcVar6)(plVar1,aDStack_58,aDStack_50);
  pcVar6 = *(code **)(*plVar1 + 0x60);
  DVec2::DVec2((DVec2 *)local_48,100.0,400.0);
  pDVar4 = (DAction *)(*pcVar6)(plVar1,(string *)local_48);
  DAction::setDuration(pDVar4,2.0);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  pcVar6 = *(code **)(*(long *)(lVar3 + 0x90) + 0x10);
  DVec2::DVec2((DVec2 *)local_48,-300.0,-200.0);
  pDVar4 = (DAction *)(*pcVar6)(lVar3 + 0x90,(string *)local_48);
  DAction::setDuration(pDVar4,5.0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  pcVar6 = *(code **)(*plVar1 + 0x40);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  DSleep::wake();
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  (*pcVar6)(plVar1,uVar2);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)local_48);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f0);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_70);
  (**(code **)(*plVar1 + 0x298))(plVar1,uVar2);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  pcVar6 = *(code **)(*(long *)(lVar3 + 0x90) + 0x10);
  DVec2::DVec2((DVec2 *)local_48,300.0,300.0);
  pDVar4 = (DAction *)(*pcVar6)(lVar3 + 0x90,(string *)local_48);
  DAction::setDuration(pDVar4,3.0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  pcVar6 = *(code **)(*plVar1 + 0x40);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  DSleep::wake();
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  (*pcVar6)(plVar1,uVar2);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)local_48);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_f8);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
  (**(code **)(*plVar1 + 0x298))(plVar1,uVar2);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_c0);
  local_48[0] = 0x43b40000;
  pDVar4 = (DAction *)(**(code **)(*(long *)(lVar3 + 0x90) + 0x10))(lVar3 + 0x90,(string *)local_48)
  ;
  DAction::setDuration(pDVar4,2.0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_c8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))(0);
  pDVar4 = (DAction *)(**(code **)(*plVar1 + 0x68))(0x40000000);
  DAction::setDuration(pDVar4,1.0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_c0);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_c8);
  pDVar4 = (DAction *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  DRefPtr<DSprite9SliceNode>::DRefPtr((DRefPtr<DSprite9SliceNode> *)local_48,(DRefPtr *)aDStack_100)
  ;
  FUN_04f915f8(afStack_38,(string *)local_48);
  DAction::onDone(pDVar4,(function *)afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  std::_Destroy<DRefPtr<DSpriteNode>>((DRefPtr *)local_48);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  pcVar6 = *(code **)(*(long *)(lVar3 + 0x90) + 0x10);
  DVec2::DVec2((DVec2 *)local_48,200.0,0.0);
  pDVar4 = (DAction *)(*pcVar6)(lVar3 + 0x90,(string *)local_48);
  pDVar4 = (DAction *)DAction::setDuration(pDVar4,1.0);
  DAction::setTween(pDVar4,0x1c);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  pcVar6 = *(code **)(*(long *)(lVar3 + 0x90) + 0x10);
  DVec2::DVec2((DVec2 *)local_48,-200.0,0.0);
  pDVar4 = (DAction *)(*pcVar6)(lVar3 + 0x90,(string *)local_48);
  pDVar4 = (DAction *)DAction::setDuration(pDVar4,1.0);
  DAction::setTween(pDVar4,0x1c);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
  local_48[0] = 0x3f800000;
  pDVar4 = (DAction *)(**(code **)(*(long *)(lVar3 + 0x90) + 8))(lVar3 + 0x90,(string *)local_48);
  DAction::setDuration(pDVar4,2.0);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b8);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_d0);
  pEVar5 = (Effect_Barrage *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  Effect_Barrage::SetViceBarrage(pEVar5,(Effect_Barrage *)0x5);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b0);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_98);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
  (**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b0);
  (**(code **)(*plVar1 + 0x298))(plVar1,uVar2);
  DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_60);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"IMAGE_UI_MAINMENU_BACK_BTN_NORMAL");
  plVar1 = (long *)(*pcVar6)(plVar1,(string *)local_48);
  (**(code **)(*plVar1 + 0x140))(0x3f000000);
  std::string::~string((string *)local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)aDStack_58);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"IMAGE_UI_MAINMENU_CLOSE_BTN_NORMAL");
  plVar1 = (long *)(*pcVar6)(plVar1,(string *)local_48);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x110))(0x42480000,0x42480000);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x140))(0x3f000000);
  (**(code **)(*plVar1 + 600))(plVar1,1);
  std::string::~string((string *)local_48);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_100);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_58);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  DRefPtr<DAnimNode>::DRefPtr((DRefPtr<DAnimNode> *)aDStack_50);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  pcVar6 = *(code **)(*plVar1 + 0x2e8);
  std::string::string((string *)local_48,"POPANIM_EFFECTS_DANGERROOMEFFECTMAIN");
  (*pcVar6)(plVar1,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  this_01 = (DAnimNode *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  if (*(code **)(*(long *)this_01 + 0x330) == DAnimNode::getPopAnimRig) {
    this_02 = (PopAnimRig *)DAnimNode::getPopAnimRig(this_01);
  }
  else {
    this_02 = (PopAnimRig *)(**(code **)(*(long *)this_01 + 0x330))();
  }
  std::string::string((string *)local_48,"IDLE1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)afStack_38);
  PopAnimRig::PlayAndContinue(this_02,(string *)local_48,0,afStack_38);
  std::string::~string((string *)local_48);
  nop();
  Sexy::Color::Color((Color *)local_48,0xff,0,0);
  PopAnimRig::SetShaderOverrideColor(this_02,(Color *)local_48);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  (**(code **)(*plVar1 + 0x110))(0x44160000,0x43960000);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_50);
  pcVar6 = *(code **)(*plVar1 + 0x298);
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b0);
  DSequence::clone();
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  (*pcVar6)(plVar1,uVar2);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)local_48);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_50);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_70);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_90);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_98);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_a0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_a8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_b0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_b8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_c0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_c8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_d0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_d8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_e0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_e8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f0);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_f8);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

