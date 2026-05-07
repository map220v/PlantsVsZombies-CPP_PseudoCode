// Class: HotUIImage


/* HotUIImage::HotUIImage() */

void __thiscall HotUIImage::HotUIImage(HotUIImage *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  this[0x210] = (HotUIImage)0x0;
  *(undefined ***)this = &PTR_GetWidgetClass_0666bfd0;
  Sexy::Insets::Insets((Insets *)(this + 0x214));
  Set8BytesTo0(this + 0x228);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  Sexy::Color::Color((Color *)(this + 0x268));
  this[0x278] = (HotUIImage)0x0;
  return;
}


/* HotUIImage::~HotUIImage() */

void __thiscall HotUIImage::~HotUIImage(HotUIImage *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666bfd0;
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x250));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x230));
  std::string::~string((string *)(this + 0x228));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIImage::~HotUIImage() */

void __thiscall HotUIImage::~HotUIImage(HotUIImage *this)

{
  ~HotUIImage(this);
  AK::FreeHook(this);
  return;
}


/* HotUIImage::getImageAspectRatioStretchedData(UIImageDrawStyle, Sexy::RtWeakPtr<Sexy::Image>,
   float&, float&, float&, float&) */

void __thiscall
HotUIImage::getImageAspectRatioStretchedData
          (HotUIImage *this,int param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 6) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar1 = 0;
    if (*(int *)(this + 0x54) != 0) {
      iVar1 = *(int *)(lVar4 + 0x3c) / *(int *)(this + 0x54);
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar2 = 0;
    if (*(int *)(this + 0x50) != 0) {
      iVar2 = *(int *)(lVar4 + 0x38) / *(int *)(this + 0x50);
    }
    if ((float)iVar2 < (float)iVar1) goto LAB_03620664;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar1 = *(int *)(lVar4 + 0x3c);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    fVar5 = ((float)iVar1 / (float)*(int *)(lVar4 + 0x38)) * *param_4;
  }
  else {
    if (param_2 == 4) {
LAB_03620664:
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      iVar1 = *(int *)(lVar4 + 0x38);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      bVar3 = false;
      fVar5 = ((float)iVar1 / (float)*(int *)(lVar4 + 0x3c)) * *param_5;
      *param_6 = *param_6 + (*param_4 - fVar5) * 0.5;
      *param_4 = fVar5;
    }
    else {
      bVar3 = param_2 == 3;
    }
    if ((!bVar3) && (param_2 != 5)) {
      return;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar1 = *(int *)(lVar4 + 0x3c);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    fVar5 = ((float)iVar1 / (float)*(int *)(lVar4 + 0x38)) * *param_4;
    if (param_2 == 5) {
      fVar6 = (*param_5 - fVar5) + *param_7;
      goto LAB_0362064c;
    }
  }
  fVar6 = *param_7 + (*param_5 - fVar5) * 0.5;
LAB_0362064c:
  *param_7 = fVar6;
  *param_5 = fVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::StaticClassInit() */

void HotUIImage::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"HotUIImage");
    (*pcVar2)(plVar1,asStack_10,FUN_036270e0,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImage::StaticGetClass() */

long * HotUIImage::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImage::SetOverrideClipRect(Sexy::TRect<int> const&) */

void __thiscall HotUIImage::SetOverrideClipRect(HotUIImage *this,TRect *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  this[0x210] = (HotUIImage)0x1;
  *(undefined8 *)(this + 0x214) = uVar1;
  *(undefined8 *)(this + 0x21c) = uVar2;
  return;
}


/* HotUIImage::ClearOverrideClipRect() */

void __thiscall HotUIImage::ClearOverrideClipRect(HotUIImage *this)

{
  this[0x210] = (HotUIImage)0x0;
  return;
}


/* HotUIImage::preparePositionalDataForDraw(UIImageDrawInfo const&, float&, float&, float&, float&)
    */

void __thiscall
HotUIImage::preparePositionalDataForDraw
          (HotUIImage *this,UIImageDrawInfo *param_1,float *param_2,float *param_3,float *param_4,
          float *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(this + 0x54);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  *param_2 = (float)*(int *)(param_1 + 0x30) + *(float *)(this + 0x27c) * (float)iVar1;
  *param_3 = (float)iVar2 + *(float *)(this + 0x27c) * (float)iVar3;
  *param_4 = (float)iVar4;
  *param_4 = (float)iVar4 + (1.0 - *(float *)(this + 0x27c)) * (float)iVar1 * 0.5;
  *param_5 = (float)iVar5;
  *param_5 = (float)iVar5 + (1.0 - *(float *)(this + 0x27c)) * (float)iVar3 * 0.5;
  return;
}


/* HotUIImage::GetClipRect() const */

void HotUIImage::GetClipRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  if (*(char *)(in_x0 + 0x210) == '\0') {
    Sexy::WidgetContainer::GetClipRect();
    return;
  }
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x214));
  return;
}


/* HotUIImage::getImageWidthForResizeData() */

int __thiscall HotUIImage::getImageWidthForResizeData(HotUIImage *this)

{
  bool bVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  iVar2 = 0;
  if (bVar1) {
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = (int)((float)iVar2 * *(float *)(this + 0x27c));
  }
  return iVar2;
}


/* HotUIImage::getImageHeightForResizeData() */

int __thiscall HotUIImage::getImageHeightForResizeData(HotUIImage *this)

{
  bool bVar1;
  int iVar2;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  iVar2 = 0;
  if (bVar1) {
    this_00 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar2 = (int)((float)iVar2 * *(float *)(this + 0x27c));
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::drawImage(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall HotUIImage::drawImage(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  undefined4 uVar1;
  int iVar2;
  Image *pIVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)(param_2 + 0x14);
  local_8 = ___stack_chk_guard;
  if ((iVar2 == 1) || ((iVar2 != 0 && (iVar2 - 3U < 4)))) {
    local_1c = 0.0;
    preparePositionalDataForDraw(this,param_2,&local_28,&local_24,&local_20,&local_1c);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    getImageAspectRatioStretchedData(this,uVar1,aRStack_10,&local_28,&local_24,&local_20,&local_1c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (*(float *)(param_2 + 0x38) == 0.0) {
      pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::Graphics::DrawImage
                (param_1,pIVar3,(int)local_20,(int)local_1c,(int)local_28,(int)local_24);
    }
    else {
      iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::Graphics::DrawImageRotatedAndStretched
                ((Image *)param_1,iVar2,(int)local_20,(int)local_1c,(int)local_28,
                 (double)*(float *)(param_2 + 0x38),*(float *)(param_2 + 0x3c),
                 *(float *)(param_2 + 0x40),(TRect *)(ulong)(uint)(int)local_24);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else if (*(float *)(param_2 + 0x38) == 0.0) {
    pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Graphics::DrawImage(param_1,pIVar3,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c));
  }
  else {
    pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Graphics::DrawImageRotated
              (param_1,pIVar3,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),
               (double)*(float *)(param_2 + 0x38),(int)*(float *)(param_2 + 0x3c),
               (int)*(float *)(param_2 + 0x40),(TRect *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::drawImageMirrored(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::drawImageMirrored(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  int iVar1;
  undefined4 uVar2;
  Image *pIVar3;
  long lVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  Insets aIStack_28 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_2 + 0x14);
  local_8 = ___stack_chk_guard;
  if ((iVar1 == 1) || ((iVar1 != 0 && (iVar1 - 3U < 4)))) {
    local_2c = 0.0;
    preparePositionalDataForDraw(this,param_2,&local_38,&local_34,&local_30,&local_2c);
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_2);
    getImageAspectRatioStretchedData(this,uVar2,aRStack_18,&local_38,&local_34,&local_30,&local_2c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar1 = *(int *)(lVar4 + 0x38);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Insets::Insets(aIStack_28,0,0,iVar1,*(int *)(lVar4 + 0x3c));
    pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Insets::Insets
              ((Insets *)aRStack_18,(int)local_30,(int)local_2c,(int)local_38,(int)local_34);
    Sexy::Graphics::DrawImageMirror(param_1,pIVar3,(TRect *)aRStack_18,(TRect *)aIStack_28,true);
  }
  else {
    pIVar3 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Graphics::DrawImageMirror
              (param_1,pIVar3,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::drawImageVerticalMirrored(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::drawImageVerticalMirrored(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  int iVar1;
  Image *pIVar2;
  Transform aTStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(param_2 + 0x14);
  local_8 = ___stack_chk_guard;
  if ((iVar1 != 1) && ((iVar1 == 0 || (3 < iVar1 - 3U)))) {
    Sexy::Transform::Transform(aTStack_50);
    Sexy::Transform::Scale(aTStack_50,*(float *)(this + 0x27c),-*(float *)(this + 0x27c));
    pIVar2 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Sexy::Graphics::DrawImageTransform
              (param_1,pIVar2,aTStack_50,(float)*(int *)(param_2 + 0x28),
               (float)*(int *)(param_2 + 0x2c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::drawImageTiled(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::drawImageTiled(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),
             *(int *)(this + 0x50) + *(int *)(param_2 + 0x30),
             *(int *)(this + 0x54) + *(int *)(param_2 + 0x34));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::draw9SliceImage(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::draw9SliceImage(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  ulong uVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),
             *(int *)(this + 0x50) + *(int *)(param_2 + 0x30),
             *(int *)(this + 0x54) + *(int *)(param_2 + 0x34));
  puVar12 = *(undefined8 **)(param_2 + 8);
  if (puVar12 == (undefined8 *)0x0) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Draw9SliceImage(param_1,aIStack_18,uVar3);
  }
  else {
    uVar1 = FUN_03626eec(*puVar12,puVar12[1]);
    if (8 < uVar1) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,0);
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,1);
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,2);
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,3);
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,4);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,5);
      uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,6);
      uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,7);
      uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar12,8);
      uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      Draw9Slice(param_1,aIStack_18,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::draw3SliceHorizontalImage(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::draw3SliceHorizontalImage(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  int iVar1;
  ulong uVar2;
  SalesProgressBar *pSVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  Insets aIStack_28 [12];
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),
             *(int *)(this + 0x50) + *(int *)(param_2 + 0x30),0);
  puVar7 = *(undefined8 **)(param_2 + 8);
  if (puVar7 != (undefined8 *)0x0) {
    uVar8 = *puVar7;
    uVar2 = FUN_03626eec(uVar8,puVar7[1]);
    if (2 < uVar2) {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(uVar8,0);
      pSVar3 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      local_1c = SalesProgressBar::GetCurrentLevel(pSVar3);
      iVar1 = *(int *)(param_2 + 0x14);
      goto joined_r0x03627d50;
    }
  }
  pSVar3 = (SalesProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  local_1c = SalesProgressBar::GetCurrentLevel(pSVar3);
  iVar1 = *(int *)(param_2 + 0x14);
joined_r0x03627d50:
  if (iVar1 - 3U < 4) {
    local_1c = *(int *)(this + 0x54) + *(int *)(param_2 + 0x34);
  }
  else if (iVar1 == 1) {
    local_1c = *(int *)(this + 0x54) + *(int *)(param_2 + 0x34);
  }
  puVar7 = *(undefined8 **)(param_2 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Draw3SliceImage(param_1,aIStack_18,uVar8);
  }
  else {
    uVar2 = FUN_03626eec(*puVar7,puVar7[1]);
    if (2 < uVar2) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar7,0);
      uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar7,1);
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar7,2);
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      Draw3SliceImage(param_1,aIStack_18,uVar8,uVar5,uVar6,0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::draw3SliceVerticalImage(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::draw3SliceVerticalImage(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  LotteryResultProgressBar *pLVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  Image *pIVar6;
  Image *pIVar7;
  Image *pIVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  Insets aIStack_28 [8];
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(param_2 + 0x28),*(int *)(param_2 + 0x2c),0,
             *(int *)(this + 0x54) + *(int *)(param_2 + 0x34));
  puVar9 = *(undefined8 **)(param_2 + 8);
  if (puVar9 != (undefined8 *)0x0) {
    uVar10 = *puVar9;
    uVar3 = FUN_03626eec(uVar10,puVar9[1]);
    if (2 < uVar3) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(uVar10,0);
      pLVar4 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar9,1);
      pLVar4 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar9,2);
      pLVar4 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      local_20 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
      local_20 = iVar1 + iVar2 + local_20;
      iVar1 = *(int *)(param_2 + 0x14);
      goto joined_r0x03627f54;
    }
  }
  pLVar4 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  local_20 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  iVar1 = *(int *)(param_2 + 0x14);
joined_r0x03627f54:
  if (iVar1 - 3U < 4) {
    local_20 = *(int *)(this + 0x50) + *(int *)(param_2 + 0x30);
  }
  else if (iVar1 == 1) {
    local_20 = *(int *)(this + 0x50) + *(int *)(param_2 + 0x30);
  }
  puVar9 = *(undefined8 **)(param_2 + 8);
  if (puVar9 == (undefined8 *)0x0) {
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Draw3SliceImageVertical(param_1,aIStack_18,uVar10);
  }
  else {
    uVar10 = *puVar9;
    uVar3 = FUN_03626eec(uVar10,puVar9[1]);
    if (2 < uVar3) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(uVar10,0);
      pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar9,1);
      pIVar7 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03626ef8(*puVar9,2);
      pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      Draw3SliceImageVertical(param_1,(TRect *)aIStack_28,pIVar6,pIVar7,pIVar8,false);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HotUIImage::drawImageHelper(Sexy::Graphics*, UIImageDrawInfo const&) */

void __thiscall
HotUIImage::drawImageHelper(HotUIImage *this,Graphics *param_1,UIImageDrawInfo *param_2)

{
  switch(*(undefined4 *)(param_2 + 0x10)) {
  case 1:
    drawImageMirrored(this,param_1,param_2);
    return;
  case 2:
    drawImageVerticalMirrored(this,param_1,param_2);
    return;
  case 3:
    drawImageTiled(this,param_1,param_2);
    return;
  case 4:
    draw9SliceImage(this,param_1,param_2);
    return;
  case 5:
    draw3SliceHorizontalImage(this,param_1,param_2);
    return;
  case 6:
    draw3SliceVerticalImage(this,param_1,param_2);
    return;
  default:
    drawImage(this,param_1,param_2);
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::SetImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall HotUIImage::SetImage(HotUIImage *this,RtWeakPtr *param_2)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  HotUIZPSMeterProperties *pHVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if ((*(int *)(pHVar4 + 0x20) == 2) || (*(int *)(pHVar4 + 0x30) == 2)) {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x248);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar2 == '\0') {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
      if (!bVar3) goto LAB_036280dc;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = *(int *)(lVar5 + 0x38);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      if (iVar1 == *(int *)(lVar5 + 0x38)) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar1 = *(int *)(lVar5 + 0x3c);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        if (iVar1 == *(int *)(lVar5 + 0x3c)) {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
          *(undefined4 *)(this + 0x27c) = 0x3f800000;
          Sexy::Color::Color((Color *)&local_18,1);
          *(undefined8 *)(this + 0x268) = local_18;
          *(undefined8 *)(this + 0x270) = uStack_10;
          this[0x278] = (HotUIImage)0x0;
          goto LAB_0362810c;
        }
      }
    }
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2)
    ;
    *(undefined4 *)(this + 0x27c) = 0x3f800000;
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x268) = local_18;
    *(undefined8 *)(this + 0x270) = uStack_10;
    this[0x278] = (HotUIImage)0x0;
    HotUIWidget::MarkLayoutDirty((HotUIWidget *)this);
  }
  else {
LAB_036280dc:
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x248),param_2);
    *(undefined4 *)(this + 0x27c) = 0x3f800000;
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x268) = local_18;
    *(undefined8 *)(this + 0x270) = uStack_10;
    this[0x278] = (HotUIImage)0x0;
  }
LAB_0362810c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::onInitializeWidget() */

void __thiscall HotUIImage::onInitializeWidget(HotUIImage *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x228),___stack_chk_guard);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  SetImage(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImage::onProcessStringReplaceMap(std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUIImage::onProcessStringReplaceMap(HotUIImage *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x130),param_1);
  thunk_FUN_05475e00(this + 0x228,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::drawInternal(Sexy::Graphics*) */

void __thiscall HotUIImage::drawInternal(HotUIImage *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  HotUIZPSMeterProperties *pHVar2;
  DynamicPadding *extraout_x1;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined1 auStack_60 [16];
  RtWeakPtr aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x248);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)(pHVar2 + 0x150),extraout_x1);
    if (*(float *)(pHVar2 + 400) == 0.0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)this_00);
      UIImageDrawInfo::UIImageDrawInfo
                ((UIImageDrawInfo *)aRStack_50,aRStack_68,*(undefined4 *)(pHVar2 + 0x128),
                 *(undefined4 *)(pHVar2 + 300),auStack_60);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)this_00);
                    /* WARNING: Load size is inaccurate */
      UIImageDrawInfo::UIImageDrawInfo
                (*(UIImageDrawInfo **)(pHVar2 + 400),*(undefined4 *)(pHVar2 + 0x194),
                 *(undefined4 *)(pHVar2 + 0x198),aRStack_50,aRStack_68,
                 *(undefined4 *)(pHVar2 + 0x128),*(undefined4 *)(pHVar2 + 300),auStack_60);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    drawImageHelper(this,param_1,(UIImageDrawInfo *)aRStack_50);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::getContentBounds() */

void HotUIImage::getContentBounds(void)

{
  int iVar1;
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar2;
  int *piVar3;
  SalesProgressBar *this;
  LotteryResultProgressBar *this_00;
  int *in_x8;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  if (*(int *)(pHVar2 + 0x20) == 2) {
    local_c = 0;
    piVar3 = eastl::min_alt<int>(&local_c,in_x8);
    *in_x8 = *piVar3;
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x248));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    local_c = (int)((float)iVar1 * *(float *)(in_x0 + 0x27c));
    piVar3 = eastl::max_alt<int>(&local_c,in_x8);
    in_x8[2] = *piVar3;
  }
  if (*(int *)(pHVar2 + 0x30) == 2) {
    local_c = 0;
    piVar3 = eastl::min_alt<int>(&local_c,in_x8 + 1);
    in_x8[1] = *piVar3;
    this = (SalesProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x248));
    iVar1 = SalesProgressBar::GetCurrentLevel(this);
    local_c = (int)((float)iVar1 * *(float *)(in_x0 + 0x27c));
    piVar3 = eastl::max_alt<int>(&local_c,in_x8 + 3);
    in_x8[3] = *piVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImage::StaticNew() */

HotUIImage * HotUIImage::StaticNew(void)

{
  HotUIImage *this;
  
  this = ::operator_new(0x280);
  HotUIImage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImage::onDraw(Sexy::Graphics*) */

void __thiscall HotUIImage::onDraw(HotUIImage *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x268));
  if (this[0x278] == (HotUIImage)0x0) {
    drawInternal(this,param_1);
  }
  else {
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06aa95a8);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      drawInternal(this,param_1);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImage::SetImageColor(Sexy::Color) */

void __thiscall HotUIImage::SetImageColor(HotUIImage *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x268) = *param_2;
  *(undefined8 *)(this + 0x270) = uVar1;
  return;
}


/* HotUIImage::GetImageColor() */

Insets * HotUIImage::GetImageColor(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x268));
  return in_x8;
}

