// Class: Sexy::PrimeText_SimpleFormatter


/* Sexy::PrimeText_SimpleFormatter::ProcessFormatter(std::wstring, int, EA::Text::TextStyle*,
   Sexy::Color const&, int&) */

TextStyle *
Sexy::PrimeText_SimpleFormatter::ProcessFormatter
          (undefined8 param_1,int param_2,TextStyle *param_3,Color *param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  TextStyle *this;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  this = ::operator_new(700);
  EA::Text::TextStyle::TextStyle(this,param_3);
  piVar4 = (int *)FUN_05476f5c(param_1,(long)(param_2 + 1));
  if (*piVar4 == 0x6f) {
    lVar5 = FUN_054766ec(param_1);
    iVar2 = wcsncmp((wchar_t *)(lVar5 + ((long)param_2 + 1) * 4),L"oldclr",6);
    if (iVar2 == 0) {
      uVar3 = Color::ToInt(param_4);
      *(undefined4 *)(this + 0x268) = uVar3;
    }
  }
  else {
    uVar7 = 0x14;
    lVar5 = (long)param_2 + 1;
    uVar8 = 0;
LAB_0533b47c:
    do {
      piVar4 = (int *)FUN_05476f5c(param_1,lVar5);
      iVar2 = *piVar4;
      iVar6 = iVar2 - 0x30U << (ulong)(uVar7 & 0x1f);
      if (9 < iVar2 - 0x30U) {
        iVar6 = 0;
        if (iVar2 - 0x41U < 6) {
          iVar6 = iVar2 + -0x37 << (ulong)(uVar7 & 0x1f);
        }
        else if (iVar2 - 0x61U < 6) {
          uVar1 = uVar7 & 0x1f;
          uVar7 = uVar7 - 4;
          lVar5 = lVar5 + 1;
          uVar8 = uVar8 + (iVar2 + -0x57 << (ulong)uVar1);
          if (uVar7 == 0xfffffffc) break;
          goto LAB_0533b47c;
        }
      }
      uVar7 = uVar7 - 4;
      lVar5 = lVar5 + 1;
      uVar8 = uVar8 + iVar6;
    } while (uVar7 != 0xfffffffc);
    *(uint *)(this + 0x268) = uVar8 | 0xff000000;
  }
  *param_5 = 8;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText_SimpleFormatter::PrepareFormattedText(Sexy::PrimeTypeface*, float, float, float,
   float, std::wstring, EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color) */

void Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
               (undefined4 param_2,undefined4 param_3,float param_4,float param_5,
               PrimeTypeface *param_1,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               Color *param_9)

{
  long lVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  TextStyle *pTVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_c58 [4];
  int local_c54;
  undefined1 auStack_c50 [8];
  TextStyle *local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38 [53];
  TextStyle aTStack_a90 [616];
  undefined4 local_828;
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24((Color *)&local_c48);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)PrimeTypeface::FitString_Paragraph
                      (param_1,(Color *)&local_c48,(int)param_4,(int)param_5,auStack_c58);
  FUN_05476c50((Color *)&local_c48);
  eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *)local_c38);
  cVar2 = Color::IsInvalid(param_9);
  if (cVar2 == '\0') {
    pTVar3 = (TextStyle *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this);
  }
  else {
    pTVar3 = (TextStyle *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this);
    Color::Color((Color *)&local_c48,*(int *)(pTVar3 + 0x268));
    *(TextStyle **)param_9 = local_c48;
    *(undefined8 *)(param_9 + 8) = uStack_c40;
  }
  iVar12 = 0;
  iVar11 = 0;
  EA::Text::TextStyle::TextStyle(aTStack_a90,pTVar3);
  local_828 = Color::ToInt(param_9);
  PrimeTypeface::PrepareTypesetter
            ((PrimeTypeface *)aTStack_7d0,param_2,param_3,param_4,param_5,this,aTStack_a90,param_7,
             param_8,param_9);
  PrimeText::Instance();
  FUN_05477b24((Color *)&local_c48,param_6);
  lVar4 = PrimeText::String32to16((Color *)&local_c48);
  FUN_05476c50((Color *)&local_c48);
  FUN_05476574(auStack_c50);
  while( true ) {
    uVar10 = (ulong)iVar12;
    uVar5 = FUN_054765d0(param_6);
    iVar9 = iVar12;
    if (uVar5 <= uVar10) break;
    while( true ) {
      piVar6 = (int *)FUN_05476f5c(param_6,uVar10);
      if (*piVar6 == 0x5e) break;
      iVar9 = iVar9 + 1;
      uVar10 = (ulong)iVar9;
      uVar5 = FUN_054765d0(param_6);
      if (uVar5 <= uVar10) goto LAB_0533b9f8;
    }
    if (iVar12 < iVar9) {
      EA::Text::Typesetter::AddTextRun
                (aTStack_7d0,(wchar16 *)(lVar4 + (long)iVar12 * 2),(long)(iVar9 - iVar12));
    }
    iVar11 = iVar11 + 1;
    FUN_05477b24((Color *)&local_c48,param_6);
    pTVar3 = (TextStyle *)ProcessFormatter((Color *)&local_c48,iVar9,aTStack_a90,param_9,&local_c54)
    ;
    FUN_05476c50((Color *)&local_c48);
    EA::Text::Typesetter::AddStyleChange(aTStack_7d0,pTVar3);
    local_c48 = pTVar3;
    eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::push_back
              ((fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *)local_c38,
               &local_c48);
    iVar12 = iVar9 + local_c54;
  }
LAB_0533b9f8:
  if (iVar12 < iVar9) {
    EA::Text::Typesetter::AddTextRun
              (aTStack_7d0,(wchar16 *)(lVar4 + (long)iVar12 * 2),(long)(iVar9 - iVar12));
  }
  uVar7 = PrimeTypeface::PrepareString_Typesetter((PrimeTypeface *)this,aTStack_7d0,param_5,true);
  lVar4 = 0;
  if (iVar11 != 0) {
    do {
      lVar1 = lVar4 + 1;
      puVar8 = (undefined8 *)FUN_0533b3a4(local_c38[0],lVar4);
      AK::FreeHook((void *)*puVar8);
      lVar4 = lVar1;
    } while ((int)lVar1 < iVar11);
  }
  FUN_05476c50(auStack_c50);
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *)local_c38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText_SimpleFormatter::DrawFormattedText(Sexy::Graphics*, Sexy::PrimeTypeface*, float,
   float, float, float, std::wstring, EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color
   const&) */

void Sexy::PrimeText_SimpleFormatter::DrawFormattedText
               (undefined8 param_1,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               uint param_5,undefined8 param_2,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,Insets *param_10)

{
  Graphics *this;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_20,param_7);
  Insets::Insets(aIStack_18,param_10);
  this = (Graphics *)
         PrepareFormattedText
                   (param_1,param_2_00,param_3,param_4,param_2,auStack_20,param_8,param_9,aIStack_18
                   );
  FUN_05476c50(auStack_20);
  PrimeGlyphMesh::Draw(this,param_5,0);
  if (this != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this);
    AK::FreeHook(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

