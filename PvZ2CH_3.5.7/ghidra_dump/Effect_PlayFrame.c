// Class: Effect_PlayFrame


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::onInitialized() */

void __thiscall Effect_PlayFrame::onInitialized(Effect_PlayFrame *this)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  lStack_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0x3f800000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_38,0.0,0.0);
  *(undefined8 *)(this + 0xdc) = uStack_38;
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&uStack_30,true);
  *(undefined8 *)(this + 0xe4) = uStack_30;
  *(undefined8 *)(this + 0xec) = uStack_28;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x104) = uStack_10;
  *(undefined8 *)(this + 0xf4) = uStack_20;
  *(undefined8 *)(this + 0xfc) = uStack_18;
  this[0x108] = (Effect_PlayFrame)0x1;
  if (lStack_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PlayFrame::SetFrameStopDelegate(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
Effect_PlayFrame::SetFrameStopDelegate(Effect_PlayFrame *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x128),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::StaticClassInit() */

void Effect_PlayFrame::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FrameRange");
    (*pcVar3)(plVar2,asStack_10,FUN_047c55ec,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Effect_PlayFrame");
    (*pcVar3)(plVar2,asStack_10,FUN_047c6640,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PlayFrame::StaticGetClass() */

long * Effect_PlayFrame::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_PlayFrame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PlayFrame::GetClass() const */

long * Effect_PlayFrame::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_PlayFrame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PlayFrame::UpdateSpriteInstSubFrame(Sexy::PASpriteInst*, float, bool) */

void __thiscall
Effect_PlayFrame::UpdateSpriteInstSubFrame
          (Effect_PlayFrame *this,PASpriteInst *param_1,float param_2,bool param_3)

{
  int iVar1;
  PASpriteInst PVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  
  fVar12 = *(float *)(param_1 + 0xc);
  lVar10 = *(long *)(param_1 + 0x18);
  iVar8 = (int)fVar12;
  uVar11 = *(undefined8 *)(lVar10 + 0x10);
  puVar4 = (undefined8 *)FUN_047c54b8(uVar11,(long)iVar8);
  if (*(char *)(puVar4 + 3) != '\0') {
    return;
  }
  if (param_3) {
    fVar12 = param_2 + fVar12;
    uVar7 = *(undefined8 *)(lVar10 + 0x18);
    iVar9 = (int)fVar12;
    *(float *)(param_1 + 0xc) = fVar12;
    iVar3 = FUN_047c54e4(uVar11,uVar7);
    if (iVar3 <= iVar9) {
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = iVar9 / iVar3;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      fVar12 = fVar12 - (float)(iVar1 * iVar3);
      *(float *)(param_1 + 0xc) = fVar12;
      PVar2 = (PASpriteInst)(iVar8 != (int)fVar12);
      param_1[0xb] = PVar2;
      goto joined_r0x047c5ac8;
    }
  }
  else {
    iVar9 = (int)(fVar12 - param_2);
    *(float *)(param_1 + 0xc) = fVar12 - param_2;
    if (iVar9 < 0) {
      uVar7 = *(undefined8 *)(lVar10 + 0x18);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      iVar3 = FUN_047c54e4(uVar11,uVar7);
      iVar9 = (int)(float)(iVar3 + -1);
      *(float *)(param_1 + 0xc) = (float)(iVar3 + -1);
    }
  }
  PVar2 = (PASpriteInst)(iVar8 != iVar9);
  param_1[0xb] = PVar2;
joined_r0x047c5ac8:
  if (((bool)PVar2) && (0 < *(short *)(param_1 + 8))) {
    param_1[0xb] = (PASpriteInst)0x0;
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
    *(float *)(param_1 + 0xc) = (float)iVar8;
  }
  else {
    uVar11 = *puVar4;
    iVar8 = FUN_047c54a0(uVar11,puVar4[1]);
    lVar10 = 0;
    while (lVar6 = lVar10 + 1, (int)lVar10 < iVar8) {
      piVar5 = (int *)FUN_047c54c8(uVar11,lVar10);
      piVar5 = (int *)FUN_047c54d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),(long)*piVar5);
      lVar10 = lVar6;
      if (*(char *)((long)piVar5 + 6) != '\0') {
        lVar6 = FUN_047c54dc(*(undefined8 *)(param_1 + 0x48),(long)*piVar5);
        UpdateSpriteInstSubFrame(this,*(PASpriteInst **)(lVar6 + 8),param_2,param_3);
        uVar11 = *puVar4;
        iVar8 = FUN_047c54a0(uVar11,puVar4[1]);
      }
    }
  }
  return;
}


/* Effect_PlayFrame::GetPAM() */

void __thiscall Effect_PlayFrame::GetPAM(Effect_PlayFrame *this)

{
  long lVar1;
  
  lVar1 = UIWidget::GetAtlasImage((UIWidget *)this);
  FUN_047c5478(*(undefined8 *)(lVar1 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::GetLabelFrameNum(std::string const&) */

void Effect_PlayFrame::GetLabelFrameNum(string *param_1)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  PASpriteDef *this;
  int local_18;
  int local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetPAM((Effect_PlayFrame *)param_1);
  this = *(PASpriteDef **)(*(long *)(lVar2 + 0x50) + 0x18);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x110));
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  Sexy::PASpriteDef::GetLabelFrameRange(this,psVar3,&local_18,&local_14);
  if (local_18 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_14 - local_18;
    if (local_14 < local_18) {
      iVar1 = 0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::UpdateSpriteInstMainFrame(float) */

void __thiscall Effect_PlayFrame::UpdateSpriteInstMainFrame(Effect_PlayFrame *this,float param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  lVar4 = GetPAM(this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
  bVar1 = (bool)FUN_047c547c(*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc));
  if (bVar1 == false) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    iVar3 = *(int *)(lVar5 + 0xc);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    lVar4 = *(long *)(lVar4 + 0x50);
    fVar11 = *(float *)(lVar4 + 0xc);
    iVar9 = (int)fVar11;
    puVar6 = (undefined8 *)FUN_047c54b8(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10),(long)iVar9)
    ;
    if (*(char *)(puVar6 + 3) == '\0') {
      fVar11 = fVar11 - param_1;
      iVar2 = (int)fVar11;
      *(float *)(lVar4 + 0xc) = fVar11;
      if (iVar3 <= iVar2) goto LAB_047c5dc8;
      goto LAB_047c5d2c;
    }
  }
  else {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    lVar4 = *(long *)(lVar4 + 0x50);
    iVar3 = *(int *)(lVar5 + 0xc);
    fVar11 = *(float *)(lVar4 + 0xc);
    iVar9 = (int)fVar11;
    puVar6 = (undefined8 *)FUN_047c54b8(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10),(long)iVar9)
    ;
    if (*(char *)(puVar6 + 3) == '\0') {
      fVar11 = param_1 + fVar11;
      iVar2 = (int)fVar11;
      *(float *)(lVar4 + 0xc) = fVar11;
      if (iVar2 <= iVar3) {
LAB_047c5dc8:
        *(bool *)(lVar4 + 0xb) = iVar9 != iVar2;
        if ((iVar9 != iVar2) && (0 < *(short *)(lVar4 + 8))) {
          *(undefined1 *)(lVar4 + 0xb) = 0;
          *(short *)(lVar4 + 8) = *(short *)(lVar4 + 8) + -1;
          *(float *)(lVar4 + 0xc) = (float)iVar9;
        }
        else {
          uVar10 = *puVar6;
          lVar5 = 0;
          iVar3 = FUN_047c54a0(uVar10,puVar6[1]);
          while ((int)lVar5 < iVar3) {
            piVar7 = (int *)FUN_047c54c8(uVar10,lVar5);
            piVar7 = (int *)FUN_047c54d0(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x78),
                                         (long)*piVar7);
            if (*(char *)((long)piVar7 + 6) == '\0') {
              lVar5 = lVar5 + 1;
            }
            else {
              lVar5 = lVar5 + 1;
              lVar8 = FUN_047c54dc(*(undefined8 *)(lVar4 + 0x48),(long)*piVar7);
              UpdateSpriteInstSubFrame(this,*(PASpriteInst **)(lVar8 + 8),param_1,bVar1);
              uVar10 = *puVar6;
              iVar3 = FUN_047c54a0(uVar10,puVar6[1]);
            }
          }
        }
        goto LAB_047c5d3c;
      }
LAB_047c5d2c:
      *(float *)(lVar4 + 0xc) = (float)iVar3;
    }
  }
  this[0x170] = (Effect_PlayFrame)0x1;
LAB_047c5d3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PlayFrame::Effect_PlayFrame() */

void __thiscall Effect_PlayFrame::Effect_PlayFrame(Effect_PlayFrame *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_068e45a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x128));
  this[0x170] = (Effect_PlayFrame)0x0;
  *(undefined4 *)(this + 0x174) = 0x3f800000;
  return;
}


/* Effect_PlayFrame::StaticNew() */

Effect_PlayFrame * Effect_PlayFrame::StaticNew(void)

{
  Effect_PlayFrame *this;
  
  this = ::operator_new(0x178);
  Effect_PlayFrame(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::UpdatePopAnim() */

void __thiscall Effect_PlayFrame::UpdatePopAnim(Effect_PlayFrame *this)

{
  char cVar1;
  long lVar2;
  PopAnim *this_00;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_18 [2];
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::
          empty((vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *
                )(this + 0x110));
  if (cVar1 == '\0') {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x110));
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
    cVar1 = FUN_047c5488(*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
    if (cVar1 != '\0') {
      this_00 = (PopAnim *)GetPAM(this);
      PVZ_T();
      fVar5 = (float)PVZ_Dt();
      std::string::string((string *)&local_10,"");
      cVar1 = Sexy::PopAnim::SetupSpriteInst(this_00,(string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      if (cVar1 != '\0') {
        lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
        cVar1 = FUN_047c53dc(*(undefined1 *)(lVar2 + 0x34));
        if ((cVar1 == '\0') && (this_00[0xa3] == (PopAnim)0x0)) {
          fVar5 = (float)*(int *)(this_00 + 0x30) * *(float *)(this + 0x174) * fVar5;
          iVar4 = (int)fVar5;
          if (this_00[0xa2] != (PopAnim)0x0) {
            if (0 < iVar4) {
              do {
                iVar4 = iVar4 + -1;
                UpdateSpriteInstMainFrame(this,1.0);
                Sexy::PopAnim::PrepSpriteInstFrame
                          ((PASpriteInst *)this_00,*(PAObjectPos **)(this_00 + 0x50));
                if (this_00[0xa2] == (PopAnim)0x0) goto LAB_047c61c0;
              } while (iVar4 != 0);
            }
            if (fVar5 - (float)(int)fVar5 < 1.0) {
              UpdateSpriteInstMainFrame(this,fVar5 - (float)(int)fVar5);
              Sexy::PopAnim::PrepSpriteInstFrame
                        ((PASpriteInst *)this_00,*(PAObjectPos **)(this_00 + 0x50));
            }
          }
LAB_047c61c0:
          fVar5 = *(float *)(this_00 + 0x68);
          if (fVar5 <= 0.0) {
            fVar6 = *(float *)(this_00 + 100);
            fVar5 = (float)PVZ_Dt();
            local_10 = CONCAT44(local_10._4_4_,fVar5 + fVar6);
            pfVar3 = eastl::min_alt<float>((float *)&local_10,(float *)(this_00 + 0x60));
            *(float *)(this_00 + 100) = *pfVar3;
          }
          else {
            local_18[0] = (float)PVZ_Dt();
            local_18[0] = fVar5 - local_18[0];
            local_10 = local_10 & 0xffffffff00000000;
            pfVar3 = eastl::max_alt<float>(local_18,(float *)&local_10);
            *(float *)(this_00 + 0x68) = *pfVar3;
          }
          Sexy::PopAnim::UpdateTransforms
                    (this_00,*(PASpriteInst **)(this_00 + 0x50),(PATransform *)0x0,
                     (Color *)(this_00 + 0x90));
          this_00[0xa1] = (PopAnim)0x0;
        }
      }
      goto LAB_047c609c;
    }
  }
  this[0x170] = (Effect_PlayFrame)0x1;
LAB_047c609c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::PreparePlay() */

void __thiscall Effect_PlayFrame::PreparePlay(Effect_PlayFrame *this)

{
  vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  PopAnimRig *this_01;
  undefined8 uVar4;
  long lVar5;
  string *psVar6;
  PASpriteDef *this_02;
  int iVar7;
  code *pcVar8;
  float fVar9;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
            (this + 0x110);
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::
          empty(this_00);
  if (cVar3 != '\0') goto LAB_047c62b0;
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  fVar9 = (float)PopAnimRig::GetCurrentFrameInAnimation(this_01);
  cVar3 = PopAnimRig::IsPlayingAnything(this_01);
  if (cVar3 == '\0') {
LAB_047c6308:
    pcVar8 = *(code **)(*(long *)this_01 + 0x78);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    (*pcVar8)(this_01,uVar4,0,0,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  }
  else {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_00);
    psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
    cVar3 = PopAnimRig::IsAnimStringActive(this_01,psVar6);
    if (cVar3 == '\0') goto LAB_047c6308;
  }
  lVar5 = GetPAM(this);
  this_02 = *(PASpriteDef **)(*(long *)(lVar5 + 0x50) + 0x18);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
  Sexy::PASpriteDef::GetLabelFrameRange(this_02,psVar6,&local_2c,(int *)&local_28);
  if ((-1 < local_2c) && (-1 < (int)local_28)) {
    iVar7 = (int)local_28 + -1;
    local_28 = CONCAT44(local_28._4_4_,iVar7);
    if (local_2c < iVar7) {
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
      iVar7 = *(int *)(lVar5 + 8) + local_2c;
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
      if (*(int *)(lVar5 + 8) < 0) {
        iVar7 = (int)fVar9;
        PopAnimRig::SetCurrentFrameInAnimation(this_01,fVar9);
      }
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
      iVar1 = local_2c + *(int *)(lVar5 + 0xc);
      iVar2 = local_2c;
      if ((local_2c <= iVar7) && (iVar2 = iVar7, (int)local_28 < iVar7)) {
        iVar2 = (int)local_28;
      }
      iVar7 = local_2c;
      if ((local_2c <= iVar1) && (iVar7 = iVar1, (int)local_28 < iVar1)) {
        iVar7 = (int)local_28;
      }
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
      *(int *)(lVar5 + 8) = iVar2;
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
      *(int *)(lVar5 + 0xc) = iVar7;
      PopAnimRig::SetCurrentFrameInAnimation(this_01,(float)iVar2);
      goto LAB_047c62b0;
    }
  }
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
  lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_20);
  *(undefined4 *)(lVar5 + 0xc) = 0xffffffff;
LAB_047c62b0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Effect_PlayFrame::~Effect_PlayFrame() */

void __thiscall Effect_PlayFrame::~Effect_PlayFrame(Effect_PlayFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_068e45a0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x128));
  std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::~vector
            ((vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
             (this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_PlayFrame::~Effect_PlayFrame() */

void __thiscall Effect_PlayFrame::~Effect_PlayFrame(Effect_PlayFrame *this)

{
  ~Effect_PlayFrame(this);
  AK::FreeHook(this);
  return;
}


/* Effect_PlayFrame::PlayFrames(std::vector<Effect_PlayFrame::FrameRange,
   std::allocator<Effect_PlayFrame::FrameRange> >&) */

void __thiscall Effect_PlayFrame::PlayFrames(Effect_PlayFrame *this,vector *param_1)

{
  std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::operator=
            ((vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
             (this + 0x110),param_1);
  PreparePlay(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::PlayFrame(std::string const&, int, int) */

void __thiscall
Effect_PlayFrame::PlayFrame(Effect_PlayFrame *this,string *param_1,int param_2,int param_3)

{
  FrameRange aFStack_30 [8];
  int local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  FrameRange::FrameRange(aFStack_30);
  thunk_FUN_05475e00(aFStack_30,param_1);
  local_28 = param_2;
  local_24 = param_3;
  std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::push_back
            ((vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
             avStack_20,aFStack_30);
  PlayFrames(this,(vector *)avStack_20);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aFStack_30);
  std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::~vector
            ((vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PlayFrame::onUpdate() */

void __thiscall Effect_PlayFrame::onUpdate(Effect_PlayFrame *this)

{
  vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *this_00;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>> *)
            (this + 0x110);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::
          empty(this_00);
  if (cVar1 == '\0') {
    this[0x170] = (Effect_PlayFrame)0x0;
    UpdatePopAnim(this);
    if (this[0x170] != (Effect_PlayFrame)0x0) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
      FUN_05475d88(asStack_20,uVar3);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>::erase
                (this_00,local_10);
      cVar1 = std::vector<Effect_PlayFrame::FrameRange,std::allocator<Effect_PlayFrame::FrameRange>>
              ::empty(this_00);
      if (cVar1 == '\0') {
        PreparePlay(this);
      }
      else {
        lVar4 = GetPAM(this);
        *(undefined1 *)(lVar4 + 0xa2) = 0;
        iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(this + 0x128))
        ;
        if (iVar2 != 0) {
          this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
                    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::GetDelegate
                              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)
                               (this + 0x128));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)asStack_20);
        }
      }
      std::string::~string(asStack_20);
    }
  }
  else {
    Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

