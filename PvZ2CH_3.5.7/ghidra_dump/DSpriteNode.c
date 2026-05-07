// Class: DSpriteNode


/* DSpriteNode::TEMPNAMEPLACEHOLDERVALUE(DSpriteNode const&) */

DSpriteNode * __thiscall DSpriteNode::operator=(DSpriteNode *this,DSpriteNode *param_1)

{
  DTransformNode::operator=((DTransformNode *)this,(DTransformNode *)param_1);
  *(undefined8 *)(this + 0x150) = *(undefined8 *)(param_1 + 0x150);
  return this;
}


/* DSpriteNode::setResource(Sexy::Image*) */

DSpriteNode * __thiscall DSpriteNode::setResource(DSpriteNode *this,Image *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(Image **)(this + 0x150) = param_1;
  pcVar2 = *(code **)(*(long *)this + 0x138);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  uVar3 = FUN_04f74578((float)iVar1);
  iVar1 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  uVar4 = FUN_04f74578((float)iVar1);
  (*pcVar2)(0,0,uVar3,uVar4,this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteNode::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DSpriteNode::draw(DSpriteNode *this,DMatrix *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  float fVar6;
  Insets aIStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  pIVar5 = *(Image **)(this + 0x150);
  local_8 = ___stack_chk_guard;
  if (pIVar5 != (Image *)0x0) {
    Sexy::SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)param_1);
    fVar6 = (float)FUN_04f74568(*(undefined4 *)(this + 0xd8));
    iVar1 = FloatRoundToInt(fVar6);
    fVar6 = (float)FUN_04f74568(*(undefined4 *)(this + 0xdc));
    iVar2 = FloatRoundToInt(fVar6);
    fVar6 = (float)FUN_04f74568(*(undefined4 *)(this + 0xe0));
    iVar3 = FloatRoundToInt(fVar6);
    fVar6 = (float)FUN_04f74568(*(undefined4 *)(this + 0xe4));
    iVar4 = FloatRoundToInt(fVar6);
    Sexy::Insets::Insets(aIStack_40,iVar1,iVar2,iVar3,iVar4);
    Sexy::Graphics::DrawImageMatrix2
              (param_2,pIVar5,aSStack_30,(TRect *)aIStack_40,(Color *)(this + 0x28));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteNode::DSpriteNode() */

void __thiscall DSpriteNode::DSpriteNode(DSpriteNode *this)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR__DSpriteNode_06a22870;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22bb8;
  DVec2::DVec2(aDStack_10,0.5,0.5);
  DTransformNode::setAnchorPoint((DTransformNode *)this,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DSpriteNode::~DSpriteNode() */

void __thiscall DSpriteNode::~DSpriteNode(DSpriteNode *this)

{
  *(undefined ***)this = &PTR__DSpriteNode_06a22870;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22bb8;
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DSpriteNode::~DSpriteNode() */

void __thiscall DSpriteNode::~DSpriteNode(DSpriteNode *this)

{
  ~DSpriteNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteNode::setResource(std::string const&) */

void __thiscall DSpriteNode::setResource(DSpriteNode *this,string *param_1)

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
    this = (DSpriteNode *)(**(code **)(*(long *)this + 0x330))(this,lVar1);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

