// Class: GameInputHandler


/* GameInputHandler::~GameInputHandler() */

void __thiscall GameInputHandler::~GameInputHandler(GameInputHandler *this)

{
  std::
  vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>::
  ~vector((vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>
           *)(this + 0x30));
  std::
  vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
  ::~vector((vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
             *)(this + 0x18));
  std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>::~vector
            ((vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>> *)this);
  return;
}


/* GameInputHandler::ChangePriority(void*, int) */

void __thiscall GameInputHandler::ChangePriority(GameInputHandler *this,void *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)this;
  lVar1 = FUN_03d40f78(uVar5,*(undefined8 *)(this + 8));
  lVar4 = 0;
  do {
    if (lVar4 == lVar1) {
      return;
    }
    lVar2 = FUN_03d40f8c(uVar5,lVar4);
    pvVar3 = (void *)FUN_03d40f74(*(undefined8 *)(lVar2 + 0x18));
    lVar4 = lVar4 + 1;
  } while (param_1 != pvVar3);
  *(int *)(lVar2 + 0x60) = param_2;
  return;
}


/* GameInputHandler::SendCancelDelegate() */

void __thiscall GameInputHandler::SendCancelDelegate(GameInputHandler *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  do {
    uVar6 = *(undefined8 *)this;
    uVar2 = FUN_03d40f78(uVar6,*(undefined8 *)(this + 8));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return;
      }
      lVar3 = FUN_03d40f8c(uVar6,uVar5);
      iVar1 = FUN_03d40f5c(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x48));
      uVar5 = uVar4;
    } while (iVar1 == 0);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(lVar3 + 0x30));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::CancelTouch(Sexy::Touch const&, void*) */

void __thiscall GameInputHandler::CancelTouch(GameInputHandler *this,Touch *param_1,void *param_2)

{
  ulong uVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  Touch aTStack_40 [48];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  Sexy::Touch::Touch(aTStack_40,param_1);
  uVar4 = *(undefined8 *)this;
  local_10 = 4;
  uVar1 = FUN_03d40f78(uVar4,*(undefined8 *)(this + 8));
  if (uVar1 != 0) {
    do {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_03d40f8c(uVar4,uVar3);
      pvVar2 = (void *)FUN_03d40f74(*(undefined8 *)(this_00 + 0x18));
      if (param_2 != pvVar2) {
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)aTStack_40);
        uVar4 = *(undefined8 *)this;
        uVar1 = FUN_03d40f78(uVar4,*(undefined8 *)(this + 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameInputHandler::OnLongPress(Sexy::Point) */

void __thiscall GameInputHandler::OnLongPress(GameInputHandler *this,SexyURL *param_2)

{
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_03d40f9c(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_03d40fb0(uVar3,uVar2);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,param_2);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* GameInputHandler::OnGestureEvent(Sexy::Point, int, float) */

void GameInputHandler::OnGestureEvent(long param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = FUN_03d40fbc(uVar4,*(undefined8 *)(param_1 + 0x20));
    if (uVar2 <= uVar3) break;
    pcVar1 = (char *)FUN_03d40fd0(uVar4,uVar3);
    Sexy::Delegate2<char_const*,char_const*>::operator()(pcVar1,param_2);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::UnregisterTouchGameplayObject(void*) */

void __thiscall
GameInputHandler::UnregisterTouchGameplayObject(GameInputHandler *this,void *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03d40f78(uVar6,*(undefined8 *)(this + 8));
  lVar5 = 0;
  do {
    iVar1 = (int)lVar5;
    if (lVar5 == lVar2) goto LAB_03d42508;
    lVar3 = FUN_03d40f8c(uVar6,lVar5);
    pvVar4 = (void *)FUN_03d40f74(*(undefined8 *)(lVar3 + 0x18));
    lVar5 = lVar5 + 1;
  } while (param_1 != pvVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  local_18 = __gnu_cxx::
             __normal_iterator<GameInputListenerInfo*,std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>>
             ::operator+((__normal_iterator<GameInputListenerInfo*,std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>::erase
            ((vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>> *)this,local_10);
LAB_03d42508:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::UnregisterLongPress(void*) */

void __thiscall GameInputHandler::UnregisterLongPress(GameInputHandler *this,void *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03d40f9c(uVar6,*(undefined8 *)(this + 0x38));
  lVar5 = 0;
  do {
    iVar1 = (int)lVar5;
    if (lVar5 == lVar2) goto LAB_03d4292c;
    lVar3 = FUN_03d40fb0(uVar6,lVar5);
    pvVar4 = (void *)FUN_03d40f74(*(undefined8 *)(lVar3 + 0x18));
    lVar5 = lVar5 + 1;
  } while (param_1 != pvVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
             ::operator+((__normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::
  vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>::
  erase((vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>
         *)(this + 0x30),local_10);
LAB_03d4292c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::UnregisterGesture(void*) */

void __thiscall GameInputHandler::UnregisterGesture(GameInputHandler *this,void *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03d40fbc(uVar6,*(undefined8 *)(this + 0x20));
  lVar5 = 0;
  do {
    iVar1 = (int)lVar5;
    if (lVar5 == lVar2) goto LAB_03d42a90;
    lVar3 = FUN_03d40fd0(uVar6,lVar5);
    pvVar4 = (void *)FUN_03d40f74(*(undefined8 *)(lVar3 + 0x18));
    lVar5 = lVar5 + 1;
  } while (param_1 != pvVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
             ::operator+((__normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::
  vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
  ::erase((vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
           *)(this + 0x18),local_10);
LAB_03d42a90:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::RegisterTouchGameplayObject(Sexy::Delegate1wRet<bool, Sexy::Touch const&>, int,
   Sexy::RtWeakPtr<BoardEntity>, Sexy::Delegate0) */

void __thiscall
GameInputHandler::RegisterTouchGameplayObject
          (GameInputHandler *this,Delegate1wRet *param_2,undefined8 param_3,RtWeakPtrBase *param_4,
          Delegate0 *param_5)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_e8 [8];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_e0 [48];
  Delegate0 aDStack_b0 [48];
  GameInputListenerInfo aGStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::Delegate1wRet(aDStack_e0,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_e8,param_4);
  Sexy::Delegate0::Delegate0(aDStack_b0,param_5);
  GameInputListenerInfo::GameInputListenerInfo(aGStack_80,aDStack_e0,param_3,aRStack_e8,aDStack_b0);
  std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>::push_back
            ((vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>> *)this,aGStack_80)
  ;
  GameInputListenerInfo::~GameInputListenerInfo(aGStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInputHandler::OnGameplayTouchEvent(Sexy::Touch const&) */

void __thiscall GameInputHandler::OnGameplayTouchEvent(GameInputHandler *this,Touch *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Touch aTStack_40 [48];
  int local_10;
  long local_8;
  
  uVar7 = 0;
  uVar8 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03d40f78(uVar8,*(undefined8 *)(this + 8));
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_03d40f8c(uVar8,uVar7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar3 + 0x68));
      if (cVar1 != '\0') {
        lVar3 = FUN_03d40f8c(*(undefined8 *)this,uVar7);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x68));
        uVar2 = (**(code **)(*plVar6 + 0x170))();
        *(undefined4 *)(lVar3 + 0x70) = uVar2;
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)this;
      uVar4 = FUN_03d40f78(uVar8,*(undefined8 *)(this + 8));
    } while (uVar7 < uVar4);
  }
  uVar7 = 0;
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar9 = 0;
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  std::
  sort<__gnu_cxx::__normal_iterator<GameInputListenerInfo*,std::vector<GameInputListenerInfo,std::allocator<GameInputListenerInfo>>>>
            (uVar8,uVar5);
  Sexy::Touch::Touch(aTStack_40,param_1);
  uVar8 = *(undefined8 *)this;
  lVar3 = FUN_03d40f78(uVar8,*(undefined8 *)(this + 8));
  if (lVar3 != 0) {
    do {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)FUN_03d40f8c(uVar8,uVar7);
      cVar1 = Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)aTStack_40);
      if (cVar1 != '\0') {
        if (local_10 == 3) {
          local_10 = 4;
          uVar9 = 1;
        }
        else {
          uVar9 = 1;
          if (local_10 != 4) break;
        }
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)this;
      uVar4 = FUN_03d40f78(uVar8,*(undefined8 *)(this + 8));
    } while (uVar7 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* GameInputHandler::RegisterLongPress(Sexy::Delegate1<Sexy::Point const&>) */

void __thiscall GameInputHandler::RegisterLongPress(GameInputHandler *this,Delegate1 *param_2)

{
  std::
  vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>::
  push_back((vector<Sexy::Delegate1<Sexy::Point_const&>,std::allocator<Sexy::Delegate1<Sexy::Point_const&>>>
             *)(this + 0x30),param_2);
  return;
}


/* GameInputHandler::RegisterGesture(Sexy::Delegate3<Sexy::Point const&, int, float>) */

void __thiscall GameInputHandler::RegisterGesture(GameInputHandler *this,Delegate3 *param_2)

{
  std::
  vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
  ::push_back((vector<Sexy::Delegate3<Sexy::Point_const&,int,float>,std::allocator<Sexy::Delegate3<Sexy::Point_const&,int,float>>>
               *)(this + 0x18),param_2);
  return;
}

