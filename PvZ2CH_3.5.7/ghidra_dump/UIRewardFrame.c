// Class: UIRewardFrame


/* UIRewardFrame::SetDecoratorString(std::string) */

void __thiscall UIRewardFrame::SetDecoratorString(UIRewardFrame *this,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToImage(param_2,false);
  *(undefined8 *)(this + 0xf0) = uVar1;
  return;
}


/* UIRewardFrame::SetDecoratorType(UIRewardFrame::DecoratorType) */

void __thiscall UIRewardFrame::SetDecoratorType(UIRewardFrame *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xf8) = param_2;
  return;
}


/* UIRewardFrame::Draw(Sexy::Graphics*) */

void __thiscall UIRewardFrame::Draw(UIRewardFrame *this,Graphics *param_1)

{
  switch(*(undefined4 *)(this + 0xd4)) {
  case 0:
    (**(code **)(*(long *)this + 0x318))(this,param_1);
    break;
  case 1:
    (**(code **)(*(long *)this + 800))(this,param_1);
    break;
  case 2:
    (**(code **)(*(long *)this + 0x330))(this,param_1);
    break;
  case 3:
    (**(code **)(*(long *)this + 0x338))(this,param_1);
    break;
  case 4:
    (**(code **)(*(long *)this + 0x340))(this,param_1);
    break;
  case 5:
    (**(code **)(*(long *)this + 0x350))(this,param_1);
    break;
  case 6:
    (**(code **)(*(long *)this + 0x358))(this,param_1);
    break;
  case 7:
    (**(code **)(*(long *)this + 0x360))(this,param_1);
    break;
  case 8:
    (**(code **)(*(long *)this + 0x368))(this,param_1);
    break;
  case 9:
    (**(code **)(*(long *)this + 0x370))(this,param_1);
    break;
  case 10:
    (**(code **)(*(long *)this + 0x378))(this,param_1);
    break;
  case 0xb:
    (**(code **)(*(long *)this + 0x380))(this,param_1);
    break;
  case 0xc:
    (**(code **)(*(long *)this + 0x388))(this,param_1);
    break;
  case 0xd:
    (**(code **)(*(long *)this + 0x390))(this,param_1);
    break;
  case 0xe:
    (**(code **)(*(long *)this + 0x398))(this,param_1);
    break;
  case 0xf:
    (**(code **)(*(long *)this + 0x3a0))(this,param_1);
    break;
  case 0x10:
    (**(code **)(*(long *)this + 0x3a8))(this,param_1);
    break;
  case 0x11:
    (**(code **)(*(long *)this + 0x3b0))(this,param_1);
    break;
  case 0x12:
    (**(code **)(*(long *)this + 0x3b8))(this,param_1);
    break;
  case 0x13:
    (**(code **)(*(long *)this + 0x328))(this,param_1);
    break;
  case 0x14:
    (**(code **)(*(long *)this + 0x348))(this,param_1);
  }
  (**(code **)(*(long *)this + 0x3d0))(this,param_1);
  (**(code **)(*(long *)this + 0x3c0))(this,param_1);
  (**(code **)(*(long *)this + 0x3c8))(this,param_1);
  if ((this[0x13c] != (UIRewardFrame)0x0) &&
     (*(StandaloneEffect **)(this + 0x130) != (StandaloneEffect *)0x0)) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x130));
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x130),param_1);
    return;
  }
  return;
}


/* UIRewardFrame::DrawLockImage(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawLockImage(UIRewardFrame *this,Graphics *param_1)

{
  if (*(Image **)(this + 0x100) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x100),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  return;
}


/* UIRewardFrame::DrawLevelImage(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawLevelImage(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((this[0x128] != (UIRewardFrame)0x0) &&
     (*(LotteryResultProgressBar **)(this + 0x108) != (LotteryResultProgressBar *)0x0)) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x108));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
    fVar3 = ((float)iVar1 * (float)*(int *)(this + 0x54) * 0.333) / (float)iVar2;
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x108),(int)((float)*(int *)(this + 0x50) - fVar3),0,
               (int)fVar3,(int)((float)*(int *)(this + 0x54) * 0.333));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawString_data(int, Sexy::Graphics*, int, int, Sexy::Color) */

void __thiscall
UIRewardFrame::DrawString_data
          (undefined8 param_1,undefined8 param_2_00,undefined8 param_2,int param_3,int param_4,
          Insets *param_6)

{
  undefined8 uVar1;
  PrimeTypeface *this;
  float fVar2;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < (int)param_2_00) {
    uVar1 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    this = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    fVar2 = (float)Sexy::PrimeTypeface::GetHeight(this);
    Sexy::StrFormat(L"%d",auStack_20,param_2_00);
    Sexy::Insets::Insets(aIStack_18,param_6);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)param_3 * 0.93 - fVar2,(float)param_4,uVar1,param_2,
               auStack_20,1,aIStack_18,0);
    FUN_05476c50(auStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRewardFrame::SetLockString(std::string) */

void __thiscall UIRewardFrame::SetLockString(UIRewardFrame *this,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToImage(param_2,false);
  *(undefined8 *)(this + 0x100) = uVar1;
  return;
}


/* UIRewardFrame::SetTextColor(Sexy::Color) */

void __thiscall UIRewardFrame::SetTextColor(UIRewardFrame *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x114) = *param_2;
  *(undefined8 *)(this + 0x11c) = uVar1;
  return;
}


/* UIRewardFrame::SetObjectID(int) */

void __thiscall UIRewardFrame::SetObjectID(UIRewardFrame *this,int param_1)

{
  *(int *)(this + 300) = param_1;
  return;
}


/* UIRewardFrame::SetFrameRotationScale(float) */

void __thiscall UIRewardFrame::SetFrameRotationScale(UIRewardFrame *this,float param_1)

{
  *(float *)(this + 0x138) = param_1;
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x80))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::GetDecoratorRect(UIRewardFrame::DecoratorType) */

void __thiscall UIRewardFrame::GetDecoratorRect(Insets *param_1,UIRewardFrame *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(param_1);
  iVar4 = *(int *)(this + 0xf8);
  if (iVar4 == 0) {
    iVar4 = *(int *)(this + 0x50) - (*(int *)(this + 0x50) >> 0x1f);
    iVar2 = 0;
    iVar3 = 0;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        iVar2 = 0;
        iVar4 = *(int *)(this + 0x50) / 2;
      }
      else {
        if (iVar4 == 3) {
          iVar1 = *(int *)(this + 0x50);
          iVar2 = 0;
          iVar4 = iVar1 - (iVar1 >> 0x1f);
          iVar3 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar3 = iVar1;
          }
          iVar3 = iVar3 >> 2;
          goto LAB_04b8aebc;
        }
        if (iVar4 != 4) {
          if (iVar4 == 5) {
            iVar2 = 0;
            iVar4 = *(int *)(this + 0x50) - (*(int *)(this + 0x50) >> 0x1f);
          }
          else {
            if (iVar4 != 6) {
              if (iVar4 != 7) goto LAB_04b8ae80;
              iVar4 = *(int *)(this + 0x50) / 2;
              iVar2 = iVar4;
              goto LAB_04b8aeec;
            }
            iVar3 = *(int *)(this + 0x50);
            iVar4 = iVar3 - (iVar3 >> 0x1f);
            iVar2 = iVar3 + 3;
            if (-1 < iVar3) {
              iVar2 = iVar3;
            }
            iVar2 = iVar2 >> 2;
          }
          iVar4 = iVar4 >> 1;
          Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar4,iVar4,iVar4);
          *(undefined8 *)param_1 = local_18;
          *(undefined8 *)(param_1 + 8) = uStack_10;
          goto LAB_04b8ae80;
        }
        iVar4 = *(int *)(this + 0x50);
        iVar2 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar2 = iVar4;
        }
        iVar2 = iVar2 >> 2;
        iVar4 = iVar4 / 2;
      }
LAB_04b8aeec:
      Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar2,iVar4,iVar4);
      *(undefined8 *)param_1 = local_18;
      *(undefined8 *)(param_1 + 8) = uStack_10;
      goto LAB_04b8ae80;
    }
    iVar1 = *(int *)(this + 0x50);
    iVar3 = 0;
    iVar4 = iVar1 - (iVar1 >> 0x1f);
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 >> 2;
  }
LAB_04b8aebc:
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar4 >> 1,iVar4 >> 1);
  *(undefined8 *)param_1 = local_18;
  *(undefined8 *)(param_1 + 8) = uStack_10;
LAB_04b8ae80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawDecorator(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawDecorator(UIRewardFrame *this,Graphics *param_1)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf0) != 0) {
    GetDecoratorRect((UIRewardFrame *)&local_18,this,*(undefined4 *)(this + 0xf8));
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),local_18,local_14,local_10,local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRewardFrame::~UIRewardFrame() */

void __thiscall UIRewardFrame::~UIRewardFrame(UIRewardFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_069724a0;
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 0x18))();
    *(undefined8 *)(this + 0x130) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIRewardFrame::~UIRewardFrame() */

void __thiscall UIRewardFrame::~UIRewardFrame(UIRewardFrame *this)

{
  ~UIRewardFrame(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawMaterial(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawMaterial(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Image *pIVar5;
  string *psVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  code *pcVar7;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar6 = extraout_x1;
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar6 = extraout_x1_00;
    }
  }
  if (*(long *)(this + 0xe0) == 0) {
    Sexy::StringToUpper((Sexy *)(this + 0xd8),psVar6);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_20);
    uVar4 = StringHelper::ToImage((string *)aIStack_18,true);
    *(undefined8 *)(this + 0xe0) = uVar4;
    std::string::~string((string *)aIStack_18);
    std::string::~string(asStack_20);
    if (*(long *)(this + 0xe0) == 0) goto LAB_04b8b18c;
  }
  Sexy::Insets::Insets
            (aIStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
  DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
LAB_04b8b18c:
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar1,uVar2,aIStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawCoin(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawCoin(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  code *pcVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b884c0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(int)((float)iVar1 * 0.07),(int)((float)iVar2 * 0.07),
             (int)((float)iVar1 * 0.86),(int)((float)iVar2 * 0.86));
  uVar3 = *(undefined4 *)(this + 0xe8);
  uVar4 = *(undefined4 *)(this + 0x54);
  uVar5 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar4,uVar5,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawGem(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawGem(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  code *pcVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88090);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(int)((float)iVar1 * 0.07),(int)((float)iVar2 * 0.07),
             (int)((float)iVar1 * 0.86),(int)((float)iVar2 * 0.86));
  uVar3 = *(undefined4 *)(this + 0xe8);
  uVar4 = *(undefined4 *)(this + 0x54);
  uVar5 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar4,uVar5,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawExp(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawExp(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  NameMapperBase *this_00;
  undefined8 uVar5;
  Image *pIVar6;
  code *pcVar7;
  Insets aIStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  if (*(long *)(this + 0xe0) == 0) {
    this_00 = (NameMapperBase *)ExpMapper::GetInstance();
    iVar4 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
    GetGameItemInfo(iVar4,0x7fffffff,0);
    uVar5 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0xe0) = uVar5;
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_38);
    if (*(long *)(this + 0xe0) == 0) goto LAB_04b8b644;
  }
  Sexy::Insets::Insets
            (aIStack_38,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
  DrawAdaptiveImage(param_1,aIStack_38,*(undefined8 *)(this + 0xe0));
LAB_04b8b644:
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets(aIStack_38,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar1,uVar2,aIStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawOthers(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawOthers(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Image *pIVar4;
  code *pcVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::Insets::Insets
              (aIStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
               (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86)
               ,(int)((float)*(int *)(this + 0x54) * 0.86));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar5 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar5)(this,uVar3,param_1,uVar1,uVar2,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawTrialCard(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawTrialCard(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  CachedUIResourcePtr<Sexy::Image> *pCVar8;
  Image *pIVar9;
  string *extraout_x1;
  code *pcVar10;
  string asStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
      Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0);
      Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  Sexy::Insets::Insets
            (aIStack_28,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x140));
  if (bVar5) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    iVar1 = *(int *)(lVar7 + 0xd0);
    if (iVar1 == 4) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ed0;
    }
    else if (iVar1 == 3) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88398;
    }
    else {
      if (iVar1 != 2) goto LAB_04b8b974;
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87e50;
    }
  }
  else {
LAB_04b8b974:
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88518;
  }
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  DrawAdaptiveImage(param_1,(string *)aIStack_18,uVar6);
  Sexy::StringToUpper((Sexy *)(this + 0xd8),extraout_x1);
  std::operator+("IMAGE_UI_TRIALCARD_",asStack_30);
  lVar7 = StringHelper::ToImage((string *)aIStack_18,true);
  std::string::~string((string *)aIStack_18);
  std::string::~string(asStack_30);
  if (lVar7 == 0) {
    std::string::string((string *)aIStack_18,"IMAGE_UI_TRIALCARD_SUNFLOWER");
    lVar7 = StringHelper::ToImage((string *)aIStack_18,true);
    std::string::~string((string *)aIStack_18);
    nop();
    if (lVar7 != 0) goto LAB_04b8b9e8;
  }
  else {
LAB_04b8b9e8:
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    DrawAdaptiveImage(param_1,(string *)aIStack_18,lVar7);
  }
  iVar1 = *(int *)(this + 0x124);
  if (iVar1 == 2) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f20;
  }
  else if (iVar1 == 3) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87fa0;
  }
  else if (iVar1 == 4) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88018;
  }
  else {
    if (iVar1 != 5) goto LAB_04b8ba28;
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    pCVar8 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ea8;
  }
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar8);
  DrawAdaptiveImage(param_1,(string *)aIStack_18,uVar6);
LAB_04b8ba28:
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b884e8);
  DrawAdaptiveImage(param_1,(string *)aIStack_18,uVar6);
  uVar2 = *(undefined4 *)(this + 0xe8);
  uVar3 = *(undefined4 *)(this + 0x54);
  uVar4 = *(undefined4 *)(this + 0x50);
  pcVar10 = *(code **)(*(long *)this + 0x310);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar10)(this,uVar2,param_1,uVar3,uVar4,(string *)aIStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawArtifact(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawArtifact(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  NameMapperBase *this_00;
  long lVar4;
  Image *pIVar5;
  string *extraout_x1;
  string *psVar6;
  string *extraout_x1_00;
  string *extraout_x1_01;
  code *pcVar7;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  psVar6 = extraout_x1;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108);
      Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar6 = extraout_x1_00;
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ff0);
      Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar6 = extraout_x1_01;
    }
  }
  Sexy::StringToUpper((Sexy *)(this + 0xd8),psVar6);
  std::operator+("IMAGE_UI_ARTIFACT_",asStack_20);
  lVar4 = StringHelper::ToImage(asStack_18,false);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (lVar4 != 0) {
    Sexy::Insets::Insets
              ((Insets *)asStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
               (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86)
               ,(int)((float)*(int *)(this + 0x54) * 0.86));
    DrawAdaptiveImage(param_1,asStack_18,lVar4);
  }
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar1,uVar2,asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawCollection(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawCollection(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  NameMapperBase *this_00;
  long lVar3;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)CollectionMapper::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  if (this[0xd1] != (UIRewardFrame)0x0) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 2) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
    }
    else if (iVar1 == 3) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
    }
    else {
      if (iVar1 != 1) goto LAB_04b8be70;
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b8be70:
  if ((iVar2 != -1) &&
     (lVar3 = CollectionUtils::GetCollectionImage(iVar2,*(int *)(this + 0xe8),true), lVar3 != 0)) {
    Sexy::Insets::Insets
              (aIStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
               (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86)
               ,(int)((float)*(int *)(this + 0x54) * 0.86));
    DrawAdaptiveImage(param_1,aIStack_18,lVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawCardGame(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawCardGame(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  NameMapperBase *this_00;
  long lVar3;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  Image *pIVar4;
  Insets aIStack_48 [16];
  GAME_ITEM_INFO aGStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)CardMapper::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  if (this[0xd1] != (UIRewardFrame)0x0) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 2) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
    }
    else if (iVar1 == 3) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
    }
    else {
      if (iVar1 != 1) goto LAB_04b8bfbc;
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b8bfbc:
  if (iVar2 != -1) {
    GetGameItemInfo(iVar2,0x7fffffff,0);
    lVar3 = StringHelper::ToImage(asStack_18,false);
    if (lVar3 != 0) {
      Sexy::Insets::Insets
                (aIStack_48,(int)((float)*(int *)(this + 0x50) * 0.07),
                 (int)((float)*(int *)(this + 0x54) * 0.07),
                 (int)((float)*(int *)(this + 0x50) * 0.86),
                 (int)((float)*(int *)(this + 0x54) * 0.86));
      DrawAdaptiveImage(param_1,aIStack_48,lVar3);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawRankAvatar(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawRankAvatar(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  NameMapperBase *this_00;
  long lVar3;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  Image *pIVar4;
  string asStack_48 [16];
  GAME_ITEM_INFO aGStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)RankAvatarMapper::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  if (this[0xd1] != (UIRewardFrame)0x0) {
    iVar1 = *(int *)(this + 0xe8);
    if (iVar1 == 2) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
    }
    else if (iVar1 == 3) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
    }
    else {
      if (iVar1 != 1) goto LAB_04b8c128;
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b8c128:
  if (iVar2 != -1) {
    GetGameItemInfo(iVar2,0x7fffffff,0);
    std::operator+(asStack_18,"_DISPLAY");
    lVar3 = StringHelper::ToImage(asStack_48,false);
    std::string::~string(asStack_48);
    if (lVar3 != 0) {
      Sexy::Insets::Insets
                ((Insets *)asStack_48,(int)((float)*(int *)(this + 0x50) * 0.07),
                 (int)((float)*(int *)(this + 0x54) * 0.07),
                 (int)((float)*(int *)(this + 0x50) * 0.86),
                 (int)((float)*(int *)(this + 0x54) * 0.86));
      DrawAdaptiveImage(param_1,asStack_48,lVar3);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRewardFrame::GetLevelImage(int) */

undefined8 __thiscall UIRewardFrame::GetLevelImage(UIRewardFrame *this,int param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ef8);
    return uVar1;
  case 2:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f78);
    return uVar1;
  case 3:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d50);
    return uVar1;
  case 4:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87e78);
    return uVar1;
  case 5:
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b883c0);
    return uVar1;
  default:
    return 0;
  }
}


/* UIRewardFrame::SetLevel(int) */

void __thiscall UIRewardFrame::SetLevel(UIRewardFrame *this,int param_1)

{
  undefined8 uVar1;
  
  *(int *)(this + 0x124) = param_1;
  uVar1 = GetLevelImage(this,param_1);
  *(undefined8 *)(this + 0x108) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawAccessory(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawAccessory(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  PlantAccessoryMgr *this_00;
  NameMapperBase *this_01;
  Image *pIVar6;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  code *pcVar7;
  GAME_ITEM_INFO aGStack_70 [32];
  string asStack_50 [16];
  TGAAccumulatedLoginData aTStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)(this + 0xd8));
  cVar4 = FUN_0547419c(aTStack_40);
  if (cVar4 != '\0') goto LAB_04b8c3b8;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    switch(local_20) {
    case 0:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 1:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 2:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 3:
    case 4:
    case 5:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    case 0xffffffff:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    default:
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      goto LAB_04b8c340;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b8c340:
  this_01 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  iVar5 = NameMapperBase::GetIdForName(this_01,(string *)(this + 0xd8));
  GetGameItemInfo(iVar5,0x7fffffff,0);
  pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_70);
LAB_04b8c3b8:
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets((Insets *)aGStack_70,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar1,uVar2,(Insets *)aGStack_70);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawAccessoryPiece(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawAccessoryPiece(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  PlantAccessoryMgr *this_00;
  NameMapperBase *this_01;
  Image *pIVar6;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  code *pcVar7;
  GAME_ITEM_INFO aGStack_70 [32];
  string asStack_50 [16];
  TGAAccumulatedLoginData aTStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)(this + 0xd8));
  cVar4 = FUN_0547419c(aTStack_40);
  if (cVar4 != '\0') goto LAB_04b8c5d0;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    switch(local_20) {
    case 0:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 1:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 2:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 3:
    case 4:
    case 5:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    case 0xffffffff:
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    default:
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      goto LAB_04b8c558;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_04b8c558:
  this_01 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  iVar5 = NameMapperBase::GetIdForName(this_01,(string *)(this + 0xd8));
  GetGameItemInfo(iVar5,0x7fffffff,0);
  pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_70);
LAB_04b8c5d0:
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar7 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets((Insets *)aGStack_70,(Insets *)(this + 0x114));
  (*pcVar7)(this,uVar3,param_1,uVar1,uVar2,(Insets *)aGStack_70);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::EnableFrameRotation(bool) */

void __thiscall UIRewardFrame::EnableFrameRotation(UIRewardFrame *this,bool param_1)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_00;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  this[0x13c] = (UIRewardFrame)param_1;
  local_8 = ___stack_chk_guard;
  this[0x59] = (UIRewardFrame)!param_1;
  if ((param_1) && (*(long *)(this + 0x130) == 0)) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x130) = pEVar1;
    std::string::string(asStack_18,"POPANIM_EFFECTS_BTN_ROTATION_EFFECT");
    GetPAMByName(asStack_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    this_00 = *(StandaloneEffect **)(this + 0x130);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aRStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x130),true);
    (**(code **)(**(long **)(this + 0x130) + 0x80))
              (*(undefined4 *)(this + 0x138),*(long **)(this + 0x130));
    StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0x130),true);
    pEVar1 = *(Effect_PopAnim **)(this + 0x130);
    std::string::string((string *)aRStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::UIRewardFrame(UIRewardFrame::RewardType, std::string const&, int, bool) */

void __thiscall
UIRewardFrame::UIRewardFrame
          (UIRewardFrame *this,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          UIRewardFrame param_5)

{
  undefined4 uVar1;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = param_2;
  this[0xd1] = param_5;
  *(undefined ***)this = &PTR_GetClass_069724a0;
  FUN_05475d88(this + 0xd8,param_3);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = param_4;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  Sexy::Color::Color((Color *)(this + 0x114));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
  uVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  *(undefined4 *)(this + 0x50) = uVar1;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87dc8);
  uVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  *(undefined4 *)(this + 0x54) = uVar1;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x114) = local_18;
  *(undefined8 *)(this + 0x11c) = uStack_10;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  this[0x13c] = (UIRewardFrame)0x0;
  this[0x128] = (UIRewardFrame)0x1;
  *(undefined4 *)(this + 0x138) = 0x3f800000;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawPlant(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawPlant(UIRewardFrame *this,Graphics *param_1)

{
  bool bVar1;
  string *psVar2;
  Image *pIVar3;
  long lVar4;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined1 auVar5 [16];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  if (this[0xd1] == (UIRewardFrame)0x0) goto switchD_04b8cb84_default;
  if (*(int *)(this + 0x110) == 0) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar4 + 0xd0)) {
    case 0:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8cb84_default;
    }
  }
  else {
    if (*(int *)(this + 0x110) != 1) goto switchD_04b8cb84_default;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar4 + 0xd0)) {
    case 0:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880e0;
      break;
    case 1:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88180;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d18;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88220;
      break;
    default:
      goto switchD_04b8cb84_default;
    }
  }
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
switchD_04b8cb84_default:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    auVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::StringToUpper((Sexy *)(auVar5._0_8_ + 8),auVar5._8_8_);
    std::operator+((string *)&PlantHeadshot::PlantPrefix,asStack_18);
    pIVar3 = (Image *)StringHelper::ToImage(asStack_10,true);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (pIVar3 != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar3,(int)((float)*(int *)(this + 0x50) * 0.07),
                 (int)((float)*(int *)(this + 0x54) * 0.07),
                 (int)((float)*(int *)(this + 0x50) * 0.86),
                 (int)((float)*(int *)(this + 0x54) * 0.86));
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawPlantPiece(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawPlantPiece(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  string *psVar10;
  long lVar11;
  LotteryResultProgressBar *this_00;
  LotteryResultProgressBar *this_01;
  Image *pIVar12;
  CachedUIResourcePtr<Sexy::Image> *pCVar13;
  code *pcVar14;
  int iVar15;
  float fVar16;
  RtWeakPtr aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (!bVar5) goto LAB_04b8cdb0;
  if (this[0xd1] == (UIRewardFrame)0x0) goto switchD_04b8cf08_default;
  if (*(int *)(this + 0x110) == 0) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar11 + 0xd0)) {
    case 0:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8cf08_default;
    }
    goto LAB_04b8cf14;
  }
  if (*(int *)(this + 0x110) == 1) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar11 + 0xd0)) {
    case 0:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880e0;
      break;
    case 1:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0;
      break;
    case 2:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88180;
      break;
    case 3:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d18;
      break;
    case 4:
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88220;
      break;
    default:
      goto switchD_04b8cf08_default;
    }
LAB_04b8cf14:
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
    Sexy::Graphics::DrawImage(param_1,pIVar12,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8cf08_default:
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)(lVar11 + 0x40),false);
  iVar1 = *(int *)(this + 0x50);
  iVar6 = *(int *)(this + 0x54);
  iVar15 = (int)((float)iVar1 * 0.86);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  switch(*(undefined4 *)(lVar11 + 0xd0)) {
  case 0:
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88568;
    break;
  case 1:
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880b8;
    break;
  case 2:
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b885c0;
    break;
  case 3:
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88158;
    break;
  case 4:
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cf0;
    break;
  default:
    if (this_00 == (LotteryResultProgressBar *)0x0) goto LAB_04b8cdb0;
    goto LAB_04b8cd0c;
  }
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
  Sexy::Graphics::DrawImage
            (param_1,pIVar12,(int)((float)iVar1 * 0.07),(int)((float)iVar6 * 0.07),iVar15,
             (int)((float)iVar6 * 0.86));
  if (this_00 != (LotteryResultProgressBar *)0x0) {
LAB_04b8cd0c:
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88568);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(this + 0x50);
    fVar16 = (float)iVar15 / (float)iVar6;
    iVar15 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar6 = *(int *)(this + 0x54);
    iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,(int)((float)iVar1 - (float)iVar15 * fVar16) / 2,
               (int)((float)iVar6 - (float)iVar7 * fVar16) / 2,(int)(fVar16 * (float)iVar8),
               (int)(fVar16 * (float)iVar9));
  }
LAB_04b8cdb0:
  uVar2 = *(undefined4 *)(this + 0x54);
  uVar3 = *(undefined4 *)(this + 0x50);
  pcVar14 = *(code **)(*(long *)this + 0x310);
  uVar4 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar14)(this,uVar4,param_1,uVar2,uVar3,aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawAvatarPiece(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawAvatarPiece(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  string *psVar5;
  long lVar6;
  Image *pIVar7;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  code *pcVar8;
  RtWeakPtr aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (!bVar4) goto LAB_04b8d060;
  if (this[0xd1] == (UIRewardFrame)0x0) goto switchD_04b8d114_default;
  if (*(int *)(this + 0x110) == 0) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar6 + 0xd0)) {
    case 0:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8d114_default;
    }
    goto LAB_04b8d14c;
  }
  if (*(int *)(this + 0x110) == 1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar6 + 0xd0)) {
    case 0:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880e0;
      break;
    case 1:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88180;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d18;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88220;
      break;
    default:
      goto switchD_04b8d114_default;
    }
LAB_04b8d14c:
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8d114_default:
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pIVar7 = (Image *)StringHelper::ToImage((string *)(lVar6 + 0x48),false);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,(int)((float)*(int *)(this + 0x50) * 0.07),
             (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86),
             (int)((float)*(int *)(this + 0x54) * 0.86));
LAB_04b8d060:
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar8 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x114));
  (*pcVar8)(this,uVar3,param_1,uVar1,uVar2,aIStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawAvatar(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawAvatar(UIRewardFrame *this,Graphics *param_1)

{
  bool bVar1;
  string *psVar2;
  Image *pIVar3;
  long lVar4;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined1 auVar5 [16];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      switch(*(undefined4 *)(lVar4 + 0xd0)) {
      case 0:
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
        break;
      case 1:
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
        break;
      case 2:
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
        break;
      case 3:
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
        break;
      case 4:
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
        break;
      default:
        goto switchD_04b8d34c_default;
      }
    }
    else {
      if (*(int *)(this + 0x110) != 1) goto switchD_04b8d34c_default;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ff0;
    }
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8d34c_default:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    auVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::StringToUpper((Sexy *)(auVar5._0_8_ + 8),auVar5._8_8_);
    std::operator+((string *)&PlantHeadshot::AvatarBigPrefix,asStack_18);
    pIVar3 = (Image *)StringHelper::ToImage(asStack_10,true);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (pIVar3 != (Image *)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar3,(int)((float)*(int *)(this + 0x50) * 0.07),
                 (int)((float)*(int *)(this + 0x54) * 0.07),
                 (int)((float)*(int *)(this + 0x50) * 0.86),
                 (int)((float)*(int *)(this + 0x54) * 0.86));
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawNewAvatar(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawNewAvatar(UIRewardFrame *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  NameMapperBase *this_00;
  string *psVar3;
  long lVar4;
  Image *pIVar5;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  NewAvatar::GetPlantNameByAvatarID(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      switch(*(undefined4 *)(lVar4 + 0xd0)) {
      case 0:
        this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
        break;
      case 1:
        this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
        break;
      case 2:
        this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
        break;
      case 3:
        this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
        break;
      case 4:
        this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
        break;
      default:
        goto switchD_04b8d514_default;
      }
    }
    else {
      if (*(int *)(this + 0x110) != 1) goto switchD_04b8d514_default;
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ff0;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8d514_default:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar1) && (lVar4 = NewAvatar::GetAvatarTinyImage(iVar2), lVar4 != 0)) {
    Sexy::Insets::Insets
              (aIStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
               (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86)
               ,(int)((float)*(int *)(this + 0x54) * 0.86));
    DrawAdaptiveImage(param_1,aIStack_18,lVar4);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawNewAvatarPiece(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawNewAvatarPiece(UIRewardFrame *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  NameMapperBase *this_00;
  string *psVar6;
  long lVar7;
  Image *pIVar8;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  code *pcVar9;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
  iVar5 = NameMapperBase::GetIdForName(this_00,(string *)(this + 0xd8));
  NewAvatar::GetPlantNameByAvatarPieceID(iVar5);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  if (this[0xd1] == (UIRewardFrame)0x0) goto LAB_04b8d60c;
  if (*(int *)(this + 0x110) != 0) {
    if (*(int *)(this + 0x110) == 1) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ff0);
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    goto LAB_04b8d60c;
  }
  NewAvatar::GetAvatarInfoByAvatarPieceId(iVar5);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  if (*(int *)(lVar7 + 0x60) < 1) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    switch(*(undefined4 *)(lVar7 + 0xd0)) {
    case 0:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8d794_default;
    }
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (*(int *)(lVar7 + 0x60) == 1) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88248);
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
switchD_04b8d794_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
LAB_04b8d60c:
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar4) && (lVar7 = NewAvatar::GetNewAvatarPieceImage(iVar5), lVar7 != 0)) {
    Sexy::Insets::Insets
              ((Insets *)aRStack_18,(int)((float)*(int *)(this + 0x50) * 0.07),
               (int)((float)*(int *)(this + 0x54) * 0.07),(int)((float)*(int *)(this + 0x50) * 0.86)
               ,(int)((float)*(int *)(this + 0x54) * 0.86));
    DrawAdaptiveImage(param_1,(Insets *)aRStack_18,lVar7);
  }
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar9 = *(code **)(*(long *)this + 0x310);
  uVar3 = *(undefined4 *)(this + 0xe8);
  Sexy::Insets::Insets((Insets *)aRStack_18,(Insets *)(this + 0x114));
  (*pcVar9)(this,uVar3,param_1,uVar1,uVar2,(Insets *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawGeneSequence(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawGeneSequence(UIRewardFrame *this,Graphics *param_1)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  Image *pIVar4;
  CachedUIResourcePtr<Sexy::Image> *pCVar5;
  undefined1 auVar6 [16];
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  if (this[0xd1] == (UIRewardFrame)0x0) goto switchD_04b8dae8_default;
  if (*(int *)(this + 0x110) == 0) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    switch(*(undefined4 *)(lVar3 + 0xd0)) {
    case 0:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8dae8_default;
    }
    goto LAB_04b8daf4;
  }
  if (*(int *)(this + 0x110) == 1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    switch(*(undefined4 *)(lVar3 + 0xd0)) {
    case 0:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880e0;
      break;
    case 1:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0;
      break;
    case 2:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88180;
      break;
    case 3:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d18;
      break;
    case 4:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88220;
      break;
    default:
      goto switchD_04b8dae8_default;
    }
LAB_04b8daf4:
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8dae8_default:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (!bVar1) goto switchD_04b8d984_default;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  switch(*(undefined4 *)(lVar3 + 0xd0)) {
  case 0:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88130;
    break;
  case 1:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88040;
    break;
  case 2:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881f8;
    break;
  case 3:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b882c8;
    break;
  case 4:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88448;
    break;
  default:
    goto switchD_04b8d99c_default;
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
switchD_04b8d99c_default:
  auVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::StringToUpper((Sexy *)(auVar6._0_8_ + 8),auVar6._8_8_);
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_20);
  lVar3 = StringHelper::ToImage(asStack_18,true);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (lVar3 != 0) {
    Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    DrawAdaptiveInInscribedCircleImage(param_1,asStack_18,lVar3);
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  switch(*(undefined4 *)(lVar3 + 0xd0)) {
  case 0:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88370;
    break;
  case 1:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87e28;
    break;
  case 2:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88540;
    break;
  case 3:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88340;
    break;
  case 4:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d78;
    break;
  default:
    goto switchD_04b8d984_default;
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,0,(*(int *)(this + 0x54) << 1) / 3,*(int *)(this + 0x50) / 3,
             *(int *)(this + 0x54) / 3);
switchD_04b8d984_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawGeneEssence(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawGeneEssence(UIRewardFrame *this,Graphics *param_1)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  Image *pIVar4;
  CachedUIResourcePtr<Sexy::Image> *pCVar5;
  undefined1 auVar6 [16];
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  if (this[0xd1] == (UIRewardFrame)0x0) goto switchD_04b8dde8_default;
  if (*(int *)(this + 0x110) == 0) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    switch(*(undefined4 *)(lVar3 + 0xd0)) {
    case 0:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87f50;
      break;
    case 1:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108;
      break;
    case 2:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87cc8;
      break;
    case 3:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881a8;
      break;
    case 4:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881d0;
      break;
    default:
      goto switchD_04b8dde8_default;
    }
    goto LAB_04b8de50;
  }
  if (*(int *)(this + 0x110) == 1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    switch(*(undefined4 *)(lVar3 + 0xd0)) {
    case 0:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b880e0;
      break;
    case 1:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ca0;
      break;
    case 2:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88180;
      break;
    case 3:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87d18;
      break;
    case 4:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88220;
      break;
    default:
      goto switchD_04b8dde8_default;
    }
LAB_04b8de50:
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
switchD_04b8dde8_default:
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    switch(*(undefined4 *)(lVar3 + 0xd0)) {
    case 0:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88130;
      break;
    case 1:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88040;
      break;
    case 2:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b881f8;
      break;
    case 3:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b882c8;
      break;
    case 4:
      pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88448;
      break;
    default:
      goto switchD_04b8dd60_default;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
switchD_04b8dd60_default:
    auVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::StringToUpper((Sexy *)(auVar6._0_8_ + 8),auVar6._8_8_);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_20);
    lVar3 = StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    if (lVar3 != 0) {
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      DrawAdaptiveInInscribedCircleImage(param_1,asStack_18,lVar3);
    }
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  switch(*(undefined4 *)(lVar3 + 0xd0)) {
  case 0:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87c78;
    break;
  case 1:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88410;
    break;
  case 2:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88278;
    break;
  case 3:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88470;
    break;
  case 4:
    pCVar5 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88068;
    break;
  default:
    goto switchD_04b8dc1c_default;
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar5);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,0,(*(int *)(this + 0x54) << 1) / 3,*(int *)(this + 0x50) / 3,
             *(int *)(this + 0x54) / 3);
switchD_04b8dc1c_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::DrawHeadshot(Sexy::Graphics*) */

void __thiscall UIRewardFrame::DrawHeadshot(UIRewardFrame *this,Graphics *param_1)

{
  int iVar1;
  long lVar2;
  DIniFile *this_00;
  Image *pIVar3;
  string *psVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [16];
  string asStack_28 [16];
  string asStack_18 [16];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = ___stack_chk_guard;
  if (this[0xd1] != (UIRewardFrame)0x0) {
    if (*(int *)(this + 0x110) == 0) {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88108);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar4 = extraout_x1;
    }
    else if (*(int *)(this + 0x110) == 1) {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ff0);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      psVar4 = extraout_x1_00;
    }
  }
  Sexy::StringToUpper((Sexy *)(this + 0xd8),psVar4);
  std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",asStack_28);
  lVar2 = StringHelper::ToImage(asStack_18,false);
  std::string::~string(asStack_18);
  std::string::~string(asStack_28);
  if (*(int *)(this + 300) == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString((DString *)asStack_18,*(int *)(this + 300));
    DString::operator_cast_to_string((DString *)asStack_18);
    std::string::string(asStack_28,"frame");
    iVar1 = DIniFile::getItemInt(this_00,asStack_38,asStack_28,1);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_38);
    DString::~DString((DString *)asStack_18);
    DString::DString((DString *)asStack_38,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_38);
    ::operator+((DString *)asStack_28,"_1");
    DString::operator_cast_to_string((DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
    DString::~DString((DString *)asStack_28);
    DString::~DString((DString *)asStack_38);
    lVar6 = StringHelper::ToImage(asStack_48,false);
    DString::DString((DString *)asStack_38,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_38);
    ::operator+((DString *)asStack_28,"_2");
    DString::operator_cast_to_string((DString *)asStack_18);
    DString::~DString((DString *)asStack_18);
    DString::~DString((DString *)asStack_28);
    DString::~DString((DString *)asStack_38);
    lVar5 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
  }
  if (lVar2 != 0) {
    fVar8 = (float)*(int *)(this + 0x50);
    fVar7 = (float)*(int *)(this + 0x54);
    if (lVar5 != 0) {
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      DrawAdaptiveImage(param_1,asStack_18,lVar5);
    }
    Sexy::Insets::Insets
              ((Insets *)asStack_18,(int)(fVar8 * 0.2),(int)(fVar7 * 0.2),(int)(fVar8 * 0.6),
               (int)(fVar7 * 0.6));
    DrawAdaptiveImage(param_1,asStack_18,lVar2);
    if (lVar6 != 0) {
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      DrawAdaptiveImage(param_1,asStack_18,lVar6);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRewardFrame::CreateUIRewardFrame(int, int, bool) */

void UIRewardFrame::CreateUIRewardFrame(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  UIRewardFrame *this;
  string *extraout_x0;
  size_t __n;
  undefined1 uVar5;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [12];
  int local_2c;
  long local_8;
  
  __n = (size_t)param_3;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      uVar5 = 3;
      goto LAB_04b8e2b8;
    }
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      iVar2 = AvatarChipNameMapperServerID::GetInstance();
      uVar5 = 4;
      goto LAB_04b8e2b8;
    }
    OtherServerNameMapper::GetInstance();
    cVar1 = FUN_04b8ad94(param_1);
    if (cVar1 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar1 = FUN_04b8ad84(param_1);
      if (cVar1 == '\0') {
        pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
          if (cVar1 == '\0') {
            pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
            if (cVar1 == '\0') {
              pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
              if (cVar1 == '\0') {
                pNVar4 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                if (cVar1 == '\0') {
                  pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                  if (cVar1 == '\0') {
                    pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                    if (cVar1 == '\0') {
                      if (param_1 - 0x61a9U < 999) {
                        DSingleton<HeadshotConfig>::getInstance();
                        nop();
                        DString::DString((DString *)asStack_38,param_1);
                        DString::operator_cast_to_string((DString *)asStack_38);
                        uVar5 = 0xd;
                        std::string::string(asStack_50,"plant");
                        std::string::string(asStack_48,"none");
                        DIniFile::getItem(extraout_x0,asStack_58,asStack_50);
                        thunk_FUN_05475e00(asStack_60,asStack_40);
                        std::string::~string(asStack_40);
                        std::string::~string(asStack_48);
                        nop();
                        std::string::~string(asStack_50);
                        nop();
                        std::string::~string(asStack_58);
                        DString::~DString((DString *)asStack_38);
                        goto LAB_04b8e2d0;
                      }
                      pNVar4 = (NameMapperBase *)CollectionMapper::GetInstance();
                      cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                      if (cVar1 == '\0') {
                        pNVar4 = (NameMapperBase *)CardMapper::GetInstance();
                        cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                        if (cVar1 == '\0') {
                          pNVar4 = (NameMapperBase *)RankAvatarMapper::GetInstance();
                          cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                          if (cVar1 == '\0') {
                            pNVar4 = (NameMapperBase *)ExpMapper::GetInstance();
                            cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
                            if (cVar1 == '\0') {
                              uVar5 = 5;
                              cVar1 = TrialCardManager::ContainsId(param_1);
                              if (cVar1 != '\0') {
                                iVar2 = PlantNameMapperServerID::GetInstance();
                                iVar3 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
                                TrialCardManager::GetTrialCardConfigByID(iVar3);
                                NameMapperBase::GetNameForId(iVar2);
                                FUN_05474278(asStack_60,asStack_40);
                                std::string::~string(asStack_40);
                                TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
                                this = ::operator_new(0x148);
                                UIRewardFrame(this,0x14,asStack_60,param_2,param_3);
                                SetObjectID(this,param_1);
                                iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
                                TrialCardManager::GetTrialCardConfigByID(iVar2);
                                SetLevel(this,local_2c);
                                TrialCardConfig::~TrialCardConfig((TrialCardConfig *)asStack_38);
                                MapEventItem::SetAdventurePlantLockStatus
                                          ((MapEventItem *)this,false);
                                goto LAB_04b8e2fc;
                              }
                              goto LAB_04b8e2d0;
                            }
                            iVar2 = ExpMapper::GetInstance();
                            uVar5 = 0x13;
                          }
                          else {
                            iVar2 = RankAvatarMapper::GetInstance();
                            uVar5 = 0x12;
                          }
                        }
                        else {
                          iVar2 = CardMapper::GetInstance();
                          uVar5 = 0xf;
                        }
                      }
                      else {
                        iVar2 = CollectionMapper::GetInstance();
                        uVar5 = 0xe;
                      }
                    }
                    else {
                      iVar2 = ArtifactMapper::GetInstance();
                      uVar5 = 0xc;
                    }
                  }
                  else {
                    iVar2 = PlantNewAvatarPieceMapper::GetInstance();
                    uVar5 = 0xb;
                  }
                }
                else {
                  iVar2 = PlantNewAvatarMapper::GetInstance();
                  uVar5 = 10;
                }
              }
              else {
                iVar2 = MaterialItemMapper::GetInstance();
                uVar5 = 9;
              }
            }
            else {
              iVar2 = PlantAccessoryPieceMapper::GetInstance();
              uVar5 = 8;
            }
          }
          else {
            iVar2 = PlantAccessoryInfoMapper::GetInstance();
            uVar5 = 7;
          }
        }
        else {
          iVar2 = AvatarNameMapperServerID::GetInstance();
          uVar5 = 6;
        }
        goto LAB_04b8e2b8;
      }
      std::string::append(asStack_60,"coin",__n);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      std::string::append(asStack_60,"gem",__n);
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    uVar5 = 2;
LAB_04b8e2b8:
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474278(asStack_60,asStack_38);
    std::string::~string(asStack_38);
  }
LAB_04b8e2d0:
  this = ::operator_new(0x148);
  UIRewardFrame(this,uVar5,asStack_60,param_2,param_3);
  SetObjectID(this,param_1);
LAB_04b8e2fc:
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

