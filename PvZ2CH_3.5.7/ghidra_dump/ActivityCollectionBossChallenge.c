// Class: ActivityCollectionBossChallenge


/* ActivityCollectionBossChallenge::ActivityCollectionBossChallenge() */

void __thiscall
ActivityCollectionBossChallenge::ActivityCollectionBossChallenge
          (ActivityCollectionBossChallenge *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_0662a470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662a7d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662a820;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionBossChallenge_0662a840;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionBossChallenge::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionBossChallenge::InitContainer
          (ActivityCollectionBossChallenge *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2975);
  std::string::string(asStack_38,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_BOSSCHALLENGE");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar2 = FUN_0342d430(0x8c);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x1bd);
  iVar4 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)asStack_38,iVar1 / 2 - iVar2 / 2,iVar3,iVar2,iVar4);
  FUN_0342cdd4(afStack_28);
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


/* non-virtual thunk to ActivityCollectionBossChallenge::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionBossChallenge::InitContainer
          (ActivityCollectionBossChallenge *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge() */

void __thiscall
ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge
          (ActivityCollectionBossChallenge *this)

{
  *(undefined ***)this = &PTR_GetClass_0662a470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662a7d8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662a820;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionBossChallenge_0662a840;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge() */

void __thiscall
ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge
          (ActivityCollectionBossChallenge *this)

{
  ~ActivityCollectionBossChallenge(this + -0xe8);
  return;
}


/* ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge() */

void __thiscall
ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge
          (ActivityCollectionBossChallenge *this)

{
  ~ActivityCollectionBossChallenge(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge() */

void __thiscall
ActivityCollectionBossChallenge::~ActivityCollectionBossChallenge
          (ActivityCollectionBossChallenge *this)

{
  ~ActivityCollectionBossChallenge(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionBossChallenge::ButtonDepress(int) */

void __thiscall
ActivityCollectionBossChallenge::ButtonDepress(ActivityCollectionBossChallenge *this,int param_1)

{
  bool bVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    if (this[0x110] == (ActivityCollectionBossChallenge)0x0) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x118));
      if (bVar1) {
        std::function<void()>::operator()((function<void()> *)(this + 0x118));
      }
    }
    else {
      this[0x111] = (ActivityCollectionBossChallenge)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_30[0] = L'⥵';
      local_30[1] = 1;
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
                 (pair *)apStack_28);
      local_30[1] = 1;
      local_30[0] = L'⨯';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
                 (pair *)apStack_28);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionBossChallenge::ButtonDepress(int) */

void __thiscall
ActivityCollectionBossChallenge::ButtonDepress(ActivityCollectionBossChallenge *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

