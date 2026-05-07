// Class: DStringNode


/* DStringNode::setPrimeTypeface(Sexy::PrimeTypeface*) */

void __thiscall DStringNode::setPrimeTypeface(DStringNode *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0x168) = param_1;
  this[0x170] = (DStringNode)0x1;
  return;
}


/* DStringNode::setHorizAlignment(EA::Text::HAlignment) */

void __thiscall DStringNode::setHorizAlignment(DStringNode *this,int param_2)

{
  if (*(int *)(this + 0x160) != param_2) {
    *(int *)(this + 0x160) = param_2;
    this[0x170] = (DStringNode)0x1;
  }
  return;
}


/* DStringNode::setVertAlignment(EA::Text::VAlignment) */

void __thiscall DStringNode::setVertAlignment(DStringNode *this,int param_2)

{
  if (*(int *)(this + 0x164) != param_2) {
    *(int *)(this + 0x164) = param_2;
    this[0x170] = (DStringNode)0x1;
  }
  return;
}


/* DStringNode::setPrimeTypeface(PrimeText_PotentialTypeface*) */

void __thiscall
DStringNode::setPrimeTypeface(DStringNode *this,PrimeText_PotentialTypeface *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)this + 0x340);
  uVar1 = PrimeText_PotentialTypeface::Typeface(param_1);
  (*pcVar2)(this,uVar1);
  return;
}


/* DStringNode::getStringPostion() */

void DStringNode::getStringPostion(void)

{
  long *in_x0;
  code *pcVar1;
  
  pcVar1 = *(code **)(*in_x0 + 0x378);
  DString::operator_cast_to_char_((DString *)(in_x0 + 0x2a));
  (*pcVar1)();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNode::setStringWithFile(char const*) */

void __thiscall DStringNode::setStringWithFile(DStringNode *this,char *param_1)

{
  undefined8 uVar1;
  wstring *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,param_1);
  Sexy::UTF8StringToSexyString(asStack_18);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::SexyStringToUTF8String(aSStack_20,extraout_x1);
  uVar1 = FUN_0547429c(awStack_10);
  uVar1 = (**(code **)(*(long *)this + 0x338))(this,uVar1);
  std::string::~string((string *)awStack_10);
  FUN_05476c50(aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* DStringNode::setString(char const*) */

DStringNode * __thiscall DStringNode::setString(DStringNode *this,char *param_1)

{
  char cVar1;
  
  cVar1 = DString::operator!=((DString *)(this + 0x150),param_1);
  if (cVar1 != '\0') {
    DString::operator=((DString *)(this + 0x150),param_1);
    this[0x170] = (DStringNode)0x1;
  }
  return this;
}


/* DStringNode::getString() const */

void DStringNode::getString(void)

{
  long in_x0;
  
  DString::operator_cast_to_string((DString *)(in_x0 + 0x150));
  return;
}


/* DStringNode::getFontSize() */

undefined1  [16] __thiscall DStringNode::getFontSize(DStringNode *this)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((*(undefined8 **)(this + 0x168) != (undefined8 *)0x0) &&
     (plVar1 = (long *)FUN_04f7d848(**(undefined8 **)(this + 0x168)), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x98))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNode::getFontName() */

void DStringNode::getFontName(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  long *plVar3;
  string *in_x8;
  FontDescription *this;
  string asStack_88 [8];
  short local_80;
  undefined2 local_7e [59];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(undefined8 **)(in_x0 + 0x168) != (undefined8 *)0x0) &&
     (lVar2 = FUN_04f7d848(**(undefined8 **)(in_x0 + 0x168)), lVar2 != 0)) {
    this = (FontDescription *)&local_80;
    EA::Text::FontDescription::FontDescription(this);
    plVar3 = (long *)FUN_04f7d848(**(undefined8 **)(in_x0 + 0x168));
    cVar1 = (**(code **)(*plVar3 + 0x60))(plVar3,this);
    if (cVar1 != '\0') {
      Set8BytesTo0(asStack_88);
      while (local_80 != 0) {
        FUN_05475c50(asStack_88);
        this = this + 2;
        local_80 = *(short *)this;
      }
      FUN_05474148();
      std::string::~string(asStack_88);
      goto LAB_04f7d968;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_04f7d968:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNode::getStringPostion(char const*) */

void DStringNode::getStringPostion(char *param_1)

{
  int iVar1;
  long lVar2;
  char *in_x1;
  string *extraout_x1;
  undefined8 uVar3;
  float fVar4;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_20)
  ;
  if (*(long *)(param_1 + 0x168) == 0) goto LAB_04f7daec;
  std::string::string(asStack_18,in_x1);
  nop();
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  Sexy::UTF8StringToWString((Sexy *)asStack_18,extraout_x1);
  Sexy::PrimeTypeface::SizeString_Paragraph(0,uVar3,auStack_10,&local_28,&local_24);
  FUN_05476c50(auStack_10);
  lVar2 = (**(code **)(*(long *)param_1 + 0x1f8))(param_1);
  iVar1 = *(int *)(param_1 + 0x160);
  if (iVar1 == 1) {
    fVar4 = (float)FUN_04f7d9e4(*(undefined4 *)(lVar2 + 8));
    local_20 = (fVar4 + (float)local_28) * 0.5;
LAB_04f7dab4:
    iVar1 = *(int *)(param_1 + 0x164);
  }
  else {
    if (iVar1 == 0) {
      local_20 = (float)local_28;
      goto LAB_04f7dab4;
    }
    if (iVar1 != 2) goto LAB_04f7dab4;
    local_20 = (float)FUN_04f7d9e4(*(undefined4 *)(lVar2 + 8));
    iVar1 = *(int *)(param_1 + 0x164);
  }
  if (iVar1 == 1) {
    fVar4 = (float)FUN_04f7d9e4(*(undefined4 *)(lVar2 + 0xc));
    local_1c = (fVar4 - (float)local_24) * 0.5;
    std::string::~string(asStack_18);
  }
  else if (iVar1 == 0) {
    local_1c = 0.0;
    std::string::~string(asStack_18);
  }
  else {
    if (iVar1 == 2) {
      local_1c = (float)FUN_04f7d9e4(*(undefined4 *)(lVar2 + 0xc));
      local_1c = local_1c - (float)local_24;
    }
    std::string::~string(asStack_18);
  }
LAB_04f7daec:
  fVar4 = (float)FUN_04f7d9d0();
  DVec2::operator*((DVec2 *)&local_20,fVar4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DStringNode::DStringNode() */

void __thiscall DStringNode::DStringNode(DStringNode *this)

{
  undefined8 uVar1;
  
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined ***)this = &PTR__DStringNode_06a23a80;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a23e18;
  DString::DString((DString *)(this + 0x150));
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x168) = uVar1;
  this[0x170] = (DStringNode)0x1;
  return;
}


/* DStringNode::clean() */

void __thiscall DStringNode::clean(DStringNode *this)

{
  PrimeGlyphMesh *this_00;
  
  this_00 = *(PrimeGlyphMesh **)(this + 0x178);
  if (this_00 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)(this + 0x178) = 0;
  }
  this[0x170] = (DStringNode)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNode::updateString() */

void __thiscall DStringNode::updateString(DStringNode *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *__s;
  PrimeGlyphMesh *this_00;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x170] != (DStringNode)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*(long *)this + 0x1f8))();
    clean(this);
    this_00 = *(PrimeGlyphMesh **)(this + 0x178);
    if (this_00 != (PrimeGlyphMesh *)0x0) {
      Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(this_00);
      AK::FreeHook(this_00);
    }
    uVar4 = *(undefined8 *)(this + 0x168);
    uVar5 = FUN_04f7d9e4(*puVar3);
    uVar6 = FUN_04f7d9e4(puVar3[1]);
    uVar7 = FUN_04f7d9e4(puVar3[2]);
    uVar8 = FUN_04f7d9e4(puVar3[3]);
    __s = (char *)DString::c_str((DString *)(this + 0x150));
    std::string::string(asStack_28,__s);
    Sexy::UTF8StringToSexyString(asStack_28);
    uVar1 = *(undefined4 *)(this + 0x160);
    uVar2 = *(undefined4 *)(this + 0x164);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x28));
    uVar4 = Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                      (uVar5,uVar6,uVar7,uVar8,uVar4,auStack_20,uVar1,uVar2,aIStack_18);
    FUN_05476c50(auStack_20);
    std::string::~string(asStack_28);
    nop();
    *(undefined8 *)(this + 0x178) = uVar4;
    this[0x170] = (DStringNode)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DStringNode::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DStringNode::draw(DStringNode *this,DMatrix *param_1,Graphics *param_2)

{
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateString(this);
  if (*(PrimeGlyphMesh **)(this + 0x178) != (PrimeGlyphMesh *)0x0) {
    local_40 = *(undefined4 *)(param_1 + 0x10);
    local_34 = *(undefined4 *)(param_1 + 0x14);
    local_48 = *(float *)param_1;
    local_44 = *(undefined4 *)(param_1 + 8);
    local_3c = *(undefined4 *)(param_1 + 4);
    local_38 = *(undefined4 *)(param_1 + 0xc);
    Sexy::PrimeGlyphMesh::SetMVPMatrix(*(PrimeGlyphMesh **)(this + 0x178),&local_48);
    Sexy::PrimeGlyphMesh::Draw(*(Graphics **)(this + 0x178),(uint)param_2,0);
  }
  clean(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DStringNode::~DStringNode() */

void __thiscall DStringNode::~DStringNode(DStringNode *this)

{
  *(undefined ***)this = &PTR__DStringNode_06a23a80;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a23e18;
  clean(this);
  DString::~DString((DString *)(this + 0x150));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DStringNode::~DStringNode() */

void __thiscall DStringNode::~DStringNode(DStringNode *this)

{
  ~DStringNode(this);
  AK::FreeHook(this);
  return;
}


/* DStringNode::setContextRect(float, float, float, float) */

DStringNode * __thiscall
DStringNode::setContextRect
          (DStringNode *this,float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)(**(code **)(*(long *)this + 0x1f8))();
  if ((((*pfVar1 != param_1) || (pfVar1[1] != param_2)) || (pfVar1[2] != param_3)) ||
     (pfVar1[3] != param_4)) {
    this[0x170] = (DStringNode)0x1;
  }
  DTransformNode::setContextRect((DTransformNode *)this,param_1,param_2,param_3,param_4);
  return this;
}

