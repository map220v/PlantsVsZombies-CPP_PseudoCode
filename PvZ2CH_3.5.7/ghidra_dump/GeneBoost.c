// Class: GeneBoost


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneBoost::GetFormulaValue(int, int) */

void __thiscall GeneBoost::GetFormulaValue(GeneBoost *this,int param_1,int param_2)

{
  ulong uVar1;
  ArtifactUtils *this_00;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  lVar3 = ___stack_chk_guard;
  uVar1 = FUN_037f9fbc(uVar4,*(undefined8 *)(this + 0x10));
  iVar2 = (int)lVar3;
  uVar5 = 0;
  if ((ulong)(long)param_2 < uVar1) {
    this_00 = (ArtifactUtils *)FUN_037f9fc8(0,uVar4);
    std::string::string(asStack_10,"level");
    ArtifactUtils::ReplaceParameterEx(this_00,asStack_10,(string *)(ulong)(uint)param_1,iVar2);
    std::string::~string(asStack_10);
    nop();
    uVar5 = ArtifactUtils::GetExpressionResult(asStack_18);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneBoost::GetDescription(int) */

void GeneBoost::GetDescription(int param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  string *this;
  long lVar3;
  long lVar4;
  ulong uVar5;
  wchar_t *pwVar6;
  int *piVar7;
  int in_w1;
  wstring *in_x8;
  ulong uVar8;
  float fVar9;
  float fVar10;
  string asStack_1a0 [8];
  ulong local_198;
  string asStack_190 [8];
  string asStack_188 [8];
  wstring awStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [256];
  long local_8;
  
  this = (string *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(this);
  TodStringTranslate(awStack_180);
  FUN_05476c50(awStack_180);
  lVar3 = FUN_037f9fbc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar8 = 0;
  if (lVar3 != 0) {
    do {
      uVar1 = uVar8 + 1;
      Set8BytesTo0(asStack_1a0);
      local_198 = uVar1;
      std::to_string<unsigned_long>(&local_198);
      std::operator+("{Param_",asStack_190);
      std::operator+(asStack_188,"}");
      FUN_05474278(asStack_1a0,awStack_180);
      std::string::~string((string *)awStack_180);
      std::string::~string(asStack_188);
      std::string::~string(asStack_190);
      Sexy::ToWString(asStack_1a0);
      lVar3 = FUN_054767d0();
      lVar4 = FUN_054765c4(asStack_190);
      uVar5 = FUN_054765c4();
      if ((ulong)(lVar4 + lVar3) < uVar5) {
        FUN_054767d0();
        FUN_054765c4(asStack_190);
        piVar7 = (int *)FUN_05476f5c();
        if (*piVar7 != 0x25) goto LAB_037fa7e4;
        fVar10 = 100.0;
      }
      else {
LAB_037fa7e4:
        fVar10 = 1.0;
      }
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      FUN_037fa1cc(auStack_108);
      std::ios_base::setf(auStack_110,4);
      fVar9 = (float)GetFormulaValue((GeneBoost *)this,in_w1,(int)uVar8);
      FUN_05460f98(fVar9 * fVar10,auStack_168);
      FUN_05462824(awStack_180,auStack_178);
      FUN_05474278(asStack_1a0,awStack_180);
      std::string::~string((string *)awStack_180);
      Sexy::ToWString(asStack_1a0);
      pwVar6 = (wchar_t *)FUN_054766ec(asStack_190);
      TodReplaceString(in_x8,pwVar6,(wstring *)asStack_188);
      FUN_054766c8();
      FUN_05476c50(awStack_180);
      FUN_05476c50(asStack_188);
      FUN_054617bc(auStack_178);
      FUN_05476c50(asStack_190);
      std::string::~string(asStack_1a0);
      uVar5 = FUN_037f9fbc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
      uVar8 = uVar1;
    } while (uVar1 < uVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneBoost::GeneBoost() */

void __thiscall GeneBoost::GeneBoost(GeneBoost *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* GeneBoost::~GeneBoost() */

void __thiscall GeneBoost::~GeneBoost(GeneBoost *this)

{
  std::vector<PlantSkillBoost,std::allocator<PlantSkillBoost>>::~vector
            ((vector<PlantSkillBoost,std::allocator<PlantSkillBoost>> *)(this + 0x38));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}

