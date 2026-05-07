// Class: Effect_StaticImage


/* Effect_StaticImage::SetColor(Sexy::Color const&) */

void __thiscall Effect_StaticImage::SetColor(Effect_StaticImage *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xb0) = uVar1;
  return;
}


/* Effect_StaticImage::SetScale(float) */

void __thiscall Effect_StaticImage::SetScale(Effect_StaticImage *this,float param_1)

{
  *(float *)(this + 0xbc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_StaticImage::onInitialized() */

void __thiscall Effect_StaticImage::onInitialized(Effect_StaticImage *this)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0xa8) = local_18;
  *(undefined8 *)(this + 0xb0) = uStack_10;
  this[0xb8] = (Effect_StaticImage)0x1;
  *(undefined4 *)(this + 0xbc) = 0x3f800000;
  std::string::append((string *)(this + 0xc0),"",1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_StaticImage::StaticClassInit() */

void Effect_StaticImage::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_StaticImage");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd347c,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_StaticImage::StaticGetClass() */

long * Effect_StaticImage::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_StaticImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_StaticImage::GetClass() const */

long * Effect_StaticImage::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_StaticImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_StaticImage::SetPieceName(std::string const&) */

void Effect_StaticImage::SetPieceName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0xc0);
  return;
}


/* Effect_StaticImage::~Effect_StaticImage() */

void __thiscall Effect_StaticImage::~Effect_StaticImage(Effect_StaticImage *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f800;
  std::string::~string((string *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_StaticImage::~Effect_StaticImage() */

void __thiscall Effect_StaticImage::~Effect_StaticImage(Effect_StaticImage *this)

{
  ~Effect_StaticImage(this);
  AK::FreeHook(this);
  return;
}


/* Effect_StaticImage::Effect_StaticImage() */

void __thiscall Effect_StaticImage::Effect_StaticImage(Effect_StaticImage *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f800;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Sexy::Color::Color((Color *)(this + 0xa8));
  this[0xb8] = (Effect_StaticImage)0x1;
  *(undefined4 *)(this + 0xbc) = 0x3f800000;
  Set8BytesTo0(this + 0xc0);
  return;
}


/* Effect_StaticImage::StaticNew() */

Effect_StaticImage * Effect_StaticImage::StaticNew(void)

{
  Effect_StaticImage *this;
  
  this = ::operator_new(200);
  Effect_StaticImage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_StaticImage::GetDimensions() */

void __thiscall Effect_StaticImage::GetDimensions(Effect_StaticImage *this)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::FastCurve::SetOutRange(local_10,(float)iVar1,(float)iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_StaticImage::onDraw(Sexy::Graphics*) */

void __thiscall Effect_StaticImage::onDraw(Effect_StaticImage *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  SeedPacketUtils *this_00;
  RtWeakPtr *pRVar9;
  float *pfVar10;
  ResourceInfo *pRVar11;
  long lVar12;
  SexyVector2 *pSVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  GraphicsAutoState aGStack_48 [8];
  undefined8 local_40;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0xa8));
  cVar6 = FUN_0547419c((string *)(this + 0xc0));
  if (cVar6 == '\0') {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pRVar9 = (RtWeakPtr *)
             SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xc0));
    pfVar10 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    iVar2 = *(int *)(pRVar9 + 0x2c);
    iVar3 = *(int *)(pRVar9 + 0x28);
    fVar16 = *(float *)(this + 0xbc);
    iVar4 = *(int *)(pRVar9 + 0x10);
    iVar5 = *(int *)(pRVar9 + 0x14);
    fVar14 = pfVar10[1];
    fVar15 = *pfVar10;
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar9 + 0x170);
    fVar15 = (float)(int)(fVar15 - (float)iVar3 * fVar16 * 0.5);
    fVar14 = (float)(int)(fVar14 - (float)iVar2 * fVar16 * 0.5);
    Sexy::Insets::Insets
              ((Insets *)&local_40,
               (int)(fVar15 + *(float *)(this + 0xbc) * (float)*(int *)(pRVar9 + 0x30)),
               (int)(fVar14 + *(float *)(this + 0xbc) * (float)*(int *)(pRVar9 + 0x34)),
               (int)((float)iVar3 * fVar16),(int)((float)iVar2 * fVar16));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(TRect *)&local_40,(TRect *)(pRVar9 + 0x20));
    bVar7 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar9);
    if (bVar7) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar9);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x48));
      Sexy::Insets::Insets
                ((Insets *)&local_40,
                 (int)(fVar15 + *(float *)(this + 0xbc) * (float)*(int *)(pRVar9 + 0x18)),
                 (int)(fVar14 + *(float *)(this + 0xbc) * (float)*(int *)(pRVar9 + 0x1c)),
                 (int)((float)iVar4 * fVar16),(int)((float)iVar5 * fVar16));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(TRect *)&local_40,(TRect *)(pRVar9 + 8));
    }
  }
  else {
    pRVar9 = (RtWeakPtr *)(this + 0xa0);
    puVar8 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    local_40 = *puVar8;
    pSVar13 = (SexyVector2 *)(ulong)(byte)this[0xb8];
    if (this[0xb8] == (Effect_StaticImage)0x0) {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar9);
      local_40._0_4_ = (float)local_40 + (float)(*(int *)(lVar12 + 0x38) / 2);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar9);
      uVar1 = *(int *)(lVar12 + 0x3c) / 2;
      pSVar13 = (SexyVector2 *)(ulong)uVar1;
      local_40 = CONCAT44(local_40._4_4_ + (float)(int)uVar1,(float)local_40);
    }
    Sexy::SexyTransform2D::CreateTransform
              ((SexyTransform2D *)&local_40,pSVar13,0.0,*(float *)(this + 0xbc));
    bVar7 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar9);
    if (bVar7) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar9);
      Sexy::Graphics::DrawImageMatrix(param_1,(Image *)pRVar11,aSStack_30,0.0,0.0);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

