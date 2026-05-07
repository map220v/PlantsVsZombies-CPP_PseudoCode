// Class: ActivityCollectionLuckyBag


/* ActivityCollectionLuckyBag::ActivityCollectionLuckyBag() */

void __thiscall
ActivityCollectionLuckyBag::ActivityCollectionLuckyBag(ActivityCollectionLuckyBag *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06628790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06628af8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628b40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLuckyBag_06628b60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyBag::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLuckyBag::InitContainer
          (ActivityCollectionLuckyBag *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Point aPStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a1b);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0188);
  FUN_034297b0(this + 0xf0,uVar7);
  iVar2 = FUN_0342d430(0xdc);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(100);
  Sexy::Point::Point(aPStack_38,iVar1 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer((ActivityCollectionContainerBase *)this,aPStack_38);
  iVar3 = FUN_0342d430(0x8c);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x1e);
  iVar5 = FUN_0342d430(0x3c);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_0342d430(0x14);
  Sexy::Insets::Insets
            ((Insets *)aPStack_38,(iVar1 - iVar3) - iVar4,(iVar2 - iVar5) - iVar6,iVar3,iVar5);
  FUN_0342cc0c(afStack_28);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aPStack_38,(function *)afStack_28,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionLuckyBag::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLuckyBag::InitContainer
          (ActivityCollectionLuckyBag *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag() */

void __thiscall
ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag(ActivityCollectionLuckyBag *this)

{
  *(undefined ***)this = &PTR_GetClass_06628790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06628af8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628b40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLuckyBag_06628b60;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag() */

void __thiscall
ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag(ActivityCollectionLuckyBag *this)

{
  ~ActivityCollectionLuckyBag(this + -0xe8);
  return;
}


/* ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag() */

void __thiscall
ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag(ActivityCollectionLuckyBag *this)

{
  ~ActivityCollectionLuckyBag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag() */

void __thiscall
ActivityCollectionLuckyBag::~ActivityCollectionLuckyBag(ActivityCollectionLuckyBag *this)

{
  ~ActivityCollectionLuckyBag(this + -0xe8);
  return;
}

