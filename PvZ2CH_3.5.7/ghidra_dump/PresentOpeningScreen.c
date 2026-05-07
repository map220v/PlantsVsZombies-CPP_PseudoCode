// Class: PresentOpeningScreen


/* PresentOpeningScreen::SetRect(Sexy::TRect<int> const&) */

void __thiscall PresentOpeningScreen::SetRect(PresentOpeningScreen *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


/* PresentOpeningScreen::SetMaxVisiblePresents(int) */

void __thiscall PresentOpeningScreen::SetMaxVisiblePresents(PresentOpeningScreen *this,int param_1)

{
  *(int *)(this + 100) = param_1;
  return;
}


/* PresentOpeningScreen::SetPAMs(Sexy::PopAnim*, Sexy::PopAnim*) */

void __thiscall
PresentOpeningScreen::SetPAMs(PresentOpeningScreen *this,PopAnim *param_1,PopAnim *param_2)

{
  *(PopAnim **)(this + 0x50) = param_1;
  *(PopAnim **)(this + 0x58) = param_2;
  return;
}


/* PresentOpeningScreen::SetAnimations(std::string const&, std::string const&) */

void __thiscall
PresentOpeningScreen::SetAnimations(PresentOpeningScreen *this,string *param_1,string *param_2)

{
  thunk_FUN_05475e00(this + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_2);
  return;
}


/* PresentOpeningScreen::SetPAMRenderScale(float) */

void __thiscall PresentOpeningScreen::SetPAMRenderScale(PresentOpeningScreen *this,float param_1)

{
  *(float *)(this + 0x60) = param_1;
  return;
}


/* PresentOpeningScreen::IsDone() */

bool __thiscall PresentOpeningScreen::IsDone(PresentOpeningScreen *this)

{
  return *(int *)(this + 0x80) == 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentOpeningScreen::Update() */

void __thiscall PresentOpeningScreen::Update(PresentOpeningScreen *this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x68);
    uVar3 = FUN_0431b400(uVar6,*(undefined8 *)(this + 0x70));
    if (uVar3 <= uVar7) break;
    puVar4 = (undefined8 *)FUN_0431b40c(uVar6,uVar7);
    PresentDisplayRect::Update((PresentDisplayRect *)*puVar4);
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(this + 0x80) == 0) {
    fVar9 = *(float *)(this + 0x84);
    local_10 = (float)PVZ_Dt();
    local_10 = local_10 + fVar9;
    local_c = 1.0;
    pfVar5 = eastl::min_alt<float>(&local_10,&local_c);
    iVar8 = *(int *)(this + 8);
    fVar10 = *pfVar5;
    fVar9 = *(float *)(this + 0x84);
    uVar7 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)(this + 0x68);
      uVar3 = FUN_0431b400(uVar6,*(undefined8 *)(this + 0x70));
      if (uVar3 <= uVar7) break;
      puVar4 = (undefined8 *)FUN_0431b40c(uVar6,uVar7);
      PresentDisplayRect::Translate
                ((PresentDisplayRect *)*puVar4,-((float)iVar8 * (fVar10 - fVar9)),0.0);
      uVar7 = uVar7 + 1;
    }
    *(float *)(this + 0x84) = fVar10;
    if (fVar10 == 1.0) {
      *(undefined4 *)(this + 0x80) = 1;
      *(int *)(this + 0x88) = *(int *)(this + 0x88) + *(int *)(this + 100);
    }
  }
  else if (*(int *)(this + 0x80) == 1) {
    iVar8 = *(int *)(this + 0x88);
    uVar7 = (long)iVar8;
    iVar1 = iVar8;
    for (; (uVar7 < uVar3 && (iVar8 < iVar1 + *(int *)(this + 100))); iVar8 = iVar8 + 1) {
      puVar4 = (undefined8 *)FUN_0431b40c(uVar6,uVar7);
      cVar2 = PresentDisplayRect::IsDone((PresentDisplayRect *)*puVar4);
      if (cVar2 == '\0') goto LAB_0431b7e4;
      uVar6 = *(undefined8 *)(this + 0x68);
      uVar3 = FUN_0431b400(uVar6,*(undefined8 *)(this + 0x70));
      iVar1 = *(int *)(this + 0x88);
      uVar7 = uVar7 + 1;
    }
    if ((ulong)(long)(iVar1 + *(int *)(this + 100)) < uVar3) {
      *(undefined4 *)(this + 0x80) = 0;
      *(undefined4 *)(this + 0x84) = 0;
    }
    else {
      *(undefined4 *)(this + 0x80) = 2;
    }
  }
LAB_0431b7e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentOpeningScreen::Draw(Sexy::Graphics*) */

void __thiscall PresentOpeningScreen::Draw(PresentOpeningScreen *this,Graphics *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::Translate(param_1,*(int *)this,*(int *)(this + 4));
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x68);
    uVar2 = FUN_0431b400(uVar4,*(undefined8 *)(this + 0x70));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0431b40c(uVar4,uVar3);
    PresentDisplayRect::Draw((PresentDisplayRect *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentOpeningScreen::~PresentOpeningScreen() */

void __thiscall PresentOpeningScreen::~PresentOpeningScreen(PresentOpeningScreen *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  PresentDisplayRect *this_00;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x68);
    uVar2 = FUN_0431b400(uVar5,*(undefined8 *)(this + 0x70));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        std::vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>>::clear
                  ((vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>> *)(this + 0x68))
        ;
        std::vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>>::~vector
                  ((vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>> *)(this + 0x68))
        ;
        std::string::~string((string *)(this + 0x48));
        std::string::~string((string *)(this + 0x40));
        std::
        vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
        ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
                   *)(this + 0x28));
        std::
        vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
        ::~vector((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
                   *)(this + 0x10));
        return;
      }
      puVar1 = (undefined8 *)FUN_0431b40c(uVar5,uVar4);
      this_00 = (PresentDisplayRect *)*puVar1;
      uVar4 = uVar3;
    } while (this_00 == (PresentDisplayRect *)0x0);
    PresentDisplayRect::~PresentDisplayRect(this_00);
    AK::FreeHook(this_00);
  } while( true );
}


/* PresentOpeningScreen::SetPresents(std::vector<Sexy::RtWeakPtr<PresentTable const>,
   std::allocator<Sexy::RtWeakPtr<PresentTable const> > > const&,
   std::vector<Sexy::RtWeakPtr<PresentType const>, std::allocator<Sexy::RtWeakPtr<PresentType const>
   > > const&) */

void __thiscall
PresentOpeningScreen::SetPresents(PresentOpeningScreen *this,vector *param_1,vector *param_2)

{
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  operator=((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
             *)(this + 0x10),param_1);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::operator=((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
               *)(this + 0x28),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentOpeningScreen::Initialize() */

void __thiscall PresentOpeningScreen::Initialize(PresentOpeningScreen *this)

{
  PopAnim *pPVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  PresentDisplayRect *pPVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  PresentType *this_00;
  StandaloneEffect *pSVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_20 [2];
  PresentDisplayRect *local_18 [2];
  long local_8;
  
  uVar17 = *(undefined8 *)(this + 0x10);
  uVar15 = 0;
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_0431b414(uVar17,*(undefined8 *)(this + 0x18));
  if (lVar6 != 0) {
    do {
      pRVar7 = (RtWeakPtrBase *)FUN_0431b420(uVar17,uVar15);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar7);
      cVar5 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_20);
      if (cVar5 == '\0') {
        pPVar8 = ::operator_new(0xb0);
        PresentDisplayRect::PresentDisplayRect(pPVar8);
        local_18[0] = pPVar8;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
        pPVar1 = *(PopAnim **)(this + 0x58);
        if (*(char *)(lVar6 + 0x10) == '\0') {
          pPVar1 = *(PopAnim **)(this + 0x50);
        }
        PresentDisplayRect::BuildRig
                  (local_18[0],pPVar1,(string *)(this + 0x40),(string *)(this + 0x48));
        PresentDisplayRect::SetPAMScale(local_18[0],*(float *)(this + 0x60));
        pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0431b428(*(undefined8 *)(this + 0x28),uVar15);
        this_00 = (PresentType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
        pSVar10 = (StandaloneEffect *)PresentType::BuildEffect(this_00);
        pPVar8 = local_18[0];
        pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0431b428(*(undefined8 *)(this + 0x28),uVar15);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
        PresentDisplayRect::SetContentsEffect(pPVar8,pSVar10,*(float *)(lVar6 + 0x28));
        std::vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>>::push_back
                  ((vector<PresentDisplayRect*,std::allocator<PresentDisplayRect*>> *)(this + 0x68),
                   local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      uVar15 = uVar15 + 1;
      uVar17 = *(undefined8 *)(this + 0x10);
      uVar11 = FUN_0431b414(uVar17,*(undefined8 *)(this + 0x18));
    } while (uVar15 < uVar11);
  }
  lVar6 = 0;
  iVar14 = *(int *)(this + 8);
  fVar20 = (float)*(int *)(this + 0xc);
  fVar21 = (float)iVar14 * 0.5;
  uVar15 = FUN_0431b400(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
  do {
    local_18[0] = (PresentDisplayRect *)CONCAT44(local_18[0]._4_4_,(int)uVar15);
    local_20[0] = *(int *)(this + 100) + (int)lVar6;
    piVar12 = eastl::min_alt<int>(local_20,(int *)local_18);
    iVar2 = *piVar12;
    iVar3 = iVar2 - (int)lVar6;
    fVar19 = fVar21 - fVar20 * 0.5 * (float)iVar3;
    if (0 < iVar3) {
      lVar4 = lVar6 + 1;
      lVar18 = lVar6;
      while( true ) {
        lVar16 = lVar4;
        iVar14 = (int)fVar19;
        fVar19 = fVar19 + fVar20;
        Sexy::Insets::Insets((Insets *)local_18,iVar14,0,(int)fVar20,(int)fVar20);
        puVar13 = (undefined8 *)FUN_0431b40c(*(undefined8 *)(this + 0x68),lVar18);
        PresentDisplayRect::SetRect((PresentDisplayRect *)*puVar13,(TRect *)local_18);
        if (lVar16 == lVar6 + 1 + (ulong)(iVar3 - 1)) break;
        lVar4 = lVar16 + 1;
        lVar18 = lVar16;
      }
      uVar15 = FUN_0431b400(*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70));
      iVar14 = *(int *)(this + 8);
    }
    lVar6 = (long)iVar2;
    fVar21 = fVar21 + (float)iVar14;
  } while ((ulong)(long)iVar2 < uVar15);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentOpeningScreen::Tap(Sexy::Point const&) */

void __thiscall PresentOpeningScreen::Tap(PresentOpeningScreen *this,Point *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x80) == 1) {
    Sexy::Point::Point((Point *)&local_10,(TPoint *)param_1);
    local_10 = local_10 - *(int *)this;
    local_c = local_c - *(int *)(this + 4);
    uVar3 = 0;
    while( true ) {
      uVar4 = *(undefined8 *)(this + 0x68);
      uVar2 = FUN_0431b400(uVar4,*(undefined8 *)(this + 0x70));
      if (uVar2 <= uVar3) break;
      puVar1 = (undefined8 *)FUN_0431b40c(uVar4,uVar3);
      PresentDisplayRect::Tap((PresentDisplayRect *)*puVar1,(Point *)&local_10);
      uVar3 = uVar3 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

