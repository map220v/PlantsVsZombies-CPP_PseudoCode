// Class: PVZ2UIProgressBar


/* PVZ2UIProgressBar::onAnimComplete(std::string const&) */

void PVZ2UIProgressBar::onAnimComplete(string *param_1)

{
  param_1[0xe4] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::~PVZ2UIProgressBar() */

void __thiscall PVZ2UIProgressBar::~PVZ2UIProgressBar(PVZ2UIProgressBar *this)

{
  LawnApp *this_00;
  PVZ2UIProgressBar *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683be90;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  pPVar1 = this + 0xf0;
  do {
    if (*(long **)pPVar1 != (long *)0x0) {
      (**(code **)(**(long **)pPVar1 + 0x18))();
      *(undefined8 *)pPVar1 = 0;
    }
    this_00 = gLawnApp;
    pPVar1 = pPVar1 + 0x18;
  } while (pPVar1 != this + 0x150);
  std::string::string(asStack_10,"ProgressBar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIProgressBar::~PVZ2UIProgressBar() */

void __thiscall PVZ2UIProgressBar::~PVZ2UIProgressBar(PVZ2UIProgressBar *this)

{
  ~PVZ2UIProgressBar(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIProgressBar::SetProgressPercentage(float) */

void __thiscall PVZ2UIProgressBar::SetProgressPercentage(PVZ2UIProgressBar *this,float param_1)

{
  if (0.01 < param_1 - *(float *)(this + 0xdc)) {
    *(float *)(this + 0xd8) = param_1 - 0.01;
  }
  *(float *)(this + 0xdc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::ResetAnimation() */

void __thiscall PVZ2UIProgressBar::ResetAnimation(PVZ2UIProgressBar *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  plVar2 = *(long **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x78);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  std::string::string(asStack_28,"animation");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar3)(plVar2,asStack_28,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  this[0x104] = (PVZ2UIProgressBar)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x11c] = (PVZ2UIProgressBar)0x0;
  this[0x134] = (PVZ2UIProgressBar)0x0;
  this[0x14c] = (PVZ2UIProgressBar)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::Update() */

void __thiscall PVZ2UIProgressBar::Update(PVZ2UIProgressBar *this)

{
  PVZ2UIProgressBar PVar1;
  char cVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  PopAnimRig *pPVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  string asStack_58 [8];
  float local_50 [6];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  fVar9 = *(float *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_043881fc(fVar9);
  fVar8 = (float)PVZ_Dt();
  local_50[0] = fVar9 + *(float *)(this + 0xd4) * fVar8;
  pfVar3 = eastl::min_alt<float>((float *)(this + 0xdc),local_50);
  *(float *)(this + 0xd8) = *pfVar3;
  fVar8 = (float)PVZ_Dt();
  fVar9 = *(float *)(this + 0xd8);
  if (cVar2 == '\0') {
    cVar2 = FUN_043881fc(fVar9);
    if (cVar2 == '\0') {
LAB_04388890:
      fVar8 = 0.0;
      this[0xe4] = (PVZ2UIProgressBar)0x0;
      PopAnimRig::SetCurrentFrameInAnimation
                (*(PopAnimRig **)(this + 0xe8),(float)(int)(fVar9 * 100.0));
      goto LAB_04388798;
    }
    this[0xe4] = (PVZ2UIProgressBar)0x0;
    pPVar6 = *(PopAnimRig **)(this + 0xe8);
    std::string::string(asStack_58,"end");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimComplete);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PVZ2UIProgressBar,void(PVZ2UIProgressBar::*)(std::string_const&)>
              (aDStack_38,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50)
    ;
    PopAnimRig::PlayAndStop(pPVar6,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    plVar5 = *(long **)(this + 0xf0);
    lVar4 = *plVar5;
    this[0x104] = (PVZ2UIProgressBar)0x1;
    pcVar7 = *(code **)(lVar4 + 0x78);
    std::string::string(asStack_58,"animation");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    (*pcVar7)(plVar5,asStack_58,0,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
    std::string::~string(asStack_58);
    nop();
    pPVar6 = *(PopAnimRig **)(this + 0xe8);
    fVar9 = (float)PVZ_T();
    PopAnimRig::UpdateAnim(pPVar6,fVar9,fVar8);
    if (this[0x104] != (PVZ2UIProgressBar)0x0) goto LAB_043887b8;
LAB_04388590:
    if (*(float *)(this + 0xd8) <= *(float *)(this + 0xf8)) goto LAB_043887dc;
    plVar5 = *(long **)(this + 0xf0);
    lVar4 = *plVar5;
    this[0x104] = (PVZ2UIProgressBar)0x1;
    pcVar7 = *(code **)(lVar4 + 0x78);
    std::string::string(asStack_58,"animation");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    (*pcVar7)(plVar5,asStack_58,0,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
    std::string::~string(asStack_58);
    nop();
    if (this[0x11c] != (PVZ2UIProgressBar)0x0) goto LAB_043887e4;
LAB_04388610:
    if (*(float *)(this + 0xd8) <= *(float *)(this + 0x110)) goto LAB_04388808;
    plVar5 = *(long **)(this + 0x108);
    lVar4 = *plVar5;
    this[0x11c] = (PVZ2UIProgressBar)0x1;
    pcVar7 = *(code **)(lVar4 + 0x78);
    std::string::string(asStack_58,"animation");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    (*pcVar7)(plVar5,asStack_58,0,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
    std::string::~string(asStack_58);
    nop();
    if (this[0x134] != (PVZ2UIProgressBar)0x0) goto LAB_04388810;
LAB_04388690:
    if (*(float *)(this + 0x128) < *(float *)(this + 0xd8)) {
      plVar5 = *(long **)(this + 0x120);
      lVar4 = *plVar5;
      this[0x134] = (PVZ2UIProgressBar)0x1;
      pcVar7 = *(code **)(lVar4 + 0x78);
      std::string::string(asStack_58,"animation");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      (*pcVar7)(plVar5,asStack_58,0,0,
                (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
      std::string::~string(asStack_58);
      nop();
      PVar1 = this[0x14c];
      goto joined_r0x04388838;
    }
  }
  else {
    cVar2 = FUN_043881fc(fVar9);
    if (cVar2 == '\0') goto LAB_04388890;
LAB_04388798:
    pPVar6 = *(PopAnimRig **)(this + 0xe8);
    fVar9 = (float)PVZ_T();
    PopAnimRig::UpdateAnim(pPVar6,fVar9,fVar8);
    if (this[0x104] == (PVZ2UIProgressBar)0x0) goto LAB_04388590;
LAB_043887b8:
    pPVar6 = *(PopAnimRig **)(this + 0xf0);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar6,fVar8,fVar9);
LAB_043887dc:
    if (this[0x11c] == (PVZ2UIProgressBar)0x0) goto LAB_04388610;
LAB_043887e4:
    pPVar6 = *(PopAnimRig **)(this + 0x108);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar6,fVar8,fVar9);
LAB_04388808:
    if (this[0x134] == (PVZ2UIProgressBar)0x0) goto LAB_04388690;
LAB_04388810:
    pPVar6 = *(PopAnimRig **)(this + 0x120);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar6,fVar8,fVar9);
  }
  PVar1 = this[0x14c];
joined_r0x04388838:
  if (PVar1 == (PVZ2UIProgressBar)0x0) {
    if (*(float *)(this + 0x140) < *(float *)(this + 0xd8)) {
      plVar5 = *(long **)(this + 0x138);
      lVar4 = *plVar5;
      this[0x14c] = (PVZ2UIProgressBar)0x1;
      pcVar7 = *(code **)(lVar4 + 0x78);
      std::string::string(asStack_58,"animation");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      (*pcVar7)(plVar5,asStack_58,0,0,
                (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
      std::string::~string(asStack_58);
      nop();
    }
  }
  else {
    pPVar6 = *(PopAnimRig **)(this + 0x138);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar6,fVar8,fVar9);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::PVZ2UIProgressBar() */

void __thiscall PVZ2UIProgressBar::PVZ2UIProgressBar(PVZ2UIProgressBar *this)

{
  undefined8 uVar1;
  PVZ2UIProgressBar PVar2;
  LawnApp *this_00;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  undefined8 uVar5;
  PVZ2UIProgressBar *pPVar6;
  int iVar7;
  long lVar8;
  RtWeakPtr aRStack_80 [8];
  RtWeakPtr aRStack_78 [8];
  string asStack_70 [8];
  ProgressBarDoodad local_68 [8];
  undefined8 uStack_60;
  undefined4 local_58;
  PVZ2UIProgressBar local_54 [4];
  ProgressBarDoodad aPStack_50 [24];
  ProgressBarDoodad aPStack_38 [24];
  ProgressBarDoodad aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar6 = this + 0xf0;
  Sexy::Widget::Widget((Widget *)this);
  this[0xe4] = (PVZ2UIProgressBar)0x0;
  *(undefined ***)this = &PTR_GetClass_0683be90;
  *(undefined4 *)(this + 0xd4) = 0x3e99999a;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  this_00 = gLawnApp;
  iVar7 = 1;
  lVar8 = 0;
  std::string::string(asStack_70,"ProgressBar");
  LawnApp::LoadGroup(this_00,asStack_70);
  std::string::~string(asStack_70);
  nop();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06afec88);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  uVar5 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar3,pRVar4);
  *(undefined8 *)(this + 0xe8) = uVar5;
  ProgressBarDoodad::ProgressBarDoodad(local_68,99.9,0x168,0x5f);
  ProgressBarDoodad::ProgressBarDoodad(aPStack_50,0.3,100,0x5f);
  ProgressBarDoodad::ProgressBarDoodad(aPStack_38,0.5,0xb4,100);
  ProgressBarDoodad::ProgressBarDoodad(aPStack_20,0.68,0xfa,0x5f);
  do {
    uVar5 = *(undefined8 *)(local_68 + lVar8);
    uVar1 = *(undefined8 *)((long)&uStack_60 + lVar8);
    PVar2 = local_54[lVar8];
    *(undefined4 *)(pPVar6 + 0x10) = *(undefined4 *)((long)&local_58 + lVar8);
    pPVar6[0x14] = PVar2;
    *(undefined8 *)pPVar6 = uVar5;
    *(undefined8 *)(pPVar6 + 8) = uVar1;
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06afec10);
    if (iVar7 == 1) {
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06afecb0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_78,(RtWeakPtr *)asStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
      pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
      uVar5 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar3,pRVar4);
      *(undefined8 *)pPVar6 = uVar5;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
    else {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
      pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
      uVar5 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar3,pRVar4);
      *(undefined8 *)pPVar6 = uVar5;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      if (iVar7 == 4) {
        ResetAnimation(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    lVar8 = lVar8 + 0x18;
    pPVar6 = pPVar6 + 0x18;
    iVar7 = iVar7 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIProgressBar::Draw(PVZ2UIProgressBar *this,Graphics *param_1)

{
  int iVar1;
  PVZ2UIProgressBar PVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SalesProgressBar *pSVar7;
  LotteryResultProgressBar *pLVar8;
  Image *pIVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  pSVar7 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06afebc8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06afebc8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar5 = FUN_04388280(0x23);
  fVar12 = *(float *)(this + 0xe0);
  fVar11 = (float)local_38;
  iVar6 = FUN_04388280(0x4b);
  fVar10 = (float)local_34;
  pIVar9 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06afebc8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,(int)(fVar11 + fVar12 * (float)iVar5),
             (int)(fVar10 + fVar12 * (float)iVar6),(int)((float)local_30 * 0.86),
             (int)((float)(int)((float)(iVar3 * iVar1) / (float)iVar4) * 0.86));
  iVar3 = local_30;
  pSVar7 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06afec60);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pLVar8 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06afec60);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = (iVar3 * iVar4) / iVar5;
  }
  iVar3 = FUN_04388280(0x23);
  fVar10 = *(float *)(this + 0xe0);
  iVar4 = FUN_04388280(0x4b);
  iVar5 = FUN_04388280(0xffffffec);
  Sexy::Insets::Insets
            ((Insets *)&local_28,(int)((float)local_38 + fVar10 * (float)iVar3),
             (int)((float)iVar5 * 0.86 + fVar10 * (float)iVar4 + (float)local_34),
             (int)((float)local_30 * 0.86),(int)((float)iVar1 * 0.86));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  local_10 = (int)((float)local_10 * *(float *)(this + 0xd8));
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_18);
  pIVar9 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06afec60);
  Sexy::Graphics::DrawImage(param_1,pIVar9,local_28,local_24,local_20,local_1c);
  Sexy::Graphics::ClearClipRect(param_1);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0xe8),param_1);
  if (this[0x104] == (PVZ2UIProgressBar)0x0) {
    PVar2 = this[0x11c];
  }
  else {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0xf0),param_1);
    PVar2 = this[0x11c];
  }
  if (PVar2 == (PVZ2UIProgressBar)0x0) {
    PVar2 = this[0x134];
  }
  else {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x108),param_1);
    PVar2 = this[0x134];
  }
  if (PVar2 == (PVZ2UIProgressBar)0x0) {
    PVar2 = this[0x14c];
  }
  else {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x120),param_1);
    PVar2 = this[0x14c];
  }
  if (PVar2 != (PVZ2UIProgressBar)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x138),param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIProgressBar::Resize(int, int, int, int) */

void __thiscall
PVZ2UIProgressBar::Resize(PVZ2UIProgressBar *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  PVZ2UIProgressBar *pPVar2;
  PVZ2UIProgressBar *pPVar3;
  float fVar4;
  float fVar5;
  SexyTransform2D aSStack_58 [40];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  lVar1 = FUN_0438820c(*(undefined8 *)(*(long *)(this + 0xe8) + 0x20));
  *(float *)(this + 0xe0) =
       (float)*(int *)(this + 0x50) / ((float)*(int *)(lVar1 + 0x3c) * *(float *)(lVar1 + 0x28));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
  Sexy::SexyTransform2D::Scale(aSStack_58,*(float *)(this + 0xe0),*(float *)(this + 0xe0));
  PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0xe8),aSStack_58);
  pPVar2 = this + 0xf0;
  do {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar5 = *(float *)(this + 0xe0);
    fVar4 = (float)FUN_04388294((float)*(int *)(pPVar2 + 0xc) * fVar5);
    fVar5 = (float)FUN_04388294((float)*(int *)(pPVar2 + 0x10) * fVar5);
    lVar1 = FUN_0438820c(*(undefined8 *)(*(long *)pPVar2 + 0x20));
    FUN_043881dc((float)(int)fVar4,
                 (float)(int)(fVar5 - *(float *)(lVar1 + 0x28) * (float)*(int *)(lVar1 + 0x40)),
                 auStack_28,auStack_1c);
    pPVar3 = pPVar2 + 0x18;
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)pPVar2,aSStack_30);
    pPVar2 = pPVar3;
  } while (pPVar3 != this + 0x150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIProgressBar::IsCompleted() */

undefined8 __thiscall PVZ2UIProgressBar::IsCompleted(PVZ2UIProgressBar *this)

{
  undefined8 uVar1;
  
  if (this[0xe4] != (PVZ2UIProgressBar)0x0) {
    uVar1 = FUN_050cfe3c(*(undefined4 *)(this + 0xd8));
    return uVar1;
  }
  return 0;
}

