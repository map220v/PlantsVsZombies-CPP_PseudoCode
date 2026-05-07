// Class: DAtlasSpriteNode


/* DAtlasSpriteNode::DAtlasSpriteNode() */

void __thiscall DAtlasSpriteNode::DAtlasSpriteNode(DAtlasSpriteNode *this)

{
  DSpriteNode::DSpriteNode((DSpriteNode *)this);
  *(undefined ***)this = &PTR__DAtlasSpriteNode_06a22bf0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22f50;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x158));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x168));
  return;
}


/* DAtlasSpriteNode::setResource(std::string const&) */

void __thiscall DAtlasSpriteNode::setResource(DAtlasSpriteNode *this,string *param_1)

{
  (**(code **)(*(long *)this + 0x338))(this,param_1,0);
  return;
}


/* DAtlasSpriteNode::setResource(Sexy::Image*, Sexy::TRect<int> const&) */

DAtlasSpriteNode * __thiscall
DAtlasSpriteNode::setResource(DAtlasSpriteNode *this,Image *param_1,TRect *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)param_2;
  *(Image **)(this + 0x150) = param_1;
  uVar4 = FUN_04f74578((float)iVar1);
  uVar5 = FUN_04f74578((float)*(int *)(param_2 + 4));
  uVar6 = FUN_04f74578((float)*(int *)(param_2 + 8));
  uVar7 = FUN_04f74578((float)*(int *)(param_2 + 0xc));
  (**(code **)(*(long *)this + 0x138))(uVar4,uVar5,uVar6,uVar7,this);
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  *(float *)(this + 0x158) = (float)*(int *)param_2;
  *(float *)(this + 0x15c) = (float)iVar1;
  *(float *)(this + 0x160) = (float)iVar2;
  *(float *)(this + 0x164) = (float)iVar3;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAtlasSpriteNode::getNodeTransform() */

void __thiscall DAtlasSpriteNode::getNodeTransform(DAtlasSpriteNode *this)

{
  DMatrix *this_00;
  char cVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x109] != (DAtlasSpriteNode)0x0) {
    this_00 = (DMatrix *)(this + 0x110);
    fVar3 = *(float *)(this + 0x168) + *(float *)(this + 0xe8);
    fVar2 = *(float *)(this + 0x16c) + *(float *)(this + 0xec);
    if (this[0x80] != (DAtlasSpriteNode)0x0) {
      fVar3 = fVar3 + *(float *)(this + 200);
      fVar2 = fVar2 + *(float *)(this + 0xcc);
    }
    DVec2::DVec2((DVec2 *)&local_10,*(float *)(this + 200) * *(float *)(this + 0xf0),
                 *(float *)(this + 0xcc) * *(float *)(this + 0xf4));
    cVar1 = DVec2::isZero((DVec2 *)(this + 200));
    if (cVar1 == '\0') {
      fVar3 = fVar3 - local_10;
      fVar2 = fVar2 - local_c;
    }
    DVec2::operator+=((DVec2 *)&local_10,(DVec2 *)(this + 0xd0));
    fVar3 = (float)FUN_04f74568(fVar3 + local_10);
    fVar2 = (float)FUN_04f74568(fVar2 + local_c);
    DMatrix::SetMatrix(this_00,fVar3,fVar2,*(float *)(this + 0xf8) * 0.017453292,1.0,1.0);
    fVar2 = (float)FUN_04f74568(-local_10);
    fVar3 = (float)FUN_04f74568(-local_c);
    DMatrix::Translate2(this_00,fVar2,fVar3);
    if ((*(float *)(this + 0xf0) != 1.0) || (*(float *)(this + 0xf4) != 1.0)) {
      DMatrix::Scale2(this_00,*(float *)(this + 0xf0),*(float *)(this + 0xf4));
    }
    this[0x109] = (DAtlasSpriteNode)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this + 0x110);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAtlasSpriteNode::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DAtlasSpriteNode::draw(DAtlasSpriteNode *this,DMatrix *param_1,Graphics *param_2)

{
  Image *pIVar1;
  Insets aIStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  pIVar1 = *(Image **)(this + 0x150);
  local_8 = ___stack_chk_guard;
  if (pIVar1 != (Image *)0x0) {
    Sexy::SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)param_1);
    Sexy::Insets::Insets
              (aIStack_40,(int)*(float *)(this + 0x158),(int)*(float *)(this + 0x15c),
               (int)*(float *)(this + 0x160),(int)*(float *)(this + 0x164));
    Sexy::Graphics::DrawImageMatrix2
              (param_2,pIVar1,aSStack_30,(TRect *)aIStack_40,(Color *)(this + 0x28));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DAtlasSpriteNode::~DAtlasSpriteNode() */

void __thiscall DAtlasSpriteNode::~DAtlasSpriteNode(DAtlasSpriteNode *this)

{
  *(undefined ***)this = &PTR__DAtlasSpriteNode_06a22bf0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22f50;
  DSpriteNode::~DSpriteNode((DSpriteNode *)this);
  return;
}


/* DAtlasSpriteNode::~DAtlasSpriteNode() */

void __thiscall DAtlasSpriteNode::~DAtlasSpriteNode(DAtlasSpriteNode *this)

{
  ~DAtlasSpriteNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAtlasSpriteNode::setResource(std::string const&, bool) */

void __thiscall DAtlasSpriteNode::setResource(DAtlasSpriteNode *this,string *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s;
  LotteryResultProgressBar *this_00;
  undefined4 uVar4;
  int local_40;
  int local_3c;
  DString aDStack_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_38,param_1);
  DString::makeUpper();
  DString::operator=(aDStack_38,(DString *)&local_18);
  DString::~DString((DString *)&local_18);
  lVar3 = DString::findString(aDStack_38,"IMAGE_");
  if (lVar3 == -1) {
    DString::replace((char *)aDStack_38,"/");
    ::operator+("IMAGE_",(DString *)&local_28);
    DString::operator=(aDStack_38,(DString *)&local_18);
    DString::~DString((DString *)&local_18);
    DString::~DString((DString *)&local_28);
  }
  __s = (char *)DString::c_str(aDStack_38);
  std::string::string((string *)&local_18,__s);
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    Sexy::Insets::Insets((Insets *)&local_28);
    if (param_2) {
      Sexy::BaseResource::GetRtId();
      GetImageOffset(&local_40,(DString *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      local_3c = local_3c + 1;
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_40,&local_3c,_FUN_04f79c48);
      uVar4 = FUN_04f74578((float)local_40);
      *(undefined4 *)(this + 0x168) = uVar4;
      uVar4 = FUN_04f74578((float)local_3c);
      *(undefined4 *)(this + 0x16c) = uVar4;
    }
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    local_28 = local_18;
    uStack_20 = uStack_10;
    this = (DAtlasSpriteNode *)
           (**(code **)(*(long *)this + 0x340))(this,this_00,(Insets *)&local_28);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAtlasSpriteNode::setResource(std::string const&, Sexy::TRect<int> const&) */

void __thiscall DAtlasSpriteNode::setResource(DAtlasSpriteNode *this,string *param_1,TRect *param_2)

{
  long lVar1;
  char *__s;
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_38,param_1);
  DString::makeUpper();
  DString::operator=(aDStack_38,aDStack_18);
  DString::~DString(aDStack_18);
  lVar1 = DString::findString(aDStack_38,"IMAGE_");
  if (lVar1 == -1) {
    DString::replace((char *)aDStack_38,"/");
    ::operator+("IMAGE_",aDStack_28);
    DString::operator=(aDStack_38,aDStack_18);
    DString::~DString(aDStack_18);
    DString::~DString(aDStack_28);
  }
  __s = (char *)DString::c_str(aDStack_38);
  std::string::string((string *)aDStack_18,__s);
  lVar1 = StringHelper::ToImage((string *)aDStack_18,false);
  std::string::~string((string *)aDStack_18);
  nop();
  if (lVar1 != 0) {
    this = (DAtlasSpriteNode *)(**(code **)(*(long *)this + 0x340))(this,lVar1,param_2);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

