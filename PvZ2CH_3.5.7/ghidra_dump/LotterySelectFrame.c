// Class: LotterySelectFrame


/* LotterySelectFrame::SetStopCallBack(Sexy::Delegate1<LotterySelectFrame*>) */

void __thiscall LotterySelectFrame::SetStopCallBack(LotterySelectFrame *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x128),param_2);
  return;
}


/* LotterySelectFrame::GetDestIndex() */

undefined4 __thiscall LotterySelectFrame::GetDestIndex(LotterySelectFrame *this)

{
  return *(undefined4 *)(this + 0xfc);
}


/* LotterySelectFrame::IsStop() */

bool __thiscall LotterySelectFrame::IsStop(LotterySelectFrame *this)

{
  return *(int *)(this + 0xf0) == 0;
}


/* LotterySelectFrame::SelectDest() */

bool __thiscall LotterySelectFrame::SelectDest(LotterySelectFrame *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0xf4);
  if ((-1 < iVar1) &&
     (uVar2 = FUN_04b91fc4(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x110)),
     (ulong)(long)iVar1 < uVar2)) {
    return iVar1 == *(int *)(this + 0xfc);
  }
  return false;
}


/* LotterySelectFrame::Stop() */

void __thiscall LotterySelectFrame::Stop(LotterySelectFrame *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xf0) != 0) &&
     (iVar1 = FUN_04b91ea8(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140)), iVar1 != 0)
     ) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)this);
    *(undefined4 *)(this + 0xf0) = 0;
    return;
  }
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* LotterySelectFrame::SetFinishSelected() */

void __thiscall LotterySelectFrame::SetFinishSelected(LotterySelectFrame *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xf0) != 0) &&
     (iVar1 = FUN_04b91ea8(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140)), iVar1 != 0)
     ) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)this);
    *(undefined4 *)(this + 0xf0) = 0;
    return;
  }
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* LotterySelectFrame::OnAnimationFinish(std::string const&) */

void LotterySelectFrame::OnAnimationFinish(string *param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (iVar1 = FUN_04b91ea8(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140)),
     iVar1 != 0)) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(param_1 + 0x128),(SexyURL *)param_1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotterySelectFrame::SetDest(int, int) */

void __thiscall LotterySelectFrame::SetDest(LotterySelectFrame *this,int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"***********************%d, *******************%d");
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x108));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x108));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::OutputDebugStrF((wchar_t *)"itemID = %d, count = %d",(ulong)*puVar2,(ulong)puVar2[1]);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (param_1 == -1) {
    *(undefined4 *)(this + 0xfc) = 0xffffffff;
  }
  else {
    uVar6 = *(undefined8 *)(this + 0x108);
    lVar5 = 0;
    *(undefined4 *)(this + 0xfc) = 0xffffffff;
    lVar3 = FUN_04b91fc4(uVar6,*(undefined8 *)(this + 0x110));
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_04b91fd0(uVar6,lVar5);
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) {
          *(int *)(this + 0xfc) = (int)lVar5;
          break;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotterySelectFrame::LotterySelectFrame() */

void __thiscall LotterySelectFrame::LotterySelectFrame(LotterySelectFrame *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xd4) = 0x41700000;
  *(undefined4 *)(this + 0xdc) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_069743a0;
  *(undefined4 *)(this + 0xe4) = 0x40a00000;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xd8) = 0xc1200000;
  *(undefined4 *)(this + 0xe8) = 0x40200000;
  *(undefined4 *)(this + 0xe0) = 0x40000000;
  *(undefined4 *)(this + 0xec) = 0x41f00000;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  *(undefined8 *)(this + 0x120) = 0;
  Sexy::Delegate1<LotterySelectFrame*>::Delegate1((DummyInit *)(this + 0x128));
  uVar1 = PVZ_T();
  this[0x59] = (LotterySelectFrame)0x0;
  *(undefined4 *)(this + 0x100) = uVar1;
  return;
}


/* LotterySelectFrame::Draw(Sexy::Graphics*) */

void __thiscall LotterySelectFrame::Draw(LotterySelectFrame *this,Graphics *param_1)

{
  Image *pIVar1;
  
  if (*(int *)(this + 0xf0) == 0) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88de8);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotterySelectFrame::UpdatePosition() */

void __thiscall LotterySelectFrame::UpdatePosition(LotterySelectFrame *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_18;
  FastCurve aFStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0xf4);
  local_8 = ___stack_chk_guard;
  if (-1 < iVar1) {
    uVar7 = *(undefined8 *)(this + 0x108);
    uVar5 = FUN_04b91fc4(uVar7,*(undefined8 *)(this + 0x110));
    if ((ulong)(long)iVar1 < uVar5) {
      lVar6 = FUN_04b91fd0(uVar7,(long)iVar1);
      local_18 = *(undefined8 *)(lVar6 + 8);
      iVar1 = FUN_04b9259c(0xfffffffb);
      iVar2 = FUN_04b9259c(0xfffffffa);
      Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_18,(TPoint *)aFStack_10);
      iVar1 = (int)(float)local_18;
      pcVar8 = *(code **)(*(long *)this + 0x198);
      iVar2 = (int)local_18._4_4_;
      this_00 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88de8);
      uVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88de8);
      uVar4 = SalesProgressBar::GetCurrentLevel(this_01);
      (*pcVar8)(this,iVar1,iVar2,uVar3,uVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotterySelectFrame::Start() */

void __thiscall LotterySelectFrame::Start(LotterySelectFrame *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf0) = 1;
  *(undefined4 *)(this + 0x100) = uVar1;
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xdc);
  UpdatePosition(this);
  return;
}


/* LotterySelectFrame::~LotterySelectFrame() */

void __thiscall LotterySelectFrame::~LotterySelectFrame(LotterySelectFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_069743a0;
  std::vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>>::~vector
            ((vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>> *)
             (this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LotterySelectFrame::~LotterySelectFrame() */

void __thiscall LotterySelectFrame::~LotterySelectFrame(LotterySelectFrame *this)

{
  ~LotterySelectFrame(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotterySelectFrame::UpdateIndex() */

void __thiscall LotterySelectFrame::UpdateIndex(LotterySelectFrame *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x100) < fVar4) {
    lVar2 = FUN_04b91fc4(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x110));
    iVar1 = *(int *)(this + 0xf4) + 1;
    if (lVar2 + -1 == (long)*(int *)(this + 0xf4)) {
      iVar1 = 0;
    }
    *(int *)(this + 0xf4) = iVar1;
    UpdatePosition(this);
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    std::string::string(asStack_10,"Play_UI_Lottery_Beat");
    AudioMgr::SendEventThrottled(psVar3,_FUN_04b96a60,asStack_10);
    std::string::~string(asStack_10);
    nop();
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x100) = fVar4 + 1.0 / *(float *)(this + 0xf8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotterySelectFrame::PlaySelectEffect() */

void __thiscall LotterySelectFrame::PlaySelectEffect(LotterySelectFrame *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  char *pcVar5;
  UIWidgetAnim *this_00;
  code *pcVar6;
  long lVar7;
  RtWeakPtr aRStack_70 [8];
  FastCurve aFStack_68 [8];
  float local_60;
  float local_5c;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"POPANIM_EFFECTS_LOTTERY_RESULT_SELECT");
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_70);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  Sexy::FastCurve::SetOutRange(aFStack_68,0.6,0.6);
  iVar1 = FUN_04b9259c(0xffffffdf);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,(float)iVar1,(float)iVar1);
  lVar7 = *(long *)(this + 0x120);
  if (lVar7 == 0) {
    this_00 = ::operator_new(0x118);
    UIWidgetAnim::UIWidgetAnim(this_00);
    *(UIWidgetAnim **)(this + 0x120) = this_00;
    UIWidgetAnim::SetAnimRig(this_00,pPVar4);
    FUN_04b91f68(*(long *)(this + 0x120) + 0xe0,aFStack_68);
    (**(code **)(**(long **)(this + 0x120) + 0x198))
              (*(long **)(this + 0x120),(int)local_60,(int)local_5c,*(undefined4 *)(this + 0x50),
               *(undefined4 *)(this + 0x54));
    lVar7 = *(long *)(this + 0x120);
    pcVar6 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar7 + 0x59) = 0;
    (*pcVar6)(this,lVar7);
    lVar7 = *(long *)(this + 0x120);
  }
  pPVar4 = (PopAnimRig *)FUN_04b91f64(*(undefined8 *)(lVar7 + 0xd8));
  std::string::string(asStack_58,"icon_on");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimationFinish);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<LotterySelectFrame,void(LotterySelectFrame::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Lottery_Star");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotterySelectFrame::Update() */

void __thiscall LotterySelectFrame::Update(LotterySelectFrame *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(this + 0xf0);
  if (iVar4 == 2) {
    UpdateIndex(this);
    if ((*(int *)(this + 0xfc) != -1) &&
       (fVar5 = (float)PVZ_T(), 1.0 < fVar5 - *(float *)(this + 0x104))) {
      *(undefined4 *)(this + 0xf0) = 3;
      return;
    }
  }
  else if (iVar4 == 3) {
    if ((*(float *)(this + 0xf8) < *(float *)(this + 0xe8)) &&
       (cVar1 = SelectDest(this), cVar1 != '\0')) {
      *(undefined4 *)(this + 0xf0) = 5;
      PlaySelectEffect(this);
      return;
    }
    UpdateIndex(this);
    fVar5 = (float)PVZ_Dt();
    iVar4 = *(int *)(this + 0xfc) - *(int *)(this + 0xf4);
    *(float *)(this + 0xf8) = *(float *)(this + 0xf8) + *(float *)(this + 0xd8) * fVar5;
    if (iVar4 < 0) {
      iVar2 = FUN_04b91fc4(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x110));
      iVar4 = iVar4 + iVar2;
    }
    if (iVar4 < 5) {
      pfVar3 = eastl::max_alt<float>((float *)(this + 0xf8),(float *)(this + 0xe0));
      *(float *)(this + 0xf8) = *pfVar3;
    }
    else {
      pfVar3 = eastl::max_alt<float>((float *)(this + 0xf8),(float *)(this + 0xe4));
      *(float *)(this + 0xf8) = *pfVar3;
    }
  }
  else if (iVar4 == 1) {
    UpdateIndex(this);
    fVar5 = (float)PVZ_Dt();
    *(float *)(this + 0xf8) = *(float *)(this + 0xf8) + *(float *)(this + 0xd4) * fVar5;
    pfVar3 = eastl::min_alt<float>((float *)(this + 0xf8),(float *)(this + 0xec));
    fVar5 = *pfVar3;
    *(float *)(this + 0xf8) = fVar5;
    if (*(float *)(this + 0xec) <= fVar5) {
      *(undefined4 *)(this + 0xf0) = 2;
      uVar6 = PVZ_T();
      *(undefined4 *)(this + 0x104) = uVar6;
    }
  }
  return;
}


/* LotterySelectFrame::SetItemPool(std::vector<LotterySelectFrame::Item,
   std::allocator<LotterySelectFrame::Item> > const&) */

void __thiscall LotterySelectFrame::SetItemPool(LotterySelectFrame *this,vector *param_1)

{
  std::vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>>::operator=
            ((vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>> *)
             (this + 0x108),param_1);
  return;
}

