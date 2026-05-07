// Class: ActivityCollectionSecretStore


/* ActivityCollectionSecretStore::ActivityCollectionSecretStore() */

void __thiscall
ActivityCollectionSecretStore::ActivityCollectionSecretStore(ActivityCollectionSecretStore *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_0662acb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662b018;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662b060;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionSecretStore_0662b080;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionSecretStore::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionSecretStore::InitContainer
          (ActivityCollectionSecretStore *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a32);
  std::string::string(asStack_38,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_SECRETSTORE");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar2 = FUN_0342d430(0xf0);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x82);
  Sexy::Point::Point((Point *)asStack_38,iVar1 - iVar2,*(int *)(this + 0x54) - iVar3);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_38);
  iVar3 = FUN_0342d430(0xbe);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x50);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_0342d430(0x8c);
  iVar6 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)asStack_38,iVar1 - iVar3,iVar2 - iVar4,iVar5,iVar6);
  FUN_0342ce6c(afStack_28);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)asStack_38,(function *)afStack_28,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionSecretStore::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionSecretStore::InitContainer
          (ActivityCollectionSecretStore *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionSecretStore::~ActivityCollectionSecretStore() */

void __thiscall
ActivityCollectionSecretStore::~ActivityCollectionSecretStore(ActivityCollectionSecretStore *this)

{
  *(undefined ***)this = &PTR_GetClass_0662acb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662b018;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662b060;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionSecretStore_0662b080;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionSecretStore::~ActivityCollectionSecretStore() */

void __thiscall
ActivityCollectionSecretStore::~ActivityCollectionSecretStore(ActivityCollectionSecretStore *this)

{
  ~ActivityCollectionSecretStore(this + -0xe8);
  return;
}


/* ActivityCollectionSecretStore::~ActivityCollectionSecretStore() */

void __thiscall
ActivityCollectionSecretStore::~ActivityCollectionSecretStore(ActivityCollectionSecretStore *this)

{
  ~ActivityCollectionSecretStore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionSecretStore::~ActivityCollectionSecretStore() */

void __thiscall
ActivityCollectionSecretStore::~ActivityCollectionSecretStore(ActivityCollectionSecretStore *this)

{
  ~ActivityCollectionSecretStore(this + -0xe8);
  return;
}

