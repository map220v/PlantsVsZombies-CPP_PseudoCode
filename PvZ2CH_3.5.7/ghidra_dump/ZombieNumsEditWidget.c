// Class: ZombieNumsEditWidget


/* ZombieNumsEditWidget::~ZombieNumsEditWidget() */

void __thiscall ZombieNumsEditWidget::~ZombieNumsEditWidget(ZombieNumsEditWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0696a820;
  *(undefined **)(this + 0xd8) = &DAT_0696aba0;
  Sexy::EditWidget::~EditWidget((EditWidget *)this);
  return;
}


/* ZombieNumsEditWidget::~ZombieNumsEditWidget() */

void __thiscall ZombieNumsEditWidget::~ZombieNumsEditWidget(ZombieNumsEditWidget *this)

{
  ~ZombieNumsEditWidget(this);
  AK::FreeHook(this);
  return;
}


/* ZombieNumsEditWidget::ZombieNumsEditWidget(Sexy::EditListener*) */

void __thiscall
ZombieNumsEditWidget::ZombieNumsEditWidget(ZombieNumsEditWidget *this,EditListener *param_1)

{
  Sexy::EditWidget::EditWidget((EditWidget *)this,0,param_1);
  *(undefined ***)this = &PTR_GetClass_0696a820;
  *(undefined **)(this + 0xd8) = &DAT_0696aba0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNumsEditWidget::setText(std::string const&) */

void __thiscall ZombieNumsEditWidget::setText(ZombieNumsEditWidget *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  CustomLevelMgr *this_00;
  LevelEditorWaveEventSummonZombie *this_01;
  code *pcVar5;
  int local_18c;
  string asStack_188 [8];
  string asStack_180 [8];
  string asStack_178 [8];
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18c = 0;
  Set8BytesTo0(asStack_188);
  uVar2 = FUN_05474178(param_1);
  if (uVar2 < 3) {
    thunk_FUN_05475e00(asStack_188,param_1);
  }
  else {
    FUN_05475ffc(asStack_178,param_1,0,3);
    FUN_05474278(asStack_188,asStack_178);
    std::string::~string(asStack_178);
  }
  FUN_05461f74(auStack_170,asStack_188,8);
  plVar3 = (long *)FUN_0544af48(auStack_170,(ActivityTypeID *)&local_18c);
  lVar4 = FUN_0544a07c((long)plVar3 + *(long *)(*plVar3 + -0x18));
  if (((lVar4 != 0) && (cVar1 = FUN_0544a0e0(auStack_110), cVar1 != '\0')) && (local_18c - 1U < 100)
     ) {
    pcVar5 = *(code **)(*(long *)this + 0x340);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_18c);
    Sexy::UTF8StringToSexyString(asStack_180);
    (*pcVar5)(this,asStack_178,1);
    FUN_05476c50(asStack_178);
    std::string::~string(asStack_180);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSummonZombieNums(this_00,*(int *)(this + 0x17c),local_18c);
    this_01 = *(LevelEditorWaveEventSummonZombie **)(this + 0x128);
    if (this_01 != (LevelEditorWaveEventSummonZombie *)0x0) {
      this_01 = this_01 + -0xe0;
    }
    LevelEditorWaveEventSummonZombie::UpdateNumsButtonState(this_01);
  }
  FUN_0546156c(auStack_170);
  std::string::~string(asStack_188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ZombieNumsEditWidget::setText(std::string const&) */

void __thiscall ZombieNumsEditWidget::setText(ZombieNumsEditWidget *this,string *param_1)

{
  setText(this + -0xd8,param_1);
  return;
}

