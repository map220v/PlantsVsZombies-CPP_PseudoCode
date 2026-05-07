// Class: DSprite9SliceNode


/* DSprite9SliceNode::DSprite9SliceNode() */

void __thiscall DSprite9SliceNode::DSprite9SliceNode(DSprite9SliceNode *this)

{
  DSpriteNode::DSpriteNode((DSpriteNode *)this);
  *(undefined ***)this = &PTR__DSprite9SliceNode_06a22f90;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a232d8;
  return;
}


/* DSprite9SliceNode::setResource(Sexy::Image*) */

void __thiscall DSprite9SliceNode::setResource(DSprite9SliceNode *this,Image *param_1)

{
  *(Image **)(this + 0x150) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSprite9SliceNode::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DSprite9SliceNode::draw(DSprite9SliceNode *this,DMatrix *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Graphics3D *pGVar5;
  TRect *pTVar6;
  Image *pIVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  Insets aIStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x150) != 0) {
    Sexy::Graphics::PushState(param_2);
    pGVar5 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
    Sexy::SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)param_1);
    Sexy::Graphics3D::PushTransform(pGVar5,aSStack_30,true);
    Sexy::Graphics::SetColor(param_2,(Color *)(this + 0x28));
    pTVar6 = (TRect *)(**(code **)(*(long *)this + 0x1f8))(this);
    Sexy::TRect<float>::TRect((TRect<float> *)&local_60,pTVar6);
    local_60 = (float)FUN_04f74568(local_60);
    local_5c = (float)FUN_04f74568(local_5c);
    local_58 = (float)FUN_04f74568(local_58);
    local_54 = (float)FUN_04f74568(local_54);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x150));
    iVar1 = iVar1 / 3;
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x150));
    fVar11 = (float)iVar1;
    iVar2 = iVar2 + iVar1 * -2;
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x150));
    iVar3 = iVar3 / 3;
    iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x150));
    fVar10 = (float)iVar3;
    iVar4 = iVar4 + iVar3 * -2;
    iVar8 = (int)((local_58 - fVar11) - fVar11);
    iVar9 = (int)((local_54 - fVar10) - fVar10);
    Sexy::Insets::Insets((Insets *)&local_50,0,0,iVar1,iVar3);
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x150),(int)local_60,(int)local_5c,(TRect *)&local_50);
    pIVar7 = *(Image **)(this + 0x150);
    local_50 = iVar1;
    local_48 = iVar2;
    Sexy::Insets::Insets(aIStack_40,(int)(fVar11 + local_60),(int)local_5c,iVar8,iVar3);
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)aIStack_40,(TRect *)&local_50);
    local_50 = local_50 + iVar2;
    local_48 = iVar1;
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x150),(int)((local_58 + local_60) - fVar11),(int)local_5c
               ,(TRect *)&local_50);
    local_50 = 0;
    pIVar7 = *(Image **)(this + 0x150);
    local_4c = iVar3;
    local_48 = iVar1;
    local_44 = iVar4;
    Sexy::Insets::Insets(aIStack_40,(int)local_60,(int)(fVar10 + local_5c),iVar1,iVar9);
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)aIStack_40,(TRect *)&local_50);
    pIVar7 = *(Image **)(this + 0x150);
    local_50 = iVar1;
    local_48 = iVar2;
    Sexy::Insets::Insets(aIStack_40,(int)(fVar11 + local_60),(int)(fVar10 + local_5c),iVar8,iVar9);
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)aIStack_40,(TRect *)&local_50);
    pIVar7 = *(Image **)(this + 0x150);
    local_50 = local_50 + iVar2;
    local_48 = iVar1;
    Sexy::Insets::Insets
              (aIStack_40,(int)((local_58 + local_60) - fVar11),(int)(fVar10 + local_5c),iVar1,iVar9
              );
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)aIStack_40,(TRect *)&local_50);
    local_50 = 0;
    local_4c = local_4c + iVar4;
    local_48 = iVar1;
    local_44 = iVar3;
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x150),(int)local_60,(int)((local_54 + local_5c) - fVar10)
               ,(TRect *)&local_50);
    pIVar7 = *(Image **)(this + 0x150);
    local_50 = iVar1;
    local_48 = iVar2;
    Sexy::Insets::Insets
              (aIStack_40,(int)(fVar11 + local_60),(int)((local_54 + local_5c) - fVar10),iVar8,iVar3
              );
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)aIStack_40,(TRect *)&local_50);
    local_50 = local_50 + iVar2;
    local_48 = iVar1;
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x150),(int)((local_58 + local_60) - fVar11),
               (int)((local_54 + local_5c) - fVar10),(TRect *)&local_50);
    pGVar5 = (Graphics3D *)Sexy::Graphics::Get3D(param_2);
    Sexy::Graphics3D::PopTransform(pGVar5);
    Sexy::Graphics::PopState(param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DSprite9SliceNode::~DSprite9SliceNode() */

void __thiscall DSprite9SliceNode::~DSprite9SliceNode(DSprite9SliceNode *this)

{
  *(undefined ***)this = &PTR__DSprite9SliceNode_06a22f90;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a232d8;
  DSpriteNode::~DSpriteNode((DSpriteNode *)this);
  return;
}


/* DSprite9SliceNode::~DSprite9SliceNode() */

void __thiscall DSprite9SliceNode::~DSprite9SliceNode(DSprite9SliceNode *this)

{
  ~DSprite9SliceNode(this);
  AK::FreeHook(this);
  return;
}


/* DSprite9SliceNode::setResource(std::string const&) */

DSprite9SliceNode * __thiscall
DSprite9SliceNode::setResource(DSprite9SliceNode *this,string *param_1)

{
  DSpriteNode::setResource((DSpriteNode *)this,param_1);
  return this;
}

