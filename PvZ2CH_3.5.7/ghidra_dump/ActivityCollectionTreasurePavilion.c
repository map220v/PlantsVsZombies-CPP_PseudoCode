// Class: ActivityCollectionTreasurePavilion


/* ActivityCollectionTreasurePavilion::ActivityCollectionTreasurePavilion() */

void __thiscall
ActivityCollectionTreasurePavilion::ActivityCollectionTreasurePavilion
          (ActivityCollectionTreasurePavilion *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_0662cdb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662d118;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662d160;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionTreasurePavilion_0662d180;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionTreasurePavilion::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionTreasurePavilion::InitContainer
          (ActivityCollectionTreasurePavilion *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a81);
  std::string::string(asStack_10,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_TREASUREPAVILION");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar4 = UISingletonDialog<UITreasurePavilion>::ShowDialog();
  iVar1 = FUN_0342d430(600);
  iVar2 = FUN_0342d430(0x46);
  *(int *)(lVar4 + 0x48) = iVar2 + (*(int *)(this + 0x50) - iVar1) / 2;
  uVar3 = FUN_0342d430(0x28);
  lVar5 = *(long *)this;
  *(undefined4 *)(lVar4 + 0x4c) = uVar3;
  (**(code **)(lVar5 + 0x60))(this,lVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to
   ActivityCollectionTreasurePavilion::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionTreasurePavilion::InitContainer
          (ActivityCollectionTreasurePavilion *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion() */

void __thiscall
ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion
          (ActivityCollectionTreasurePavilion *this)

{
  *(undefined ***)this = &PTR_GetClass_0662cdb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662d118;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662d160;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionTreasurePavilion_0662d180;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion() */

void __thiscall
ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion
          (ActivityCollectionTreasurePavilion *this)

{
  ~ActivityCollectionTreasurePavilion(this + -0xe8);
  return;
}


/* ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion() */

void __thiscall
ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion
          (ActivityCollectionTreasurePavilion *this)

{
  ~ActivityCollectionTreasurePavilion(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion() */

void __thiscall
ActivityCollectionTreasurePavilion::~ActivityCollectionTreasurePavilion
          (ActivityCollectionTreasurePavilion *this)

{
  ~ActivityCollectionTreasurePavilion(this + -0xe8);
  return;
}

