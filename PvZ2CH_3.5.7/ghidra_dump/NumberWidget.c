// Class: NumberWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NumberWidget::NumberWidget() */

void __thiscall NumberWidget::NumberWidget(NumberWidget *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06975690;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  std::string::string((string *)(this + 0xe8),"IMAGE_UI_ADS_NUM");
  nop();
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::Color::Color((Color *)(this + 0xf8),1);
  *(undefined4 *)(this + 0x108) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x110) = 0xff;
  *(undefined4 *)(this + 0x114) = 0xff;
  *(undefined4 *)(this + 0x10c) = 1;
  *(undefined4 *)(this + 0x118) = 0xbf800000;
  *(undefined4 *)(this + 0x11c) = 0xbf800000;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NumberWidget::~NumberWidget() */

void __thiscall NumberWidget::~NumberWidget(NumberWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06975690;
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NumberWidget::~NumberWidget() */

void __thiscall NumberWidget::~NumberWidget(NumberWidget *this)

{
  ~NumberWidget(this);
  AK::FreeHook(this);
  return;
}


/* NumberWidget::SetFontMode(Sexy::PrimeTypeface*, Sexy::Color) */

void __thiscall NumberWidget::SetFontMode(NumberWidget *this,undefined8 param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(this + 0xf0) = param_1;
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(undefined8 *)(this + 0x100) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NumberWidget::SetFontMode(PrimeText_PotentialTypeface*, Sexy::Color) */

void __thiscall
NumberWidget::SetFontMode(NumberWidget *this,PrimeText_PotentialTypeface *param_1,Insets *param_3)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = PrimeText_PotentialTypeface::Typeface(param_1);
  Sexy::Insets::Insets(aIStack_18,param_3);
  SetFontMode(this,uVar1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NumberWidget::StartFade(int, int, float) */

void __thiscall NumberWidget::StartFade(NumberWidget *this,int param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x110) = param_1;
  *(int *)(this + 0x114) = param_2;
  uVar1 = PVZ_T();
  *(float *)(this + 0x11c) = param_3;
  *(undefined4 *)(this + 0x118) = uVar1;
  return;
}


/* NumberWidget::Update() */

void __thiscall NumberWidget::Update(NumberWidget *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar3 = *(int *)(this + 0xd4);
  if (*(int *)(this + 0xd8) != iVar3) {
    iVar4 = (int)((float)*(int *)(this + 0xd8) + *(float *)(this + 0xdc));
    fVar5 = (float)Sexy::SexyMath::Fabs(*(float *)(this + 0xdc));
    uVar1 = iVar3 - iVar4;
    uVar2 = (int)uVar1 >> 0x1f;
    if (fVar5 <= (float)(int)((uVar1 ^ uVar2) - uVar2)) {
      iVar3 = iVar4;
    }
    *(int *)(this + 0xd8) = iVar3;
  }
  fVar5 = *(float *)(this + 0x118);
  if (0.0 < fVar5) {
    fVar7 = *(float *)(this + 0x11c);
    uVar6 = PVZ_T();
    iVar3 = CurveLerp<int>(fVar5,fVar5 + fVar7,uVar6,this + 0x110,this + 0x114,3);
    *(int *)(this + 0x104) = iVar3;
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x11c) + *(float *)(this + 0x118) <= fVar5) {
      *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x114);
      *(undefined4 *)(this + 0x118) = 0xbf800000;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NumberWidget::SetNumber(int, bool) */

void __thiscall NumberWidget::SetNumber(NumberWidget *this,int param_1,bool param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  if (!param_2) {
    *(int *)(this + 0xd8) = param_1;
    goto LAB_04ba293c;
  }
  iVar1 = *(int *)(this + 0xd8);
  fVar3 = (float)(param_1 - iVar1) * _FUN_04ba2978;
  if (iVar1 < param_1) {
    uVar4 = 0x3f800000;
    if (1.0 <= fVar3) goto LAB_04ba296c;
LAB_04ba28e8:
    *(undefined4 *)(this + 0xdc) = uVar4;
  }
  else {
    uVar4 = 0xbf800000;
    if ((-1.0 < fVar3) && (param_1 < iVar1)) goto LAB_04ba28e8;
LAB_04ba296c:
    *(float *)(this + 0xdc) = fVar3;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_28 = StringHelper::GetDigits(*(int *)(this + 0xd8),(vector *)avStack_20);
  local_24 = StringHelper::GetDigits(*(int *)(this + 0xd4),(vector *)avStack_20);
  piVar2 = eastl::max_alt<int>(&local_28,&local_24);
  *(int *)(this + 0x10c) = *piVar2;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
LAB_04ba293c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NumberWidget::DrawImageNumber(Sexy::Graphics*) */

void __thiscall NumberWidget::DrawImageNumber(NumberWidget *this,Graphics *param_1)

{
  string *psVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SalesProgressBar *pSVar10;
  Image *pIVar11;
  int *piVar12;
  undefined8 uVar13;
  char *pcVar14;
  int iVar15;
  float fVar16;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_190);
  iVar6 = 0;
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  if ((*(uint *)(this + 0x108) & 1) != 0) {
    iVar6 = *(int *)(this + 0x10c);
  }
  iVar5 = StringHelper::GetDigits(*(int *)(this + 0xd8),(vector *)&local_190);
  if (iVar5 < iVar6) {
    do {
      iVar6 = iVar6 + -1;
      local_1a0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_190);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_198,(__normal_iterator *)&local_1a0);
      local_1a8 = local_1a8 & 0xffffffff00000000;
      std::vector<int,std::allocator<int>>::insert
                ((vector<int,std::allocator<int>> *)&local_190,local_198,
                 (generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1a8);
    } while (iVar6 != iVar5);
  }
  psVar1 = (string *)(this + 0xe8);
  std::operator+(psVar1,"0");
  pSVar10 = (SalesProgressBar *)StringHelper::ToImage((string *)&local_198,true);
  std::string::~string((string *)&local_198);
  iVar5 = *(int *)(this + 0x54);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar10);
  uVar2 = *(uint *)(this + 0x108) >> 1 & 1;
  iVar7 = (int)(((float)iVar5 / (float)iVar6) * (float)iVar7);
  iVar6 = FUN_04ba1df0(local_190,local_188);
  iVar6 = uVar2 + iVar6;
  switch(*(undefined4 *)(this + 0xe0)) {
  case 1:
  case 4:
    iVar6 = *(int *)(this + 0x50) - iVar7 * iVar6;
    break;
  case 2:
  case 5:
    iVar6 = (*(int *)(this + 0x50) - iVar7 * iVar6) / 2;
    break;
  default:
    iVar6 = 0;
  }
  iVar15 = iVar6;
  if (uVar2 != 0) {
    if (*(int *)(this + 0xd8) < 0) {
      pcVar14 = "MINUS";
    }
    else {
      pcVar14 = "ADD";
    }
    std::operator+(psVar1,pcVar14);
    pIVar11 = (Image *)StringHelper::ToImage((string *)&local_198,true);
    std::string::~string((string *)&local_198);
    iVar15 = iVar6 + iVar7;
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar6,0,iVar7,iVar5);
  }
  local_1a8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_190);
  local_1a0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_190);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_1a8,(__normal_iterator *)&local_1a0), bVar3)
  {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a8);
    iVar6 = *piVar12;
    std::string::string((string *)&local_198,"");
    FUN_05462980(auStack_178,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_198);
    std::string::~string((string *)&local_198);
    nop();
    uVar13 = FUN_0545ec84(auStack_168,psVar1);
    FUN_0546065c(uVar13,iVar6);
    FUN_05462824((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_198,auStack_178);
    pSVar10 = (SalesProgressBar *)StringHelper::ToImage((string *)&local_198,true);
    std::string::~string((string *)&local_198);
    if (iVar6 == 1) {
      iVar6 = *(int *)(this + 0x54);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar10);
      fVar16 = ((float)iVar6 / (float)iVar8) * (float)iVar9;
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pSVar10,(int)((float)iVar15 + ((float)iVar7 - fVar16) * 0.5),0,
                 (int)fVar16,iVar5);
    }
    else {
      Sexy::Graphics::DrawImage(param_1,(Image *)pSVar10,iVar15,0,iVar7,iVar5);
    }
    iVar15 = iVar15 + iVar7;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_1a8);
  }
  FUN_054617bc(auStack_178);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NumberWidget::Draw(Sexy::Graphics*) */

void __thiscall NumberWidget::Draw(NumberWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0xf8));
  if (*(long *)(this + 0xf0) == 0) {
    DrawImageNumber(this,param_1);
  }
  else {
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = *(undefined8 *)(this + 0xf0);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aIStack_18,*(undefined4 *)(this + 0xe0),1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

