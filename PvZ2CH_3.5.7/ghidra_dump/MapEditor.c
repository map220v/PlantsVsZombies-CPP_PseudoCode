// Class: MapEditor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::Draw(Sexy::Graphics*) */

void __thiscall MapEditor::Draw(MapEditor *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::DrawEditorButton(Sexy::Graphics*, Sexy::TRect<int> const&, std::wstring const&, bool)
    */

void __thiscall
MapEditor::DrawEditorButton
          (MapEditor *this,Graphics *param_1,TRect *param_2,wstring *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  GraphicsAutoState aGStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)param_2;
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_2 + 4);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  if (param_4) {
    Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b7fe20);
    Sexy::Graphics::FillRect(param_1,iVar1,iVar2,*(int *)(param_2 + 8),*(int *)(param_2 + 0xc));
    Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b7ff40);
  }
  else {
    Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b801d8);
    Sexy::Graphics::FillRect(param_1,iVar1,iVar2,*(int *)(param_2 + 8),*(int *)(param_2 + 0xc));
    Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b7fe80);
  }
  Sexy::Graphics::DrawRect(param_1,iVar1,iVar2,*(int *)(param_2 + 8),*(int *)(param_2 + 0xc));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar3 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  FUN_05477b24(auStack_20,param_3);
  Sexy::Color::Color(aCStack_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar5,param_1,
             auStack_20,1,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::DrawEditorLabel(Sexy::Graphics*, std::wstring const&, Sexy::Point) */

void __thiscall
MapEditor::DrawEditorLabel(undefined8 param_1_00,undefined8 param_1,undefined8 param_2,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeTypeface *pPVar5;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04aaa178(10);
  iVar2 = FUN_04aaa178(0x12);
  iVar3 = FUN_054765d0(param_2);
  iVar4 = FUN_04aaa178(0x14);
  Sexy::Insets::Insets(aIStack_38,*param_4,param_4[1],iVar1 + iVar2 * iVar3,iVar4);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  FUN_05477b24(auStack_40,param_2);
  Sexy::Color::Color(aCStack_18,4);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar5,param_1,aIStack_28,auStack_40,0,1,aCStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::DrawEditorTextField(Sexy::Graphics*, std::wstring const&, Sexy::Point) */

void __thiscall
MapEditor::DrawEditorTextField
          (undefined8 param_1_00,Graphics *param_1,undefined8 param_2,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeTypeface *pPVar5;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04aaa178(10);
  iVar2 = FUN_04aaa178(0x12);
  iVar3 = FUN_054765d0(param_2);
  iVar4 = FUN_04aaa178(0x14);
  Sexy::Insets::Insets(aIStack_38,*param_4,param_4[1],iVar1 + iVar2 * iVar3,iVar4);
  Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b7fe20);
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_38);
  Sexy::Graphics::SetColor(param_1,(Color *)&DAT_06b80298);
  Sexy::Graphics::DrawRect(param_1,(TRect *)aIStack_38);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  FUN_05477b24(auStack_40,param_2);
  Sexy::Color::Color(aCStack_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar5,param_1,aIStack_28,auStack_40,1,1,aCStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEditor::Update() */

void __thiscall MapEditor::Update(MapEditor *this)

{
  long lVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  PopAnimRig *this_00;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = *(long *)(this + 0xd8);
  uVar10 = *(undefined8 *)(lVar9 + 8);
  uVar7 = 0;
  uVar3 = FUN_04aa9ea4(uVar10,*(undefined8 *)(lVar9 + 0x10));
  if (uVar3 != 0) {
    do {
      lVar4 = FUN_04aa9ec4(uVar10,uVar7);
      uVar2 = FUN_04aa9e38(*(undefined2 *)(lVar4 + 0x10));
      lVar4 = FUN_04aa9e8c(*(undefined8 *)(lVar9 + 0x60),uVar2);
      if (*(long *)(lVar4 + 8) != 0) {
        uVar8 = *(undefined8 *)(this + 0xe0);
        lVar5 = FUN_04aa9e98(uVar8,*(undefined8 *)(this + 0xe8));
        lVar4 = 0;
        do {
          lVar1 = lVar4 + 1;
          if (lVar4 == lVar5) goto LAB_04aaa80c;
          piVar6 = (int *)FUN_04aa9ed0(uVar8,lVar4);
          lVar4 = lVar1;
        } while (((long)*piVar6 != uVar7) || (*(UIWidget **)(piVar6 + 2) == (UIWidget *)0x0));
        this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(piVar6 + 2));
        if (this_00 != (PopAnimRig *)0x0) {
          fVar11 = (float)PVZ_T();
          fVar12 = (float)PVZ_Dt();
          PopAnimRig::UpdateAnim(this_00,fVar11,fVar12);
        }
        lVar9 = *(long *)(this + 0xd8);
        uVar10 = *(undefined8 *)(lVar9 + 8);
        uVar3 = FUN_04aa9ea4(uVar10,*(undefined8 *)(lVar9 + 0x10));
      }
LAB_04aaa80c:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::GetMapEventItemAtLocation(int const&, int const&) */

void __thiscall MapEditor::GetMapEventItemAtLocation(MapEditor *this,int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
  iVar12 = 0;
  do {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_18);
    if (!bVar1) {
      uVar13 = 0;
LAB_04aaaae4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar13);
    }
    iVar4 = FUN_04aa9e5c(*(undefined4 *)(this + 0x2d8));
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    cVar2 = FUN_04aa9e58(this_00[0x7c]);
    if (iVar4 == cVar2) {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(this_00);
      fVar14 = *pfVar7;
      fVar15 = pfVar7[1];
      Sexy::Insets::Insets((Insets *)&local_38);
      lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar8 + 0x98));
      if (bVar1) {
        lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 0x98));
        iVar5 = FUN_04aaa178(100);
        iVar4 = *(int *)(lVar8 + 0x38);
        lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 0x98));
        iVar6 = FUN_04aaa178(100);
        Sexy::Insets::Insets
                  ((Insets *)&local_18,(int)((float)((iVar4 - iVar5) / 2) + fVar14),
                   (int)((float)((*(int *)(lVar8 + 0x3c) - iVar6) / 2) + fVar15),iVar6,iVar6);
        local_38 = local_18;
        uStack_30 = uStack_10;
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&local_38,*param_1,*param_2);
      }
      else {
        lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        uVar3 = FUN_04aa9e38(*(undefined2 *)(lVar8 + 0x10));
        lVar8 = FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),uVar3);
        if (*(long *)(lVar8 + 8) == 0) {
LAB_04aaaab4:
          cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&local_38,*param_1,*param_2);
        }
        else {
          uVar13 = *(undefined8 *)(this + 0xe0);
          lVar9 = FUN_04aa9e98(uVar13,*(undefined8 *)(this + 0xe8));
          lVar8 = 0;
          do {
            lVar11 = lVar8;
            if (lVar11 == lVar9) goto LAB_04aaaab4;
            piVar10 = (int *)FUN_04aa9ed0(uVar13,lVar11);
            lVar8 = lVar11 + 1;
          } while (iVar12 != *piVar10);
          Sexy::Insets::Insets(aIStack_28,(Insets *)(piVar10 + 4));
          lVar8 = FUN_04aa9ed0(*(undefined8 *)(this + 0xe0),lVar11);
          iVar4 = FUN_04aaa178(100);
          Sexy::Insets::Insets
                    ((Insets *)&local_18,
                     (int)((float)((*(int *)(lVar8 + 0x18) - iVar4) / 2) + fVar14),
                     (int)(fVar15 - (float)((iVar4 + *(int *)(lVar8 + 0x1c)) / 2)),iVar4,iVar4);
          local_38 = local_18;
          uStack_30 = uStack_10;
          cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&local_38,*param_1,*param_2);
        }
      }
      if (cVar2 != '\0') {
        uVar13 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        goto LAB_04aaaae4;
      }
    }
    FUN_04aaa8e4((__normal_iterator *)&local_40);
    iVar12 = iVar12 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::insertLayer() */

void __thiscall MapEditor::insertLayer(MapEditor *this)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar3) break;
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = *(char *)(lVar4 + 0x7c);
    cVar2 = FUN_04aa9e58((int)cVar1);
    if (*(int *)(this + 0x2d8) < (int)cVar2) {
      *(char *)(lVar4 + 0x7c) = cVar1 + '\x01';
    }
    FUN_04aaa8e4((exception_ptr *)&local_18);
  }
  *(int *)(this + 0x2dc) = *(int *)(this + 0x2dc) + 1;
  *(int *)(this + 0x2d8) = *(int *)(this + 0x2d8) + 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::switchAnim(int, int, int) */

void __thiscall MapEditor::switchAnim(MapEditor *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  MapPiecesAnimRig *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  nop();
  if (param_1 == 0) {
    iVar1 = FUN_04aaa178(0x1e0);
    fVar9 = (float)iVar1;
    iVar1 = FUN_04aaa178(0x11b);
    if (param_2 != 0) {
      iVar1 = FUN_04aaa178(0x1bb);
    }
    fVar8 = (float)iVar1;
    pcVar2 = "POPANIM_UI_PVP_MPANIMATION_ANIM_HOUSE_MAIN_%d";
  }
  else if (param_1 == 1) {
    iVar1 = FUN_04aaa178(0x1e0);
    fVar9 = (float)iVar1;
    iVar1 = FUN_04aaa178(0x157);
    if (param_2 == 1) {
      iVar1 = FUN_04aaa178(0x107);
    }
    fVar8 = (float)iVar1;
    pcVar2 = "POPANIM_UI_PVP_MPANIMATION_ANIM_HOUSE_NORMAL_%d";
  }
  else {
    if (param_1 != 2) {
      fVar9 = 0.0;
      fVar8 = fVar9;
      goto LAB_04aab004;
    }
    iVar1 = FUN_04aaa178(0x1e0);
    fVar9 = (float)iVar1;
    iVar1 = FUN_04aaa178(0xf3);
    if (param_2 == 1) {
      iVar1 = FUN_04aaa178(0x107);
    }
    else if (param_2 == 2) {
      iVar1 = FUN_04aaa178(0xdf);
    }
    fVar8 = (float)iVar1;
    pcVar2 = "POPANIM_UI_PVP_MPANIMATION_ANIM_HOUSE_STORE_%d";
  }
  Sexy::StrFormat(pcVar2,(string *)&local_18,(ulong)(uint)param_2);
  FUN_05474278(asStack_20,(string *)&local_18);
  std::string::~string((string *)&local_18);
LAB_04aab004:
  uVar7 = *(undefined8 *)(this + 0xe0);
  lVar3 = FUN_04aa9e98(uVar7,*(undefined8 *)(this + 0xe8));
  lVar5 = 0;
  do {
    lVar6 = lVar5;
    if (lVar6 == lVar3) goto LAB_04aab048;
    this_00 = (MapPiecesAnimRig *)FUN_04aa9ed0(uVar7,lVar6);
    lVar5 = lVar6 + 1;
  } while (*(int *)this_00 != param_3);
  MapPiecesAnimRig::Clear(this_00);
  this_01 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  pPVar4 = (PopAnim *)StringHelper::ToAnimRig(asStack_20,false);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar4,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_01,true);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_01,true);
  std::string::string((string *)&local_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector2 *)&local_18,700000);
  lVar5 = FUN_04aa9ed0(*(undefined8 *)(this + 0xe0),lVar6);
  *(Effect_PopAnim **)(lVar5 + 8) = this_01;
  lVar5 = FUN_04aa9ed0(*(undefined8 *)(this + 0xe0),lVar6);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,(int)fVar9,(int)fVar8);
  *(undefined8 *)(lVar5 + 0x10) = local_18;
  *(undefined8 *)(lVar5 + 0x18) = uStack_10;
LAB_04aab048:
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::saveMap() */

void __thiscall MapEditor::saveMap(MapEditor *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float *pfVar7;
  ulong uVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float *pfVar9;
  PVZDB *pPVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::SexyTime(___stack_chk_guard);
  lVar12 = *(long *)(this + 0xd8);
  uVar13 = *(undefined8 *)(lVar12 + 8);
  *(undefined8 *)(lVar12 + 0x40) = uVar5;
  lVar12 = FUN_04aa9ea4(uVar13,*(undefined8 *)(lVar12 + 0x10));
  if (lVar12 == 0) {
    local_58 = 0.0;
    local_54 = 0.0;
  }
  else {
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)FUN_04aa9ec4(uVar13,0);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_end(p_Var6);
    local_58 = *pfVar7;
    local_54 = pfVar7[1];
  }
  uVar14 = 0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_50 = local_58;
  local_4c = local_54;
  Sexy::Point::Point((Point *)&local_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  while( true ) {
    lVar12 = *(long *)(this + 0xd8);
    uVar5 = *(undefined8 *)(lVar12 + 8);
    uVar8 = FUN_04aa9ea4(uVar5,*(undefined8 *)(lVar12 + 0x10));
    if (uVar8 <= uVar14) break;
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)FUN_04aa9ec4(uVar5,uVar14);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(p_Var6 + 0x98));
    if (bVar1) {
      MapEventItem::GetImageData((MapEventItem *)p_Var6,(RtWeakPtr *)a_Stack_30,(Point *)&local_38);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(p_Var6);
      iVar2 = FUN_04aaa164(local_38);
      fVar17 = *pfVar7;
      local_48 = (float)iVar2 + fVar17;
      iVar3 = FUN_04aaa164(local_34);
      fVar16 = pfVar7[1];
      local_44 = (float)iVar3 + fVar16;
      this_00 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
      LotteryResultProgressBar::GetCurrentLevel(this_00);
      iVar4 = FUN_04aaa164();
      local_40 = (float)iVar2 + fVar17 + (float)iVar4;
      this_01 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
      SalesProgressBar::GetCurrentLevel(this_01);
      iVar2 = FUN_04aaa164();
      local_3c = (float)iVar3 + fVar16 + (float)iVar2;
      pfVar9 = eastl::min_alt<float>(&local_48,&local_58);
      local_58 = *pfVar9;
      pfVar9 = eastl::min_alt<float>(&local_44,&local_54);
      local_54 = *pfVar9;
      pfVar9 = eastl::max_alt<float>(&local_40,&local_50);
      local_50 = *pfVar9;
      pfVar9 = eastl::max_alt<float>(&local_3c,&local_4c);
      local_4c = *pfVar9;
    }
    else {
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_end(p_Var6);
    }
    local_10 = *(undefined8 *)pfVar7;
    uVar14 = uVar14 + 1;
    fVar16 = (float)local_10;
    fVar15 = (float)FUN_04aaa18c(0x3f800000);
    fVar17 = local_10._4_4_;
    local_10 = CONCAT44(local_10._4_4_,fVar16 / fVar15);
    fVar16 = (float)FUN_04aaa18c(0x3f800000);
    local_10 = CONCAT44(fVar17 / fVar16,(float)local_10);
    FUN_04aa9e1c(p_Var6 + 8,p_Var6 + 0xc,(string *)&local_10);
  }
  local_54 = local_54 - 150.0;
  local_4c = local_4c + 150.0;
  *(int *)(lVar12 + 0x4c) = (int)local_58;
  *(int *)(lVar12 + 0x50) = (int)local_54;
  *(int *)(lVar12 + 0x54) = (int)local_50 - (int)local_58;
  *(int *)(lVar12 + 0x58) = (int)local_4c - (int)local_54;
  GetFolder(asStack_18,3);
  uVar5 = FUN_0547429c(*(long *)(this + 0xd8) + 0x38);
  Sexy::StrFormat("properties\\%s.json",(string *)&local_10,uVar5);
  std::operator+(asStack_18,(string *)&local_10);
  std::string::~string((string *)&local_10);
  std::string::~string(asStack_18);
  GetFolder(asStack_18,3);
  uVar5 = FUN_0547429c(*(long *)(this + 0xd8) + 0x38);
  Sexy::StrFormat("properties\\worldmap_rton\\%s.rton",(string *)&local_10,uVar5);
  std::operator+(asStack_18,(string *)&local_10);
  std::string::~string((string *)&local_10);
  std::string::~string(asStack_18);
  pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar10,0x22,asStack_28,1,0);
  pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar10,0x22,asStack_20,0,0);
  uVar14 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(*(long *)(this + 0xd8) + 8);
    uVar8 = FUN_04aa9ea4(uVar5,*(undefined8 *)(*(long *)(this + 0xd8) + 0x10));
    if (uVar8 <= uVar14) break;
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)FUN_04aa9ec4(uVar5,uVar14);
    puVar11 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(p_Var6);
    local_10 = *puVar11;
    fVar16 = (float)local_10;
    fVar15 = (float)FUN_04aaa18c(0x3f800000);
    fVar17 = local_10._4_4_;
    local_10 = CONCAT44(local_10._4_4_,fVar15 * fVar16);
    fVar16 = (float)FUN_04aaa18c(0x3f800000);
    local_10 = CONCAT44(fVar16 * fVar17,(float)local_10);
    FUN_04aa9e1c(p_Var6 + 8,p_Var6 + 0xc,(string *)&local_10);
    uVar14 = uVar14 + 1;
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::setupScreen() */

void __thiscall MapEditor::setupScreen(MapEditor *this)

{
  vector<EditorButton,std::allocator<EditorButton>> *this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  EditorButton aEStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 auStack_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x2f0);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar2 = FUN_04aaa178(0x31a);
  iVar3 = FUN_04aaa178(0x87);
  DAT_06b7ff38 = (int)((float)(*(int *)(gLawnApp + 0x724) - iVar2) * 0.5 - (float)iVar3);
  FUN_05478178(aEStack_38,&DAT_0573dc18,(pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  Sexy::Insets::Insets(aIStack_30);
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc30,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc40,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc58,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc70,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc88,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dc98,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,&DAT_0573dcb0,
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  FUN_05478178((pair<std::wstring_const,Sexy::DataElement*> *)&local_20,L"delete",
               (Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)auStack_18);
  EditorButton::operator=(aEStack_38,(EditorButton *)&local_20);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
  nop();
  std::vector<EditorButton,std::allocator<EditorButton>>::push_back(this_00,aEStack_38);
  iVar3 = FUN_04aaa178(0x32);
  iVar4 = FUN_04aaa178(0x1e);
  uVar10 = 0;
  iVar2 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x2f0);
    uVar8 = FUN_04aa9e6c(uVar11,*(undefined8 *)(this + 0x2f8));
    if (uVar8 <= uVar10) break;
    lVar9 = FUN_04aa9e80(uVar11,uVar10);
    iVar7 = FUN_04aaa178(0);
    iVar5 = FUN_04aaa178(0x32);
    iVar6 = FUN_04aaa178(0x1e);
    Sexy::Insets::Insets((Insets *)&local_20,iVar7 + iVar2,iVar7,iVar5,iVar6);
    *(undefined8 *)(lVar9 + 8) = local_20;
    *(undefined8 *)(lVar9 + 0x10) = auStack_18[0];
    uVar10 = uVar10 + 1;
    iVar2 = iVar2 + iVar3;
  }
  iVar2 = iVar3 + (int)uVar10 * iVar3;
  lVar9 = 0;
  iVar7 = iVar2;
  do {
    EditorButton::EditorButton((EditorButton *)&local_20);
    std::vector<EditorButton,std::allocator<EditorButton>>::push_back
              ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x308),
               (EditorButton *)&local_20);
    lVar1 = lVar9 + 1;
    lVar9 = FUN_04aa9e80(*(undefined8 *)(this + 0x308),lVar9);
    iVar5 = FUN_04aaa178(0x32);
    iVar6 = FUN_04aaa178(0x1e);
    Sexy::Insets::Insets((Insets *)&local_48,iVar7,0,iVar5,iVar6);
    *(undefined8 *)(lVar9 + 8) = local_48;
    *(undefined8 *)(lVar9 + 0x10) = uStack_40;
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
    lVar9 = lVar1;
    iVar7 = iVar7 + iVar3;
  } while (lVar1 != 3);
  lVar9 = 0;
  iVar7 = iVar2;
  do {
    EditorButton::EditorButton((EditorButton *)&local_20);
    std::vector<EditorButton,std::allocator<EditorButton>>::push_back
              ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 800),
               (EditorButton *)&local_20);
    lVar1 = lVar9 + 1;
    lVar9 = FUN_04aa9e80(*(undefined8 *)(this + 800),lVar9);
    iVar5 = FUN_04aaa178(0x32);
    iVar6 = FUN_04aaa178(0x1e);
    Sexy::Insets::Insets((Insets *)&local_48,iVar7,iVar4,iVar5,iVar6);
    *(undefined8 *)(lVar9 + 8) = local_48;
    *(undefined8 *)(lVar9 + 0x10) = uStack_40;
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
    lVar9 = lVar1;
    iVar7 = iVar7 + iVar3;
  } while (lVar1 != 3);
  lVar9 = 0;
  iVar7 = iVar2;
  do {
    EditorButton::EditorButton((EditorButton *)&local_20);
    std::vector<EditorButton,std::allocator<EditorButton>>::push_back
              ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x338),
               (EditorButton *)&local_20);
    lVar1 = lVar9 + 1;
    lVar9 = FUN_04aa9e80(*(undefined8 *)(this + 0x338),lVar9);
    iVar5 = FUN_04aaa178(0x32);
    iVar6 = FUN_04aaa178(0x1e);
    Sexy::Insets::Insets((Insets *)&local_48,iVar7,iVar4 * 2,iVar5,iVar6);
    *(undefined8 *)(lVar9 + 8) = local_48;
    *(undefined8 *)(lVar9 + 0x10) = uStack_40;
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
    lVar9 = lVar1;
    iVar7 = iVar7 + iVar3;
  } while (lVar1 != 3);
  lVar9 = 0;
  do {
    EditorButton::EditorButton((EditorButton *)&local_20);
    std::vector<EditorButton,std::allocator<EditorButton>>::push_back
              ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x350),
               (EditorButton *)&local_20);
    lVar1 = lVar9 + 1;
    lVar9 = FUN_04aa9e80(*(undefined8 *)(this + 0x350),lVar9);
    iVar7 = FUN_04aaa178(0x32);
    iVar5 = FUN_04aaa178(0x1e);
    Sexy::Insets::Insets((Insets *)&local_48,iVar2,iVar4 * 3,iVar7,iVar5);
    *(undefined8 *)(lVar9 + 8) = local_48;
    *(undefined8 *)(lVar9 + 0x10) = uStack_40;
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_20);
    lVar9 = lVar1;
    iVar2 = iVar2 + iVar3;
  } while (lVar1 != 3);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x308),0);
  FUN_054772c4(uVar11,&DAT_0573dce8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x308),1);
  FUN_054772c4(uVar11,&DAT_0573dcf8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x308),2);
  FUN_054772c4(uVar11,L"itemType");
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 800),0);
  FUN_054772c4(uVar11,&DAT_0573dce8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 800),1);
  FUN_054772c4(uVar11,&DAT_0573dcf8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 800),2);
  FUN_054772c4(uVar11,L"insert");
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x338),0);
  FUN_054772c4(uVar11,&DAT_0573dce8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x338),1);
  FUN_054772c4(uVar11,&DAT_0573dcf8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x338),2);
  FUN_054772c4(uVar11,L"eventType");
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x350),0);
  FUN_054772c4(uVar11,&DAT_0573dce8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x350),1);
  FUN_054772c4(uVar11,&DAT_0573dcf8);
  uVar11 = FUN_04aa9e80(*(undefined8 *)(this + 0x350),2);
  FUN_054772c4(uVar11,L"eventID");
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)aEStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* MapEditor::addAnim(std::string) */

void __thiscall MapEditor::addAnim(MapEditor *this,string *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PopAnim *pPVar4;
  EffectAnimRig_DelayReplayAnim *this_00;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  Insets aIStack_98 [8];
  int local_90;
  int local_8c;
  int local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  PopAnim *local_78;
  EffectAnimRig_DelayReplayAnim *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (PopAnim *)StringHelper::ToAnimRig(param_2,false);
  if (pPVar4 != (PopAnim *)0x0) {
    this_00 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_DelayReplayAnim>(pPVar4);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
    Sexy::Insets::Insets(aIStack_98,(Insets *)(pPVar4 + 0x34));
    iVar1 = FUN_04aaa178(200);
    iVar3 = iVar1;
    if (local_90 < iVar1) {
      iVar3 = local_90;
    }
    iVar7 = 0;
    if (local_90 != 0) {
      iVar7 = (local_8c * iVar3) / local_90;
    }
    if (iVar1 < iVar7) {
      iVar3 = 0;
      iVar7 = iVar1;
      if (local_8c != 0) {
        iVar3 = (local_90 * iVar1) / local_8c;
      }
    }
    fVar8 = (float)iVar3 / (float)local_90 + (float)iVar3 / (float)local_90;
    Sexy::SexyTransform2D::Scale(aSStack_60,fVar8,fVar8);
    lVar6 = gLawnApp;
    iVar1 = *(int *)(gLawnApp + 0x724);
    iVar2 = FUN_04aaa178(100);
    FUN_04aa9dfc((float)((iVar1 - iVar3 / 2) - iVar2),
                 (float)((*(int *)(lVar6 + 0x728) - iVar7 / 2) - iVar2),auStack_58,auStack_4c);
    PopAnimRig::SetRenderTransform((PopAnimRig *)this_00,aSStack_60);
    std::string::string((string *)&local_78,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this_00,(string *)&local_78,0,aDStack_38);
    std::string::~string((string *)&local_78);
    nop();
    lVar6 = *(long *)(this + 0xd8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_78);
    uStack_64 = CONCAT31(uStack_64._1_3_,1);
    local_68 = 0;
    local_70 = this_00;
    std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
              ((vector<WorldMapAsset,std::allocator<WorldMapAsset>> *)(lVar6 + 0x60),
               (WorldMapAsset *)&local_78);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_78);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(*(long *)(pPVar4 + 0x58) + 0x38));
    MapArtAnim::MapArtAnim((MapArtAnim *)&local_78);
    local_78 = pPVar4;
    iVar3 = FUN_04aaa178(0x1e0);
    iVar1 = FUN_04aaa178(0x107);
    Sexy::Insets::Insets((Insets *)&local_88,0,0,iVar3,iVar1);
    local_70 = (EffectAnimRig_DelayReplayAnim *)CONCAT44(uStack_84,local_88);
    uStack_64 = (undefined4)((ulong)uStack_80 >> 0x20);
    local_68 = (undefined4)uStack_80;
    local_88 = FUN_04aa9ee4(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),
                            *(undefined8 *)(*(long *)(this + 0xd8) + 0x68));
    local_88 = local_88 + -1;
    puVar5 = (undefined8 *)
             std::map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
             ::operator[]((map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                           *)(this + 0x128),&local_88);
    *puVar5 = local_78;
    puVar5[1] = local_70;
    puVar5[2] = CONCAT44(uStack_64,local_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::initLoadedWorldResources() */

void __thiscall MapEditor::initLoadedWorldResources(MapEditor *this)

{
  vector<WorldMapAsset,std::allocator<WorldMapAsset>> *this_00;
  LawnApp *this_01;
  bool bVar1;
  WorldResourcesData *this_02;
  string *psVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = ::operator_new(0x58);
  WorldResourcesData::WorldResourcesData(this_02);
  *(WorldResourcesData **)(*(long *)(this + 0xd8) + 0xb0) = this_02;
  std::string::string((string *)&local_20,"IMAGE_UI_PVP_MAP_CLOUD_%d");
  FUN_05474278(this_02 + 0x28,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = *(long *)(*(long *)(this + 0xd8) + 0xb0);
  std::string::string((string *)&local_20,"IMAGE_UI_PVP_MPANIMATION_ANIM_%d");
  FUN_05474278(lVar3 + 0x30,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = *(long *)(*(long *)(this + 0xd8) + 0xb0);
  std::string::string((string *)&local_20,"UI_PVP");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x10),(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = *(long *)(*(long *)(this + 0xd8) + 0xb0);
  std::string::string((string *)&local_20,"UI_PVP_Map");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x10),(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = *(long *)(*(long *)(this + 0xd8) + 0xb0);
  std::string::string((string *)&local_20,"PVP_MpAnimation");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x10),(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = *(long *)(this + 0xd8);
  *(undefined1 *)(*(long *)(lVar3 + 0xb0) + 0x50) = 0;
  std::map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>::clear
            ((map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>> *)
             (this + 0x128));
  if (*(char *)(*(long *)(lVar3 + 0xb0) + 0x50) == '\0') {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(*(long *)(lVar3 + 0xb0) + 0x10));
    while( true ) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(*(long *)(lVar3 + 0xb0) + 0x10));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
      this_01 = gLawnApp;
      if (!bVar1) break;
      psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      LawnApp::LoadGroup(this_01,psVar2);
      FUN_04aaae7c((string *)&local_28);
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb0) + 0x50) = 1;
  }
  this_00 = (vector<WorldMapAsset,std::allocator<WorldMapAsset>> *)(lVar3 + 0x60);
  uVar4 = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  Set8BytesTo0((string *)&local_28);
  do {
    uVar4 = uVar4 + 1;
    Sexy::StrFormat("IMAGE_UI_PVP_MAP_CLOUD_%d",(string *)&local_20,(ulong)uVar4);
    FUN_05474278((string *)&local_28,(string *)&local_20);
    std::string::~string((string *)&local_20);
    lVar3 = StringHelper::ToImage((string *)&local_28,false);
    if (lVar3 == 0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)a_Stack_30);
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_30,(RtId *)&local_20);
      Sexy::RtId::~RtId((RtId *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)a_Stack_30);
    local_18 = 0;
    local_10 = 0;
    local_c = 1;
    std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
              (this_00,(WorldMapAsset *)&local_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
  } while (uVar4 != 4);
  std::string::string((string *)&local_20,"IMAGE_UI_PVP_UI_DIALOG_GOLD");
  lVar3 = StringHelper::ToImage((string *)&local_20,false);
  std::string::~string((string *)&local_20);
  nop();
  if (lVar3 == 0) {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)a_Stack_30);
  }
  else {
    Sexy::BaseResource::GetRtId();
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_30,(RtId *)&local_20);
    Sexy::RtId::~RtId((RtId *)&local_20);
  }
  uVar5 = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)a_Stack_30);
  local_c = 1;
  local_18 = 0;
  local_10 = 0;
  std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
            (this_00,(WorldMapAsset *)&local_20);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
  do {
    Sexy::StrFormat("IMAGE_UI_PVP_MAP_MAP_BG_%d",(string *)&local_20,uVar5);
    FUN_05474278((string *)&local_28,(string *)&local_20);
    std::string::~string((string *)&local_20);
    lVar3 = StringHelper::ToImage((string *)&local_28,false);
    if (lVar3 == 0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)a_Stack_30);
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_30,(RtId *)&local_20);
      Sexy::RtId::~RtId((RtId *)&local_20);
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)a_Stack_30);
    local_18 = 0;
    local_10 = 0;
    local_c = 1;
    std::vector<WorldMapAsset,std::allocator<WorldMapAsset>>::push_back
              (this_00,(WorldMapAsset *)&local_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
  } while (uVar4 != 5);
  std::string::string((string *)&local_20,"POPANIM_UI_PVP_MPANIMATION_ANIM_HOUSE_NORMAL_1");
  addAnim(this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"POPANIM_UI_PVP_MPANIMATION_ANIM_ACHIEVE");
  addAnim(this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string((string *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::rebuildResourceGrid() */

void __thiscall MapEditor::rebuildResourceGrid(MapEditor *this)

{
  int iVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  WorldDataManager *this_00;
  long lVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar13;
  undefined8 uVar14;
  vector<unsigned_char,std::allocator<unsigned_char>> *this_01;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int local_14;
  long local_8;
  
  lVar16 = *(long *)(this + 0x158);
  iVar19 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar8 = WorldDataManager::GetWorldDataByIdx(this_00,0);
  p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)FUN_04aa9ec4(*(undefined8 *)(lVar8 + 8),0);
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end(p_Var9);
  fVar2 = *pfVar10;
  local_38 = fVar2;
  lVar8 = WorldDataManager::GetWorldDataByIdx(this_00,0);
  p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)FUN_04aa9ec4(*(undefined8 *)(lVar8 + 8),0);
  lVar8 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(p_Var9);
  local_34 = *(float *)(lVar8 + 4);
  local_30 = fVar2;
  local_2c = local_34;
  iVar5 = WorldDataManager::GetWorldDataCount(this_00);
  if (0 < iVar5) {
    do {
      lVar8 = WorldDataManager::GetWorldDataByIdx(this_00,iVar19);
      uVar17 = *(undefined8 *)(lVar8 + 8);
      lVar11 = FUN_04aa9ea4(uVar17,*(undefined8 *)(lVar8 + 0x10));
      for (lVar8 = 0; lVar8 != lVar11; lVar8 = lVar8 + 1) {
        p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)FUN_04aa9ec4(uVar17,lVar8);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_end(p_Var9);
        pfVar12 = eastl::min_alt<float>(pfVar10,&local_38);
        local_38 = *pfVar12;
        pfVar12 = eastl::min_alt<float>(pfVar10 + 1,&local_34);
        local_34 = *pfVar12;
        pfVar12 = eastl::max_alt<float>(pfVar10,&local_30);
        local_30 = *pfVar12;
        pfVar10 = eastl::max_alt<float>(pfVar10 + 1,&local_2c);
        local_2c = *pfVar10;
      }
      iVar19 = iVar19 + 1;
      iVar5 = WorldDataManager::GetWorldDataCount(this_00);
    } while (iVar19 < iVar5);
  }
  iVar5 = (int)local_38 + -600;
  *(int *)(lVar16 + 0x48) = iVar5;
  iVar19 = ((int)local_30 - (int)local_38) + 0x4b0;
  iVar6 = (int)local_34 + -600;
  *(int *)(lVar16 + 0x50) = iVar19;
  *(int *)(lVar16 + 0x40) = iVar5;
  iVar5 = ((int)local_2c - (int)local_34) + 0x4b0;
  *(int *)(lVar16 + 0x54) = iVar5;
  *(int *)(lVar16 + 0x4c) = iVar6;
  *(int *)(lVar16 + 0x44) = iVar6;
  *(int *)(lVar16 + 0x38) = iVar19 / 600 + 1;
  *(int *)(lVar16 + 0x3c) = iVar5 / 600 + 1;
  std::
  vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
  ::clear((vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
           *)(lVar16 + 0x20));
  std::
  vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
  ::resize((vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>
            *)(lVar16 + 0x20),(long)(*(int *)(lVar16 + 0x38) * *(int *)(lVar16 + 0x3c)));
  Sexy::Insets::Insets((Insets *)&local_18,0,0,600,600);
  iVar19 = *(int *)(lVar16 + 0x38);
  if (0 < iVar19) {
    local_44 = -0x960;
    iVar6 = *(int *)(lVar16 + 0x3c);
    iVar5 = 0;
    do {
      if (0 < iVar6) {
        iVar21 = 0;
        iVar15 = -0x960;
        do {
          iVar18 = iVar5 + -4;
          iVar20 = local_44;
          do {
            if ((-1 < iVar18) && (iVar18 < iVar19)) {
              iVar19 = iVar21 + -4;
              local_18 = *(int *)(lVar16 + 0x40) + iVar20;
              iVar1 = iVar15;
              do {
                if ((-1 < iVar19) && (iVar19 < iVar6)) {
                  iVar6 = 0;
                  local_14 = *(int *)(lVar16 + 0x44) + iVar1;
                  iVar7 = WorldDataManager::GetWorldDataCount(this_00);
                  if (0 < iVar7) {
                    do {
                      lVar8 = WorldDataManager::GetWorldDataByIdx(this_00,iVar6);
                      if ((*(int *)(lVar8 + 0x54) != 0) &&
                         (cVar3 = Sexy::TRect<int>::Intersects
                                            ((TRect<int> *)(lVar8 + 0x4c),(TRect *)&local_18),
                         cVar3 != '\0')) {
                        lVar11 = (long)(iVar5 + iVar21 * *(int *)(lVar16 + 0x38));
                        pvVar13 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04aa9ed8(*(undefined8 *)(lVar16 + 0x20),lVar11);
                        uVar17 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::begin(pvVar13);
                        pvVar13 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04aa9ed8(*(undefined8 *)(lVar16 + 0x20),lVar11);
                        uVar14 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::end(pvVar13);
                        local_28 = std::
                                   find<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>,unsigned_short>
                                             (uVar17,uVar14,lVar8 + 0x48);
                        pvVar13 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)FUN_04aa9ed8(*(undefined8 *)(lVar16 + 0x20),lVar11);
                        local_20 = std::
                                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   ::end(pvVar13);
                        bVar4 = __gnu_cxx::operator==
                                          ((__normal_iterator *)&local_28,
                                           (__normal_iterator *)&local_20);
                        if (bVar4) {
                          this_01 = (vector<unsigned_char,std::allocator<unsigned_char>> *)
                                    FUN_04aa9ed8(*(undefined8 *)(lVar16 + 0x20),lVar11);
                          local_20 = CONCAT71(local_20._1_7_,(char)*(undefined2 *)(lVar8 + 0x48));
                          std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                                    (this_01,(uchar *)&local_20);
                        }
                      }
                      iVar6 = iVar6 + 1;
                      iVar7 = WorldDataManager::GetWorldDataCount(this_00);
                    } while (iVar6 < iVar7);
                  }
                  iVar6 = *(int *)(lVar16 + 0x3c);
                }
                iVar19 = iVar19 + 1;
                iVar1 = iVar1 + 600;
              } while (iVar21 + 5 != iVar19);
              iVar19 = *(int *)(lVar16 + 0x38);
            }
            iVar18 = iVar18 + 1;
            iVar20 = iVar20 + 600;
          } while (iVar5 + 5 != iVar18);
          iVar21 = iVar21 + 1;
          iVar15 = iVar15 + 600;
        } while (iVar21 < iVar6);
      }
      local_44 = local_44 + 600;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar19);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::saveMapManifest() */

void __thiscall MapEditor::saveMapManifest(MapEditor *this)

{
  PVZDB *pPVar1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,"properties\\worldmaplist.json");
  std::string::~string(asStack_10);
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,"properties\\worldmap_rton\\worldmaplist.rton");
  std::string::~string(asStack_10);
  rebuildResourceGrid(this);
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar1,0x1c,asStack_20,1,0);
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar1,0x1c,asStack_18,0,0);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::newMap(std::string const&) */

void __thiscall MapEditor::newMap(MapEditor *this,string *param_1)

{
  PVZDB *pPVar1;
  RtDbTable *this_00;
  WorldData *this_01;
  WorldResourcesData *this_02;
  RtId aRStack_c0 [8];
  MapListNode aMStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtDbTable *)PVZDB::GetTable(pPVar1,0x22);
  Sexy::RtDbTable::Reset(this_00,true);
  this_01 = ::operator_new(0xb8);
  WorldData::WorldData(this_01);
  Sexy::RtDbTable::AllocId(aRStack_c0,this_00,this_01,0,1,0);
  Sexy::RtDbTable::SetObjectDeletionMode(this_00,aRStack_c0,2);
  thunk_FUN_05475e00(this_01 + 0x38,param_1);
  this_01[0x5c] = (WorldData)0x64;
  this_02 = ::operator_new(0x58);
  WorldResourcesData::WorldResourcesData(this_02);
  *(WorldResourcesData **)(this_01 + 0xb0) = this_02;
  MapListNode::MapListNode(aMStack_b8);
  thunk_FUN_05475e00(aMStack_b8,param_1);
  std::vector<MapListNode,std::allocator<MapListNode>>::push_back
            ((vector<MapListNode,std::allocator<MapListNode>> *)(*(long *)(this + 0x158) + 8),
             aMStack_b8);
  *(WorldData **)(this + 0xd8) = this_01;
  saveMap(this);
  MapListNode::~MapListNode(aMStack_b8);
  Sexy::RtId::~RtId(aRStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::~MapEditor() */

void __thiscall MapEditor::~MapEditor(MapEditor *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  MapPiecesAnimRig *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06947aa0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (MapPiecesAnimRig *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    MapPiecesAnimRig::Clear(this_01);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::clear
            ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)this_00);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)(this + 0x368));
  std::vector<EditorButton,std::allocator<EditorButton>>::~vector
            ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x350));
  std::vector<EditorButton,std::allocator<EditorButton>>::~vector
            ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x338));
  std::vector<EditorButton,std::allocator<EditorButton>>::~vector
            ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 800));
  std::vector<EditorButton,std::allocator<EditorButton>>::~vector
            ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x308));
  std::vector<EditorButton,std::allocator<EditorButton>>::~vector
            ((vector<EditorButton,std::allocator<EditorButton>> *)(this + 0x2f0));
  MapEventItem::~MapEventItem((MapEventItem *)(this + 0x178));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x160));
  std::map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>::~map
            ((map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>> *)
             (this + 0x128));
  std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::~vector
            ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)this_00);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MapEditor::~MapEditor() */

void __thiscall MapEditor::~MapEditor(MapEditor *this)

{
  ~MapEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* MapEditor::HandleMapItem(Sexy::Touch*, int, int) */

void __thiscall MapEditor::HandleMapItem(MapEditor *this,Touch *param_1,int param_2,int param_3)

{
  map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>> *pmVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  MapEventItem *pMVar11;
  Effect_PopAnim *pEVar12;
  undefined8 *puVar13;
  RtWeakPtr *this_01;
  PopAnimRig *pPVar14;
  RtWeakPtrBase *pRVar15;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  MapPiecesAnimRig *this_03;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  FastCurve aFStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  Effect_PopAnim *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  DummyInit aDStack_170 [48];
  undefined8 local_140;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  ushort local_130 [2];
  undefined1 auStack_12c [104];
  undefined1 auStack_c4 [100];
  undefined1 auStack_60 [37];
  undefined1 auStack_3b [51];
  long local_8;
  
  iVar17 = *(int *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  uVar6 = iVar17 - 1;
  local_1b8 = param_3;
  local_1b4 = param_2;
  local_1b0 = param_2;
  local_1ac = param_3;
  switch(uVar6) {
  case 0:
    MapEventItem::MapEventItem((MapEventItem *)&local_140);
    Sexy::FastCurve::SetOutRange(aFStack_1a8,(float)local_1b0,(float)local_1ac);
    FUN_04aa9e1c(auStack_138,auStack_134,aFStack_1a8);
    FUN_04aa9e30(local_130,*(undefined2 *)(this + 0x2c0));
    FUN_04aa9e48(auStack_60,0xffffffff);
    this_01 = (RtWeakPtr *)
              FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),
                           *(undefined2 *)(this + 0x2c0));
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar4) {
      pRVar15 = (RtWeakPtrBase *)
                FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),
                             *(undefined2 *)(this + 0x2c0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_190,pRVar15);
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),
                             *(undefined2 *)(this + 0x2c0));
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      Sexy::Point::Point((Point *)&local_1a0,-(*(int *)(lVar16 + 0x38) / 2),0);
      MapEventItem::SetImageData
                ((MapEventItem *)&local_140,(RtWeakPtr<Sexy::SoundResource> *)&local_190,
                 (Point *)&local_1a0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_190);
    }
    else {
      uVar3 = *(ushort *)(this + 0x2c0);
      lVar16 = FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),uVar3);
      if (*(long *)(lVar16 + 8) != 0) {
        pmVar1 = (map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                  *)(this + 0x128);
        local_190._0_4_ = (uint)uVar3;
        lVar16 = std::
                 map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                 ::operator[](pmVar1,(int *)&local_190);
        iVar17 = *(int *)(lVar16 + 0x10);
        local_190._0_4_ = (uint)*(ushort *)(this + 0x2c0);
        lVar16 = std::
                 map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                 ::operator[](pmVar1,(int *)&local_190);
        iVar2 = *(int *)(lVar16 + 0x14);
        uVar19 = FUN_04aa9e98(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
        FUN_04aa9e48(auStack_60,uVar19);
        pEVar12 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        local_190._0_4_ = (uint)*(ushort *)(this + 0x2c0);
        puVar13 = (undefined8 *)
                  std::
                  map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                  ::operator[](pmVar1,(int *)&local_190);
        Effect_PopAnim::CreatePopAnimRig(pEVar12,(PopAnim *)*puVar13,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(pEVar12,true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar12,true);
        pPVar14 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)pEVar12);
        std::string::string((string *)&local_190,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_170);
        PopAnimRig::PlayAndContinue(pPVar14,(string *)&local_190,0,aDStack_170);
        std::string::~string((string *)&local_190);
        nop();
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_190,(float)(*(int *)(this + 0x50) / 2),
                   (float)(*(int *)(this + 0x54) / 2));
        StandaloneEffect::SetScreenSpaceOrigin
                  ((StandaloneEffect *)pEVar12,(SexyVector2 *)&local_190,700000);
        MapPiecesAnimRig::MapPiecesAnimRig((MapPiecesAnimRig *)&local_190);
        uVar7 = FUN_04aa9ea4(*(undefined8 *)(*(long *)(this + 0xd8) + 8),
                             *(undefined8 *)(*(long *)(this + 0xd8) + 0x10));
        local_190 = CONCAT44(local_190._4_4_,uVar7);
        local_188 = pEVar12;
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_1a0,(float)(local_1b0 - iVar17 / 2),
                   (float)(local_1ac + iVar2 / 2));
        FUN_04aa9e1c(auStack_138,auStack_134,(FastCurve *)&local_1a0);
        Sexy::Insets::Insets((Insets *)&local_1a0,0,0,iVar17,iVar2);
        local_180 = local_1a0;
        uStack_178 = uStack_198;
        local_190 = CONCAT44(*(undefined4 *)(this + 0x2e0),(uint)local_190);
        std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::push_back
                  ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)(this + 0xe0),
                   (MapPiecesAnimRig *)&local_190);
      }
    }
    FUN_04aaa0dc(auStack_3b);
    FUN_04aa9e50(auStack_c4,this[0x2d8]);
    MapEventItem::SetEventId((MapEventItem *)&local_140,*(ushort *)(this + 0x2e0));
    FUN_04aa9e3c(auStack_12c,*(undefined4 *)(this + 0x2e4));
    std::vector<MapEventItem,std::allocator<MapEventItem>>::push_back
              ((vector<MapEventItem,std::allocator<MapEventItem>> *)(*(long *)(this + 0xd8) + 8),
               (MapEventItem *)&local_140);
    uVar19 = std::vector<MapEventItem,std::allocator<MapEventItem>>::back
                       ((vector<MapEventItem,std::allocator<MapEventItem>> *)
                        (*(long *)(this + 0xd8) + 8));
    *(undefined8 *)(this + 0x2b8) = uVar19;
    MapEventItem::~MapEventItem((MapEventItem *)&local_140);
    iVar17 = *(int *)(this + 0xf8);
    uVar6 = iVar17 - 1;
    break;
  case 1:
    pMVar11 = (MapEventItem *)GetMapEventItemAtLocation(this,&local_1b4,&local_1b8);
    if (pMVar11 != (MapEventItem *)0x0) {
      MapEventItem::MapEventItem((MapEventItem *)&local_140,pMVar11);
      Sexy::FastCurve::SetOutRange(aFStack_1a8,(float)local_1b0,(float)local_1ac);
      FUN_04aaa0dc(auStack_3b);
      MapEventItem::SetEventId((MapEventItem *)&local_140,*(ushort *)(this + 0x2e0));
      FUN_04aa9e48(auStack_60,0xffffffff);
      lVar8 = *(long *)(this + 0xd8);
      lVar16 = FUN_04aa9e8c(*(undefined8 *)(lVar8 + 0x60),local_130[0]);
      if (*(long *)(lVar16 + 8) != 0) {
        pmVar1 = (map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                  *)(this + 0x128);
        local_190._0_4_ = (uint)*(ushort *)(this + 0x2c0);
        lVar16 = std::
                 map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                 ::operator[](pmVar1,(int *)&local_190);
        iVar17 = *(int *)(lVar16 + 0x10);
        local_190._0_4_ = (uint)*(ushort *)(this + 0x2c0);
        lVar16 = std::
                 map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                 ::operator[](pmVar1,(int *)&local_190);
        iVar2 = *(int *)(lVar16 + 0x14);
        uVar19 = FUN_04aa9e98(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
        FUN_04aa9e48(auStack_60,uVar19);
        pEVar12 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        local_190._0_4_ = (uint)local_130[0];
        puVar13 = (undefined8 *)
                  std::
                  map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>
                  ::operator[](pmVar1,(int *)&local_190);
        Effect_PopAnim::CreatePopAnimRig(pEVar12,(PopAnim *)*puVar13,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(pEVar12,true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar12,true);
        std::string::string((string *)&local_190,"dp");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(pEVar12,(string *)&local_190,0);
        std::string::~string((string *)&local_190);
        nop();
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_190,(float)(*(int *)(this + 0x50) / 2),
                   (float)(*(int *)(this + 0x54) / 2));
        StandaloneEffect::SetScreenSpaceOrigin
                  ((StandaloneEffect *)pEVar12,(SexyVector2 *)&local_190,900000);
        MapPiecesAnimRig::MapPiecesAnimRig((MapPiecesAnimRig *)&local_190);
        local_190 = CONCAT44(local_190._4_4_,(uint)local_130[0]);
        local_188 = pEVar12;
        Sexy::Insets::Insets((Insets *)&local_1a0,0,0,iVar17,iVar2);
        local_190 = CONCAT44(*(undefined4 *)(this + 0x2e0),(uint)local_190);
        local_180 = local_1a0;
        uStack_178 = uStack_198;
        std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::push_back
                  ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)(this + 0xe0),
                   (MapPiecesAnimRig *)&local_190);
        lVar8 = *(long *)(this + 0xd8);
      }
      std::vector<MapEventItem,std::allocator<MapEventItem>>::push_back
                ((vector<MapEventItem,std::allocator<MapEventItem>> *)(lVar8 + 8),
                 (MapEventItem *)&local_140);
      uVar19 = std::vector<MapEventItem,std::allocator<MapEventItem>>::back
                         ((vector<MapEventItem,std::allocator<MapEventItem>> *)
                          (*(long *)(this + 0xd8) + 8));
      *(undefined8 *)(this + 0x2b8) = uVar19;
      MapEventItem::~MapEventItem((MapEventItem *)&local_140);
    }
    goto LAB_04aae5ac;
  case 2:
    uVar19 = GetMapEventItemAtLocation(this,&local_1b0,&local_1ac);
    *(undefined8 *)(this + 0x2b8) = uVar19;
    iVar17 = *(int *)(this + 0xf8);
    uVar6 = iVar17 - 1;
    break;
  case 3:
    lVar16 = GetMapEventItemAtLocation(this,&local_1b4,&local_1b8);
    if (lVar16 != 0) {
      local_1a0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(*(long *)(this + 0xd8) + 8));
      iVar17 = 0;
      while( true ) {
        local_140 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(*(long *)(this + 0xd8) + 8));
        bVar4 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_1a0,(__normal_iterator *)&local_140);
        if (!bVar4) break;
        lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1a0);
        if (lVar16 == lVar8) {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xe0);
          local_190 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin(this_00);
          goto LAB_04aae9bc;
        }
        FUN_04aaa8e4((exception_ptr *)&local_1a0);
        iVar17 = iVar17 + 1;
      }
    }
LAB_04aae5ac:
    iVar17 = *(int *)(this + 0xf8);
    uVar6 = iVar17 - 1;
  }
  if ((uVar6 < 2) || (iVar17 == 4)) {
    lVar18 = *(long *)(this + 0xd8);
    iVar17 = 0;
    uVar19 = *(undefined8 *)(lVar18 + 8);
    lVar8 = FUN_04aa9ea4(uVar19,*(undefined8 *)(lVar18 + 0x10));
    for (lVar16 = 0; lVar16 != lVar8; lVar16 = lVar16 + 1) {
      lVar9 = FUN_04aa9ec4(uVar19,lVar16);
      uVar5 = FUN_04aa9e38(*(undefined2 *)(lVar9 + 0x10));
      lVar9 = FUN_04aa9e8c(*(undefined8 *)(lVar18 + 0x60),uVar5);
      if (*(long *)(lVar9 + 8) != 0) {
        lVar9 = (long)iVar17;
        iVar17 = iVar17 + 1;
        puVar10 = (undefined4 *)FUN_04aa9ed0(*(undefined8 *)(this + 0xe0),lVar9);
        *puVar10 = (int)lVar16;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_04aae9bc:
  local_140 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
  bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_190,(__normal_iterator *)&local_140);
  if (!bVar4) goto LAB_04aae9dc;
  this_03 = (MapPiecesAnimRig *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_190);
  if (*(int *)this_03 == iVar17) {
    MapPiecesAnimRig::Clear(this_03);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_140,(__normal_iterator *)&local_190);
    std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::erase
              ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)this_00,local_140);
    goto LAB_04aae9dc;
  }
  FUN_04aaad58((exception_ptr *)&local_190);
  goto LAB_04aae9bc;
LAB_04aae9dc:
  lVar16 = *(long *)(this + 0xd8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_140,(__normal_iterator *)&local_1a0);
  local_1a0 = std::vector<MapEventItem,std::allocator<MapEventItem>>::erase
                        ((vector<MapEventItem,std::allocator<MapEventItem>> *)(lVar16 + 8),local_140
                        );
  goto LAB_04aae5ac;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::sortMapPiece() */

void __thiscall MapEditor::sortMapPiece(MapEditor *this)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  MapEventItem *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  RtWeakPtr *pRVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  float fVar19;
  int local_16c;
  int local_15c;
  undefined8 local_158;
  undefined8 local_150;
  MapEventItem aMStack_140 [312];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_16c = 0;
  MapEventItem::MapEventItem(aMStack_140);
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158);
    uVar15 = *(undefined8 *)(*(long *)(this + 0xd8) + 8);
    local_15c = 0;
    uVar7 = FUN_04aa9ea4(uVar15,*(undefined8 *)(*(long *)(this + 0xd8) + 0x10));
    iVar13 = 0;
    while ((ulong)(long)iVar13 < uVar7) {
      lVar8 = FUN_04aa9ec4(uVar15);
      cVar1 = FUN_04aa9e58(*(undefined1 *)(lVar8 + 0x7c));
      if (local_16c == cVar1) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_158,&local_15c);
        iVar13 = local_15c;
        uVar15 = *(undefined8 *)(*(long *)(this + 0xd8) + 8);
        uVar7 = FUN_04aa9ea4(uVar15,*(undefined8 *)(*(long *)(this + 0xd8) + 0x10));
      }
      iVar13 = iVar13 + 1;
      local_15c = iVar13;
    }
    lVar8 = FUN_04aa9e60(local_158,local_150);
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      lVar14 = 0;
      lVar16 = 1;
      iVar13 = 0;
      if (lVar8 != 0) {
        do {
          uVar15 = local_158;
          lVar17 = *(long *)(this + 0xd8);
          piVar9 = (int *)FUN_04aa9ef8(local_158,lVar14);
          uVar18 = *(undefined8 *)(lVar17 + 8);
          this_00 = (MapEventItem *)FUN_04aa9ec4(uVar18,(long)*piVar9);
          piVar9 = (int *)FUN_04aa9ef8(uVar15,lVar16);
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)FUN_04aa9ec4(uVar18,(long)*piVar9);
          uVar3 = FUN_04aa9e38(*(undefined2 *)(this_00 + 0x10));
          pRVar10 = (RtWeakPtr *)FUN_04aa9e8c(*(undefined8 *)(lVar17 + 0x60),uVar3);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
          if (bVar2) {
            iVar4 = 0;
            lVar17 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
            fVar19 = *(float *)(lVar17 + 4);
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x98));
            iVar6 = (int)(fVar19 - (float)*(int *)(lVar17 + 0x3c) * 0.5);
          }
          else {
            uVar18 = *(undefined8 *)(this + 0xe0);
            lVar11 = FUN_04aa9e98(uVar18,*(undefined8 *)(this + 0xe8));
            uVar15 = local_158;
            lVar17 = 0;
            do {
              if (lVar17 == lVar11) {
                iVar4 = 0;
                iVar6 = iVar4;
                goto LAB_04aaec2c;
              }
              piVar9 = (int *)FUN_04aa9ed0(uVar18,lVar17);
              piVar12 = (int *)FUN_04aa9ef8(uVar15,lVar14);
              lVar17 = lVar17 + 1;
            } while (*piVar9 != *piVar12);
            iVar4 = 1;
            lVar17 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
            iVar6 = (int)(*(float *)(lVar17 + 4) + (float)piVar9[7] * 0.5);
          }
LAB_04aaec2c:
          uVar3 = FUN_04aa9e38(*(undefined2 *)(this_01 + 0x10));
          pRVar10 = (RtWeakPtr *)FUN_04aa9e8c(*(undefined8 *)(*(long *)(this + 0xd8) + 0x60),uVar3);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
          if (bVar2) {
            lVar17 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end(this_01);
            fVar19 = *(float *)(lVar17 + 4);
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this_01 + 0x98));
            iVar5 = (int)(fVar19 + (float)*(int *)(lVar17 + 0x3c) * 0.5);
LAB_04aaecb8:
            bVar2 = false;
          }
          else {
            uVar18 = *(undefined8 *)(this + 0xe0);
            lVar11 = FUN_04aa9e98(uVar18,*(undefined8 *)(this + 0xe8));
            uVar15 = local_158;
            lVar17 = 0;
            do {
              if (lVar17 == lVar11) {
                iVar5 = 0;
                goto LAB_04aaecb8;
              }
              piVar9 = (int *)FUN_04aa9ed0(uVar18,lVar17);
              piVar12 = (int *)FUN_04aa9ef8(uVar15,lVar16);
              lVar17 = lVar17 + 1;
            } while (*piVar9 != *piVar12);
            bVar2 = true;
            lVar17 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_end(this_01);
            iVar5 = (int)(*(float *)(lVar17 + 4) + (float)piVar9[7] * 0.5);
          }
          if (iVar5 < iVar6) {
            lVar17 = 0;
            MapEventItem::operator=(aMStack_140,this_00);
            MapEventItem::operator=(this_00,(MapEventItem *)this_01);
            MapEventItem::operator=((MapEventItem *)this_01,aMStack_140);
            uVar18 = *(undefined8 *)(this + 0xe0);
            lVar11 = FUN_04aa9e98(uVar18,*(undefined8 *)(this + 0xe8));
            uVar15 = local_158;
            if (iVar4 == 0) {
              while (lVar17 != lVar11) {
                piVar9 = (int *)FUN_04aa9ed0(uVar18,lVar17);
                if (((int)lVar16 == *piVar9) && (bVar2)) {
                  lVar17 = lVar17 + 1;
                  piVar12 = (int *)FUN_04aa9ef8(uVar15,lVar14);
                  *piVar9 = *piVar12;
                }
                else {
                  lVar17 = lVar17 + 1;
                }
              }
            }
            else {
              for (; lVar17 != lVar11; lVar17 = lVar17 + 1) {
                piVar9 = (int *)FUN_04aa9ed0(uVar18,lVar17);
                iVar6 = *piVar9;
                if (iVar13 == iVar6) {
                  piVar12 = (int *)FUN_04aa9ef8(uVar15,lVar16);
                  iVar6 = *piVar12;
                  *piVar9 = iVar6;
                }
                if (((int)lVar16 == iVar6) && (bVar2)) {
                  piVar12 = (int *)FUN_04aa9ef8(uVar15,lVar14);
                  *piVar9 = *piVar12;
                }
              }
            }
          }
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + 1;
          iVar13 = (int)lVar14;
        } while (lVar14 != lVar8);
      }
    }
    local_16c = local_16c + 1;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_158);
    if (local_16c == 10) {
      MapEventItem::~MapEventItem(aMStack_140);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::loadMap(std::string, bool) */

void MapEditor::loadMap(MapEditor *param_1,string *param_2)

{
  map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>> *this;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  PVZDB *pPVar5;
  RtDbTable *this_00;
  undefined8 uVar6;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar9;
  RtWeakPtr *this_03;
  Effect_PopAnim *this_04;
  MapEventItem *pMVar10;
  WorldDataManager *this_05;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  Effect_PopAnim *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x22);
  Sexy::RtDbTable::Reset(this_00,true);
  Sexy::Buffer::Buffer(aBStack_38);
  uVar6 = LawnApp::LoadSerializedMapData(gLawnApp,param_2);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  initLoadedWorldResources(param_1);
  lVar11 = *(long *)(param_1 + 0xd8);
  lVar7 = FUN_04aa9ea4(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
  if (lVar7 == 1) {
    std::vector<MapEventItem,std::allocator<MapEventItem>>::clear
              ((vector<MapEventItem,std::allocator<MapEventItem>> *)(lVar11 + 8));
    lVar11 = *(long *)(param_1 + 0xd8);
  }
  iVar12 = 0;
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar11 + 8));
  this = (map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>> *)
         (param_1 + 0x128);
  while( true ) {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(param_1 + 0xd8) + 8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_58);
    if (!bVar2) break;
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    iVar4 = FUN_04aa9e44(*(undefined4 *)(this_02 + 0x14));
    if (iVar4 == 0x11) {
      FUN_04aa9e50(this_02 + 0x7c,2);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    }
    else if (iVar4 == 0x12) {
      FUN_04aa9e50(this_02 + 0x7c,3);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    }
    puVar9 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_02);
    local_70 = *puVar9;
    uVar13 = FUN_04aaa18c((undefined4)local_70);
    local_70 = CONCAT44(local_70._4_4_,uVar13);
    uVar13 = FUN_04aaa18c(local_70._4_4_);
    local_70 = CONCAT44(uVar13,(undefined4)local_70);
    lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    FUN_04aa9e1c(lVar7 + 8,lVar7 + 0xc,&local_70);
    lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    uVar3 = FUN_04aa9e38(*(undefined2 *)(lVar7 + 0x10));
    this_03 = (RtWeakPtr *)FUN_04aa9e8c(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x60),uVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
    if (bVar2) {
      pMVar10 = (MapEventItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar3 = FUN_04aa9e38(*(undefined2 *)(pMVar10 + 0x10));
      pRVar8 = (RtWeakPtrBase *)
               FUN_04aa9e8c(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x60),uVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,pRVar8);
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar3 = FUN_04aa9e38(*(undefined2 *)(lVar7 + 0x10));
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                FUN_04aa9e8c(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x60),uVar3);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      Sexy::Point::Point((Point *)&local_68,-(*(int *)(lVar7 + 0x38) / 2),0);
      MapEventItem::SetImageData
                (pMVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_58,(Point *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
    else {
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar13 = FUN_04aa9e38(*(undefined2 *)(lVar7 + 0x10));
      local_58 = CONCAT44(local_58._4_4_,uVar13) & 0xffffffff0000ffff;
      lVar7 = std::
              map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>::
              operator[](this,(int *)&local_58);
      iVar4 = *(int *)(lVar7 + 0x10);
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar13 = FUN_04aa9e38(*(undefined2 *)(lVar7 + 0x10));
      local_58 = CONCAT44(local_58._4_4_,uVar13) & 0xffffffff0000ffff;
      lVar7 = std::
              map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>::
              operator[](this,(int *)&local_58);
      iVar1 = *(int *)(lVar7 + 0x14);
      this_04 = GameObject::CreateOutsideTable<Effect_PopAnim>();
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar13 = FUN_04aa9e38(*(undefined2 *)(lVar7 + 0x10));
      local_58 = CONCAT44(local_58._4_4_,uVar13) & 0xffffffff0000ffff;
      puVar9 = (undefined8 *)
               std::
               map<int,MapArtAnim,std::less<int>,std::allocator<std::pair<int_const,MapArtAnim>>>::
               operator[](this,(int *)&local_58);
      Effect_PopAnim::CreatePopAnimRig(this_04,(PopAnim *)*puVar9,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_04,true);
      StandaloneEffect::SetVisibility((StandaloneEffect *)this_04,true);
      std::string::string((string *)&local_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(this_04,(RtWeakPtr<Sexy::SoundResource> *)&local_58,0);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_58,(float)(*(int *)(param_1 + 0x50) / 2),
                 (float)(*(int *)(param_1 + 0x54) / 2));
      StandaloneEffect::SetScreenSpaceOrigin
                ((StandaloneEffect *)this_04,(SexyVector2 *)&local_58,700000);
      MapPiecesAnimRig::MapPiecesAnimRig((MapPiecesAnimRig *)&local_58);
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      local_50 = this_04;
      Sexy::Insets::Insets((Insets *)&local_68,0,0,iVar4,iVar1);
      local_48 = local_68;
      uStack_40 = uStack_60;
      pMVar10 = (MapEventItem *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      uVar13 = MapEventItem::GetEventId(pMVar10);
      local_58 = CONCAT44(uVar13,(undefined4)local_58) & 0xffffffffffff;
      std::vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>>::push_back
                ((vector<MapPiecesAnimRig,std::allocator<MapPiecesAnimRig>> *)(param_1 + 0xe0),
                 (MapPiecesAnimRig *)&local_58);
    }
    iVar12 = iVar12 + 1;
    FUN_04aaa8e4((exception_ptr *)&local_78);
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    FUN_04aaa0d0(param_1 + 0x2b0);
  }
  else {
    Sexy::RtDbTable::AllocId
              ((RtWeakPtr<Sexy::SoundResource> *)&local_58,this_00,*(long *)(param_1 + 0xd8),bVar2,1
               ,0);
    Sexy::RtDbTable::SetObjectDeletionMode(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_58,2);
    this_05 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    WorldDataManager::ReplaceWorldDataByName(this_05,param_2,*(WorldData **)(param_1 + 0xd8));
    Sexy::RtId::~RtId((RtId *)&local_58);
  }
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MapEditor::MapEditor() */

void __thiscall MapEditor::MapEditor(MapEditor *this)

{
  char cVar1;
  bool bVar2;
  WorldMapList *this_00;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06947aa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  *(undefined4 *)(this + 0xf8) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x108));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x110));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  MapEventItem::MapEventItem((MapEventItem *)(this + 0x178));
  *(undefined2 *)(this + 0x2c0) = 0;
  Sexy::Point::Point((Point *)(this + 0x2c4));
  Sexy::Point::Point((Point *)(this + 0x2cc));
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2e0) = 2;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  this[0x2e8] = (MapEditor)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x308));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 800));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x338));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x350));
  EditorButton::EditorButton((EditorButton *)(this + 0x368));
  this_00 = ::operator_new(0x58);
  WorldMapList::WorldMapList(this_00);
  *(WorldMapList **)(this + 0x158) = this_00;
  std::string::string((string *)&local_10,"pvp_map");
  loadMap(this,(string *)&local_10,1);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0xd8) + 8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = FUN_04aa9e58(*(undefined1 *)(lVar3 + 0x7c));
    if (*(int *)(this + 0x2dc) < (int)cVar1) {
      *(int *)(this + 0x2dc) = (int)cVar1;
    }
    FUN_04aaa8e4((exception_ptr *)&local_18);
  }
  *(undefined4 *)(this + 0x2d8) = *(undefined4 *)(this + 0x2dc);
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

