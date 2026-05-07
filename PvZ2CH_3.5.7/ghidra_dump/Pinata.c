// Class: Pinata


/* Pinata::OnDropComplete(std::string const&) */

void Pinata::OnDropComplete(string *param_1)

{
  param_1[0x5e] = (string)0x1;
  return;
}


/* Pinata::Pinata() */

void __thiscall Pinata::Pinata(Pinata *this)

{
  PinataRewardDrawer::PinataRewardDrawer((PinataRewardDrawer *)(this + 0x18));
  this[8] = (Pinata)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x5c] = (Pinata)0x0;
  this[0x5d] = (Pinata)0x0;
  this[0x5e] = (Pinata)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* Pinata::~Pinata() */

void __thiscall Pinata::~Pinata(Pinata *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined8 *)(this + 0x10) = 0;
  PinataRewardDrawer::~PinataRewardDrawer((PinataRewardDrawer *)(this + 0x18));
  return;
}


/* Pinata::IsPopped() const */

Pinata __thiscall Pinata::IsPopped(Pinata *this)

{
  return this[0x5c];
}


/* Pinata::GetReward() const */

undefined8 __thiscall Pinata::GetReward(Pinata *this)

{
  return *(undefined8 *)(this + 0x60);
}


/* Pinata::IsRevealing() const */

Pinata __thiscall Pinata::IsRevealing(Pinata *this)

{
  return this[0x5d];
}


/* Pinata::Update(float, float) */

void __thiscall Pinata::Update(Pinata *this,float param_1,float param_2)

{
  char cVar1;
  
  PopAnimRigRectDrawer::Update(*(PopAnimRigRectDrawer **)(this + 0x10),param_1,param_2);
  cVar1 = IsRevealing(this);
  if (cVar1 != '\0') {
    *(float *)(this + 0x50) = *(float *)(this + 0x50) + param_2;
  }
  return;
}


/* Pinata::IsDropped() const */

Pinata __thiscall Pinata::IsDropped(Pinata *this)

{
  return this[0x5e];
}


/* Pinata::IsRevealed() const */

bool __thiscall Pinata::IsRevealed(Pinata *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = IsPopped(this);
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_T();
    if (2.0 < fVar2 - *(float *)(this + 0x68)) {
      return (bool)cVar1;
    }
  }
  return 5.0 < *(float *)(this + 0x50);
}


/* Pinata::RevealPrize(TheDayRewardItem const*) */

void __thiscall Pinata::RevealPrize(Pinata *this,TheDayRewardItem *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  cVar1 = IsPopped(this);
  if (cVar1 == '\0') {
    cVar1 = IsRevealing(this);
    if (cVar1 == '\0') {
      iVar2 = FUN_049c41a0(0x32);
      PinataRewardDrawer::SetReward
                ((int)(PinataRewardDrawer *)(this + 0x18),iVar2 + *(int *)this,
                 (TheDayRewardItem *)(ulong)(uint)(iVar2 + *(int *)(this + 4)),SUB81(param_1,0));
      PinataRewardDrawer::SetOpacity((PinataRewardDrawer *)(this + 0x18),0);
      this[0x5d] = (Pinata)0x1;
      *(undefined4 *)(this + 0x50) = 0;
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x54) = fVar3;
      *(float *)(this + 0x58) = fVar3 + 3.0;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pinata::Pop(Sexy::Delegate1<std::string const&>, TheDayRewardItem const*) */

void __thiscall Pinata::Pop(Pinata *this,Delegate1 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsPopped(this);
  if ((cVar1 == '\0') && (cVar1 = IsRevealing(this), cVar1 == '\0')) {
    uVar6 = PVZ_T();
    plVar4 = *(long **)(this + 0x10);
    lVar3 = *plVar4;
    this[0x5c] = (Pinata)0x1;
    *(undefined8 *)(this + 0x60) = param_3;
    pcVar5 = *(code **)(lVar3 + 0x10);
    *(undefined4 *)(this + 0x68) = uVar6;
    std::string::string(asStack_40,"explode");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    (*pcVar5)(plVar4,asStack_40,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    iVar2 = FUN_049c41a0(0x32);
    PinataRewardDrawer::SetReward
              ((int)this + 0x18,iVar2 + *(int *)this,
               (TheDayRewardItem *)(ulong)(uint)(iVar2 + *(int *)(this + 4)),SUB81(param_3,0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pinata::Drop() */

void __thiscall Pinata::Drop(Pinata *this)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  std::string::string(asStack_58,"drop");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDropComplete);
  Sexy::Delegate1<std::string_const&>::Delegate1<Pinata,void(Pinata::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pinata::Draw(Sexy::Graphics*) */

void __thiscall Pinata::Draw(Pinata *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PopAnimRigRectDrawer *this_02;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_4c;
  GraphicsAutoState aGStack_48 [8];
  int local_40;
  int local_3c;
  int local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  cVar1 = IsRevealing(this);
  if (cVar1 != '\0') {
    uVar8 = *(undefined4 *)(this + 0x54);
    uVar7 = *(undefined4 *)(this + 0x58);
    uVar6 = PVZ_T();
    local_4c = 0xff;
    local_40 = 0;
    iVar2 = CurveLerp<int>(uVar8,uVar7,uVar6,&local_4c,(Color *)&local_40,10);
    PopAnimRig::GetPAMColor();
    local_34 = (int)(float)iVar2;
    PopAnimRig::SetPAMColor(*(PopAnimRig **)(*(long *)(this + 0x10) + 0x18),(Color *)&local_40);
    PinataRewardDrawer::SetOpacity((PinataRewardDrawer *)(this + 0x18),(int)(255.0 - (float)iVar2));
  }
  cVar1 = IsPopped(this);
  if (cVar1 == '\0') {
    iVar2 = FUN_049c41a0(0x37);
    iVar3 = FUN_049c41a0(0x5f);
    Sexy::Point::Point((Point *)&local_40,iVar2,iVar3);
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b75200);
    iVar2 = *(int *)this;
    this_00 = (LotteryResultProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b75200);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = *(int *)(this + 4);
    iVar2 = (iVar2 - iVar4 / 2) + local_40;
    this_01 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b75200);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,(iVar3 - iVar4 / 2) + local_3c);
  }
  this_02 = *(PopAnimRigRectDrawer **)(this + 0x10);
  iVar2 = FUN_049c41a0(100);
  Sexy::Insets::Insets((Insets *)&local_40,*(int *)this,*(int *)(this + 4),iVar2,iVar2);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  PopAnimRigRectDrawer::Draw(this_02,param_1,(TRect *)&local_40,aSStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Pinata::Pinata(Pinata const&) */

void __thiscall Pinata::Pinata(Pinata *this,Pinata *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Pinata PVar5;
  Pinata PVar6;
  Pinata PVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  PVar5 = param_1[8];
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[8] = PVar5;
  PinataRewardDrawer::PinataRewardDrawer
            ((PinataRewardDrawer *)(this + 0x18),(PinataRewardDrawer *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  PVar5 = param_1[0x5c];
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  PVar6 = param_1[0x5d];
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  PVar7 = param_1[0x5e];
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x48) = uVar8;
  this[0x5c] = PVar5;
  this[0x5d] = PVar6;
  this[0x5e] = PVar7;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x58) = uVar3;
  *(undefined4 *)(this + 0x68) = uVar4;
  return;
}

