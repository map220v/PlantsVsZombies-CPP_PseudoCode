// Class: DTransformNode


/* DTouchLayer* DTransformNode::getChildRecursionByName<DTouchLayer*>(std::string const&) */

DTouchLayer * DTransformNode::getChildRecursionByName<DTouchLayer*>(string *param_1)

{
  DTouchLayer *pDVar1;
  
  pDVar1 = (DTouchLayer *)(**(code **)(*(long *)param_1 + 0x58))();
  return pDVar1;
}


/* DTransformNode::getTag() const */

undefined4 __thiscall DTransformNode::getTag(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xfc);
}


/* DTransformNode::getZOrder() const */

undefined4 __thiscall DTransformNode::getZOrder(DTransformNode *this)

{
  return *(undefined4 *)(this + 0x100);
}


/* DTransformNode::getChildren() */

DTransformNode * __thiscall DTransformNode::getChildren(DTransformNode *this)

{
  return this + 0xa0;
}


/* DTransformNode::getParent() const */

undefined8 __thiscall DTransformNode::getParent(DTransformNode *this)

{
  return *(undefined8 *)(this + 0x98);
}


/* DTransformNode::getChildrenCount() const */

void __thiscall DTransformNode::getChildrenCount(DTransformNode *this)

{
  DArray<DTransformNode*>::size((DArray<DTransformNode*> *)(this + 0xa0));
  return;
}


/* DTransformNode::TEMPNAMEPLACEHOLDERVALUE(DTransformNode const&) */

DTransformNode * __thiscall DTransformNode::operator=(DTransformNode *this,DTransformNode *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DTransformNode DVar6;
  DTransformNode DVar7;
  DTransformNode DVar8;
  DTransformNode DVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_03575214(this,*(undefined4 *)(param_1 + 8));
  DColor::operator=((DColor *)(this + 0x10),(DColor *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  DComponentContainer::operator=
            ((DComponentContainer *)(this + 0x40),(DComponentContainer *)(param_1 + 0x40));
  DVar6 = param_1[0x80];
  DVar7 = param_1[0x81];
  this[0x82] = param_1[0x82];
  this[0x80] = DVar6;
  this[0x81] = DVar7;
  thunk_FUN_05475e00(this + 0x88,param_1 + 0x88);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x90) = uVar11;
  DArray<DTransformNode*>::operator=
            ((DArray<DTransformNode*> *)(this + 0xa0),(DArray *)(param_1 + 0xa0));
  uVar13 = *(undefined8 *)(param_1 + 0xc0);
  uVar11 = *(undefined8 *)(param_1 + 0xd8);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uVar12 = *(undefined8 *)(param_1 + 200);
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xc0) = uVar13;
  *(undefined8 *)(this + 200) = uVar12;
  *(undefined8 *)(this + 0xd0) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x110);
  uVar12 = *(undefined8 *)(param_1 + 0x118);
  uVar13 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xd8) = uVar11;
  *(undefined8 *)(this + 0xe0) = uVar1;
  uVar11 = *(undefined8 *)(param_1 + 0xf0);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x100);
  uVar5 = *(undefined4 *)(param_1 + 0x104);
  DVar6 = param_1[0x108];
  DVar7 = param_1[0x109];
  DVar8 = param_1[0x10a];
  DVar9 = param_1[0x10b];
  this[0x10c] = param_1[0x10c];
  *(undefined8 *)(this + 0xe8) = uVar13;
  *(undefined8 *)(this + 0xf0) = uVar11;
  *(undefined4 *)(this + 0xfc) = uVar3;
  *(undefined4 *)(this + 0x100) = uVar4;
  *(undefined4 *)(this + 0x104) = uVar5;
  this[0x108] = DVar6;
  this[0x109] = DVar7;
  this[0x10a] = DVar8;
  this[0x10b] = DVar9;
  *(undefined4 *)(this + 0xf8) = uVar2;
  *(undefined8 *)(this + 0x110) = uVar10;
  *(undefined8 *)(this + 0x118) = uVar12;
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  DVar6 = param_1[0x148];
  uVar11 = *(undefined8 *)(param_1 + 0x130);
  uVar10 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x130) = uVar11;
  *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x140) = uVar10;
  this[0x148] = DVar6;
  return this;
}


/* DTransformNode::isNoCast() const */

DTransformNode __thiscall DTransformNode::isNoCast(DTransformNode *this)

{
  return this[0x148];
}


/* DButton* DTransformNode::getChildByTag<DButton*>(int) */

DButton * DTransformNode::getChildByTag<DButton*>(int param_1)

{
  DButton *pDVar1;
  
  pDVar1 = (DButton *)(**(code **)(*(long *)(ulong)(uint)param_1 + 0x38))();
  return pDVar1;
}


/* DTransformNode::getScaleY() const */

undefined4 __thiscall DTransformNode::getScaleY(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xf4);
}


/* DTransformNode::setRenderEffect(Sexy::RenderEffectDefinition*) */

void __thiscall
DTransformNode::setRenderEffect(DTransformNode *this,RenderEffectDefinition *param_1)

{
  *(RenderEffectDefinition **)(this + 0xb8) = param_1;
  return;
}


/* DTransformNode::___setCascadeColor(float, float, float) */

void __thiscall
DTransformNode::___setCascadeColor(DTransformNode *this,float param_1,float param_2,float param_3)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0x250);
  fVar5 = (float)NEON_fminnm((float)*(int *)(this + 0x18) * 0.003921569 * param_1,0x3f800000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar4 = (float)NEON_fminnm((float)*(int *)(this + 0x1c) * 0.003921569 * param_2,0x3f800000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = (float)NEON_fminnm((float)*(int *)(this + 0x20) * 0.003921569 * param_3,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(int *)(this + 0x28) = (int)(fVar5 * 255.0);
  *(int *)(this + 0x2c) = (int)(fVar4 * 255.0);
  *(int *)(this + 0x30) = (int)(fVar3 * 255.0);
  cVar1 = (*pcVar2)();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x310))(fVar5,fVar4,fVar3,this);
  }
  return;
}


/* DTransformNode::___setCascadeOpacity(float) */

void __thiscall DTransformNode::___setCascadeOpacity(DTransformNode *this,float param_1)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  
  pcVar2 = *(code **)(*(long *)this + 0x250);
  fVar3 = (float)NEON_fminnm((float)*(int *)(this + 0x24) * 0.003921569 * param_1,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(int *)(this + 0x34) = (int)(fVar3 * 255.0);
  cVar1 = (*pcVar2)();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x318))(fVar3,this);
  }
  return;
}


/* DTransformNode::setCascadeColorEnabled(bool) */

DTransformNode * __thiscall
DTransformNode::setCascadeColorEnabled(DTransformNode *this,bool param_1)

{
  if ((this[0x81] != (DTransformNode)param_1) && (this[0x81] = (DTransformNode)param_1, param_1)) {
    (**(code **)(*(long *)this + 0x310))
              ((float)*(int *)(this + 0x28) * 0.003921569,(float)*(int *)(this + 0x2c) * 0.003921569
               ,(float)*(int *)(this + 0x30) * 0.003921569);
    return this;
  }
  return this;
}


/* DTransformNode::isCascadeColorEnabled() const */

DTransformNode __thiscall DTransformNode::isCascadeColorEnabled(DTransformNode *this)

{
  return this[0x81];
}


/* DTransformNode::setCascadeOpacityEnabled(bool) */

DTransformNode * __thiscall
DTransformNode::setCascadeOpacityEnabled(DTransformNode *this,bool param_1)

{
  if ((this[0x82] != (DTransformNode)param_1) && (this[0x82] = (DTransformNode)param_1, param_1)) {
    (**(code **)(*(long *)this + 0x318))((float)*(int *)(this + 0x34) * 0.003921569);
    return this;
  }
  return this;
}


/* DTransformNode::isCascadeOpacityEnabled() const */

DTransformNode __thiscall DTransformNode::isCascadeOpacityEnabled(DTransformNode *this)

{
  return this[0x82];
}


/* DTransformNode::setColor(Sexy::Color const&) */

DTransformNode * __thiscall DTransformNode::setColor(DTransformNode *this,Color *param_1)

{
  DColor::setColor((DColor *)(this + 0x10),param_1);
  if (this[0x81] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x310))
              ((float)*(int *)(this + 0x28) * 0.003921569,(float)*(int *)(this + 0x2c) * 0.003921569
               ,(float)*(int *)(this + 0x30) * 0.003921569,this);
  }
  if (this[0x82] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x318))((float)*(int *)(this + 0x34) * 0.003921569,this);
  }
  return this;
}


/* DTransformNode::setColor(int, int, int, int) */

DTransformNode * __thiscall
DTransformNode::setColor(DTransformNode *this,int param_1,int param_2,int param_3,int param_4)

{
  DColor::setColor((DColor *)(this + 0x10),param_1,param_2,param_3,param_4);
  if (this[0x81] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x310))
              ((float)*(int *)(this + 0x28) * 0.003921569,(float)*(int *)(this + 0x2c) * 0.003921569
               ,(float)*(int *)(this + 0x30) * 0.003921569,this);
  }
  if (this[0x82] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x318))((float)*(int *)(this + 0x34) * 0.003921569,this);
  }
  return this;
}


/* DTransformNode::setRGB(int, int, int) */

DTransformNode * __thiscall
DTransformNode::setRGB(DTransformNode *this,int param_1,int param_2,int param_3)

{
  DColor::setRGB((DColor *)(this + 0x10),param_1,param_2,param_3);
  if (this[0x81] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x310))
              ((float)*(int *)(this + 0x28) * 0.003921569,(float)*(int *)(this + 0x2c) * 0.003921569
               ,(float)*(int *)(this + 0x30) * 0.003921569,this);
  }
  return this;
}


/* DTransformNode::setAlpha(int) */

DTransformNode * __thiscall DTransformNode::setAlpha(DTransformNode *this,int param_1)

{
  DColor::setAlpha((DColor *)(this + 0x10),param_1);
  if (this[0x82] != (DTransformNode)0x0) {
    (**(code **)(*(long *)this + 0x318))((float)*(int *)(this + 0x34) * 0.003921569,this);
  }
  return this;
}


/* DTransformNode::setContextRect(float, float, float, float) */

void __thiscall
DTransformNode::setContextRect
          (DTransformNode *this,float param_1,float param_2,float param_3,float param_4)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xd8) = param_1;
  *(float *)(this + 0xdc) = param_2;
  *(float *)(this + 0xe0) = param_3;
  *(float *)(this + 0xe4) = param_4;
  *(float *)(this + 200) = param_3 * *(float *)(this + 0xc0);
  *(float *)(this + 0xcc) = param_4 * *(float *)(this + 0xc4);
  return;
}


/* DTransformNode::scaleToHeight(float) */

void __thiscall DTransformNode::scaleToHeight(DTransformNode *this,float param_1)

{
  (**(code **)(*(long *)this + 0x140))(param_1 / *(float *)(this + 0xe4));
  return;
}


/* DTransformNode::scaleToWidth(float) */

void __thiscall DTransformNode::scaleToWidth(DTransformNode *this,float param_1)

{
  (**(code **)(*(long *)this + 0x140))(param_1 / *(float *)(this + 0xe0));
  return;
}


/* DTransformNode::scaleToSize(float, float) */

void __thiscall DTransformNode::scaleToSize(DTransformNode *this,float param_1,float param_2)

{
  (**(code **)(*(long *)this + 0x148))
            (param_1 / *(float *)(this + 0xe0),param_2 / *(float *)(this + 0xe4));
  return;
}


/* DTransformNode::setPosition(DVec2 const&) */

void __thiscall DTransformNode::setPosition(DTransformNode *this,DVec2 *param_1)

{
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)param_1;
  this[0x109] = (DTransformNode)0x1;
  return;
}


/* DTransformNode::setPositionX(float) */

void __thiscall DTransformNode::setPositionX(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xe8) = param_1;
  return;
}


/* DTransformNode::setPositionY(float) */

void __thiscall DTransformNode::setPositionY(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xec) = param_1;
  return;
}


/* DTransformNode::setScale(float) */

void __thiscall DTransformNode::setScale(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xf4) = param_1;
  *(float *)(this + 0xf0) = param_1;
  return;
}


/* DTransformNode::setScaleX(float) */

void __thiscall DTransformNode::setScaleX(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xf0) = param_1;
  return;
}


/* DTransformNode::setScaleY(float) */

void __thiscall DTransformNode::setScaleY(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xf4) = param_1;
  return;
}


/* DTransformNode::setRotation(float) */

void __thiscall DTransformNode::setRotation(DTransformNode *this,float param_1)

{
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xf8) = param_1;
  return;
}


/* DTransformNode::getPositionX() const */

undefined4 __thiscall DTransformNode::getPositionX(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xe8);
}


/* DTransformNode::getPositionY() const */

undefined4 __thiscall DTransformNode::getPositionY(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xec);
}


/* DTransformNode::getScale() const */

undefined4 __thiscall DTransformNode::getScale(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xf0);
}


/* DTransformNode::getRotation() const */

undefined4 __thiscall DTransformNode::getRotation(DTransformNode *this)

{
  return *(undefined4 *)(this + 0xf8);
}


/* DTransformNode::setContentSize(DVec2 const&) */

void __thiscall DTransformNode::setContentSize(DTransformNode *this,DVec2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  this[0x109] = (DTransformNode)0x1;
  *(float *)(this + 0xe0) = fVar2;
  *(float *)(this + 0xe4) = fVar1;
  *(float *)(this + 200) = *(float *)(this + 0xc0) * fVar2;
  *(float *)(this + 0xcc) = *(float *)(this + 0xc4) * fVar1;
  return;
}


/* DTransformNode::ignoreAnchorPointForPosition(bool) */

void __thiscall DTransformNode::ignoreAnchorPointForPosition(DTransformNode *this,bool param_1)

{
  if (this[0x80] != (DTransformNode)param_1) {
    this[0x80] = (DTransformNode)param_1;
    this[0x109] = (DTransformNode)0x1;
  }
  return;
}


/* DTransformNode::isIgnoreAnchorPointForPosition() const */

DTransformNode __thiscall DTransformNode::isIgnoreAnchorPointForPosition(DTransformNode *this)

{
  return this[0x80];
}


/* DTransformNode::getAnchorPoint() const */

DTransformNode * __thiscall DTransformNode::getAnchorPoint(DTransformNode *this)

{
  return this + 0xc0;
}


/* DTransformNode::removeFromParent(bool) */

void __thiscall DTransformNode::removeFromParent(DTransformNode *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x98);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x70))(plVar1,this,param_1);
  }
  return;
}


/* DTransformNode::addChild(DTransformNode*, int) */

void __thiscall DTransformNode::addChild(DTransformNode *this,DTransformNode *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)this + 0x20);
  if (*(code **)(*(long *)param_1 + 0xe8) == getTag) {
    uVar1 = getTag(param_1);
    (*pcVar2)(this,param_1,uVar1,param_2);
    return;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0xe8))();
  (*pcVar2)(this,param_1,uVar1,param_2);
  return;
}


/* DTransformNode::addChild(DTransformNode*) */

void __thiscall DTransformNode::addChild(DTransformNode *this,DTransformNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)param_1;
  pcVar3 = *(code **)(lVar4 + 0xe8);
  pcVar5 = *(code **)(*(long *)this + 0x20);
  if (pcVar3 == getTag) {
    uVar1 = getTag(param_1);
    pcVar3 = *(code **)(lVar4 + 0xf8);
  }
  else {
    uVar1 = (*pcVar3)();
    pcVar3 = *(code **)(*(long *)param_1 + 0xf8);
  }
  if (pcVar3 == getZOrder) {
    uVar2 = getZOrder(param_1);
  }
  else {
    uVar2 = (*pcVar3)();
  }
  (*pcVar5)(this,param_1,uVar1,uVar2);
  return;
}


/* DTransformNode::setVisible(bool) */

void __thiscall DTransformNode::setVisible(DTransformNode *this,bool param_1)

{
  this[0x10c] = (DTransformNode)param_1;
  return;
}


/* DTransformNode::isVisible() const */

DTransformNode __thiscall DTransformNode::isVisible(DTransformNode *this)

{
  return this[0x10c];
}


/* DTransformNode::isActionRunning() */

bool __thiscall DTransformNode::isActionRunning(DTransformNode *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x290))();
  return lVar1 != 0;
}


/* DTransformNode::getNodeToWorldTransform() */

void DTransformNode::getNodeToWorldTransform(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0x98))(in_x0,0);
  return;
}


/* DTransformNode::getComponent(std::string const&) */

void __thiscall DTransformNode::getComponent(DTransformNode *this,string *param_1)

{
  DComponentContainer::get((DComponentContainer *)(this + 0x40),param_1);
  return;
}


/* DTransformNode::addComponent(DComponent*) */

void __thiscall DTransformNode::addComponent(DTransformNode *this,DComponent *param_1)

{
  DComponentContainer::add((DComponentContainer *)(this + 0x40),param_1);
  return;
}


/* DTransformNode::removeComponent(std::string const&) */

void __thiscall DTransformNode::removeComponent(DTransformNode *this,string *param_1)

{
  DComponentContainer::remove((DComponentContainer *)(this + 0x40),param_1);
  return;
}


/* DTransformNode::removeComponent(DComponent*) */

void __thiscall DTransformNode::removeComponent(DTransformNode *this,DComponent *param_1)

{
  DComponentContainer::remove((DComponentContainer *)(this + 0x40),param_1);
  return;
}


/* DTransformNode::removeAllComponents() */

void __thiscall DTransformNode::removeAllComponents(DTransformNode *this)

{
  DComponentContainer::removeAll((DComponentContainer *)(this + 0x40));
  return;
}


/* DTransformNode::stopAllActions() */

void __thiscall DTransformNode::stopAllActions(DTransformNode *this)

{
  DActionManager::removeAllActionFromTarget(*(DActionManager **)(this + 0x140),this);
  return;
}


/* DTransformNode::runAction(DAction*) */

void __thiscall DTransformNode::runAction(DTransformNode *this,DAction *param_1)

{
  DActionManager::addAction(*(DActionManager **)(this + 0x140),param_1,this);
  return;
}


/* DTransformNode::stopAction(DAction*) */

void __thiscall DTransformNode::stopAction(DTransformNode *this,DAction *param_1)

{
  DActionManager::removeAction(*(DActionManager **)(this + 0x140),param_1);
  return;
}


/* DTransformNode::getActionNumber() */

void __thiscall DTransformNode::getActionNumber(DTransformNode *this)

{
  DActionManager::getActionNumber(*(DActionManager **)(this + 0x140),this);
  return;
}


/* DTransformNode::setZOrder(int) */

DTransformNode * __thiscall DTransformNode::setZOrder(DTransformNode *this,int param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0x98) != 0) {
    *(undefined1 *)(*(long *)(this + 0x98) + 0x10a) = 1;
  }
  iVar1 = g_orderOfArrival;
  g_orderOfArrival = g_orderOfArrival + 1;
  FUN_04f74384(this + 0x104,iVar1);
  *(int *)(this + 0x100) = param_1;
  return this;
}


/* DTransformNode::getWorldToNodeTransform() */

void DTransformNode::getWorldToNodeTransform(void)

{
  long *in_x0;
  SimpleMatrix *in_x8;
  
  (**(code **)(*in_x0 + 0xa0))();
  Sexy::SimpleMatrix::Invert(in_x8);
  return;
}


/* DTransformNode::getAlign(DVec2 const&) */

DVec2 * DTransformNode::getAlign(DVec2 *param_1)

{
  float *in_x1;
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,*in_x1 * *(float *)(param_1 + 0xe0),in_x1[1] * *(float *)(param_1 + 0xe4));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getAlign(float, float) */

void DTransformNode::getAlign(float param_1,float param_2)

{
  long *in_x0;
  code *pcVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*in_x0 + 200);
  DVec2::DVec2(aDStack_10,param_1,param_2);
  (*pcVar1)();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNode::getContentSize() const */

DVec2 * DTransformNode::getContentSize(void)

{
  long in_x0;
  DVec2 *in_x8;
  
  DVec2::DVec2(in_x8,*(float *)(in_x0 + 0xe0),*(float *)(in_x0 + 0xe4));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::convertTouchToNodeSpace(Sexy::Touch const&) */

void DTransformNode::convertTouchToNodeSpace(Touch *param_1)

{
  long in_x1;
  code *pcVar1;
  float fVar2;
  float fVar3;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0xb8);
  fVar2 = (float)FUN_04f74578((float)*(int *)(in_x1 + 0x10));
  fVar3 = (float)FUN_04f74578((float)*(int *)(in_x1 + 0x14));
  DVec2::DVec2(aDStack_10,fVar2,fVar3);
  (*pcVar1)(param_1,aDStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNode::setPosition(float, float) */

DTransformNode * __thiscall
DTransformNode::setPosition(DTransformNode *this,float param_1,float param_2)

{
  this[0x109] = (DTransformNode)0x1;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xe8),param_1,param_2);
  return this;
}


/* DTransformNode::setScale(float, float) */

DTransformNode * __thiscall
DTransformNode::setScale(DTransformNode *this,float param_1,float param_2)

{
  this[0x109] = (DTransformNode)0x1;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xf0),param_1,param_2);
  return this;
}


/* DTransformNode::resetRotationPoint() */

DTransformNode * __thiscall DTransformNode::resetRotationPoint(DTransformNode *this)

{
  this[0x109] = (DTransformNode)0x1;
  DVec2::setZero((DVec2 *)(this + 0xd0));
  return this;
}


/* DTransformNode::getRotationPoint() const */

void DTransformNode::getRotationPoint(void)

{
  long in_x0;
  
  DVec2::operator+((DVec2 *)(in_x0 + 0xd0),(DVec2 *)(in_x0 + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::setRotationPoint(DVec2 const&) */

void __thiscall DTransformNode::setRotationPoint(DTransformNode *this,DVec2 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_10;
  
  this[0x109] = (DTransformNode)0x1;
  lVar1 = ___stack_chk_guard;
  DVec2::operator-(param_1,(DVec2 *)(this + 0xe8));
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xd0) = local_10;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::setRotationPoint(float, float) */

void __thiscall DTransformNode::setRotationPoint(DTransformNode *this,float param_1,float param_2)

{
  long lVar1;
  DVec2 aDStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this[0x109] = (DTransformNode)0x1;
  local_8 = ___stack_chk_guard;
  DVec2::DVec2(aDStack_18,param_1,param_2);
  DVec2::operator-(aDStack_18,(DVec2 *)(this + 0xe8));
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xd0) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* DTransformNode::setAnchorPoint(DVec2 const&) */

DTransformNode * __thiscall DTransformNode::setAnchorPoint(DTransformNode *this,DVec2 *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = DVec2::operator!=((DVec2 *)(this + 0xc0),param_1);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)param_1;
    fVar3 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    this[0x109] = (DTransformNode)0x1;
    *(float *)(this + 200) = *(float *)(this + 0xe0) * fVar3;
    *(float *)(this + 0xcc) = *(float *)(this + 0xe4) * fVar2;
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::setAnchorPoint(float, float) */

void __thiscall DTransformNode::setAnchorPoint(DTransformNode *this,float param_1,float param_2)

{
  char cVar1;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec2::DVec2(aDStack_10,param_1,param_2);
  cVar1 = DVec2::operator!=((DVec2 *)(this + 0xc0),aDStack_10);
  if (cVar1 != '\0') {
    Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xc0),param_1,param_2);
    this[0x109] = (DTransformNode)0x1;
    *(float *)(this + 200) = param_1 * *(float *)(this + 0xe0);
    *(float *)(this + 0xcc) = param_2 * *(float *)(this + 0xe4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::visit(Sexy::Graphics*) */

void __thiscall DTransformNode::visit(DTransformNode *this,Graphics *param_1)

{
  DMatrix aDStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DMatrix::DMatrix(aDStack_20);
  (**(code **)(*(long *)this + 0x18))(this,aDStack_20,param_1,this[0x10b]);
  if (this[0x10c] != (DTransformNode)0x0) {
    this[0x10b] = (DTransformNode)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::convertToNodeSpace(DVec2 const&) */

void DTransformNode::convertToNodeSpace(DVec2 *param_1)

{
  undefined4 *in_x1;
  DVec2 *in_x8;
  float fVar1;
  float fVar2;
  DMatrix aDStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xa8))(aDStack_20);
  fVar1 = (float)FUN_04f74568(*in_x1);
  fVar2 = (float)FUN_04f74568(in_x1[1]);
  DMatrix::Translate2(aDStack_20,fVar1,fVar2);
  fVar1 = (float)FUN_04f74578(local_10);
  fVar2 = (float)FUN_04f74578(local_c);
  DVec2::DVec2(in_x8,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::convertToWorldSpace(DVec2 const&) */

void DTransformNode::convertToWorldSpace(DVec2 *param_1)

{
  undefined4 *in_x1;
  DVec2 *in_x8;
  float fVar1;
  float fVar2;
  DMatrix aDStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xa0))(aDStack_20);
  fVar1 = (float)FUN_04f74568(*in_x1);
  fVar2 = (float)FUN_04f74568(in_x1[1]);
  DMatrix::Translate2(aDStack_20,fVar1,fVar2);
  fVar1 = (float)FUN_04f74578(local_10);
  fVar2 = (float)FUN_04f74578(local_c);
  DVec2::DVec2(in_x8,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getNodeTransform() */

void __thiscall DTransformNode::getNodeTransform(DTransformNode *this)

{
  DMatrix *this_00;
  char cVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x109] != (DTransformNode)0x0) {
    this_00 = (DMatrix *)(this + 0x110);
    fVar3 = *(float *)(this + 0xe8);
    fVar2 = *(float *)(this + 0xec);
    if (this[0x80] != (DTransformNode)0x0) {
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
    this[0x109] = (DTransformNode)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this + 0x110);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getNodeToParentTransform(DTransformNode*) */

void DTransformNode::getNodeToParentTransform(DTransformNode *param_1)

{
  long lVar1;
  DMatrix *pDVar2;
  DTransformNode *in_x1;
  code *pcVar3;
  DMatrix *in_x8;
  DTransformNode *this;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  pDVar2 = (DMatrix *)(**(code **)(*(long *)param_1 + 0x90))();
  DMatrix::DMatrix(in_x8,pDVar2);
  for (this = *(DTransformNode **)(param_1 + 0x98); this != in_x1;
      this = (DTransformNode *)getParent(this)) {
    while( true ) {
      if (this == (DTransformNode *)0x0) goto LAB_04f75388;
      pDVar2 = (DMatrix *)(**(code **)(*(long *)this + 0x90))(this);
      DMatrix::operator*(pDVar2,in_x8);
      pcVar3 = *(code **)(*(long *)this + 0x238);
      *(undefined8 *)(in_x8 + 0x10) = local_10;
      *(undefined8 *)in_x8 = local_20;
      *(undefined8 *)(in_x8 + 8) = uStack_18;
      if (pcVar3 == getParent) break;
      this = (DTransformNode *)(*pcVar3)();
      if (this == in_x1) goto LAB_04f75388;
    }
  }
LAB_04f75388:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* covariant return thunk to DTransformNode::setColor(Sexy::Color const&) */

long __thiscall DTransformNode::setColor(DTransformNode *this,Color *param_1)

{
  long lVar1;
  
  lVar1 = setColor(this,param_1);
  return lVar1 + 0x10;
}


/* covariant return thunk to DTransformNode::setColor(Sexy::Color const&) */

void __thiscall DTransformNode::setColor(DTransformNode *this,Color *param_1)

{
  setColor(this + -0x10,param_1);
  return;
}


/* covariant return thunk to DTransformNode::setColor(int, int, int, int) */

long __thiscall
DTransformNode::setColor(DTransformNode *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = setColor(this,param_1,param_2,param_3,param_4);
  return lVar1 + 0x10;
}


/* covariant return thunk to DTransformNode::setColor(int, int, int, int) */

void __thiscall
DTransformNode::setColor(DTransformNode *this,int param_1,int param_2,int param_3,int param_4)

{
  setColor(this + -0x10,param_1,param_2,param_3,param_4);
  return;
}


/* covariant return thunk to DTransformNode::setRGB(int, int, int) */

long __thiscall DTransformNode::setRGB(DTransformNode *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = setRGB(this,param_1,param_2,param_3);
  return lVar1 + 0x10;
}


/* covariant return thunk to DTransformNode::setRGB(int, int, int) */

void __thiscall DTransformNode::setRGB(DTransformNode *this,int param_1,int param_2,int param_3)

{
  setRGB(this + -0x10,param_1,param_2,param_3);
  return;
}


/* covariant return thunk to DTransformNode::setAlpha(int) */

long __thiscall DTransformNode::setAlpha(DTransformNode *this,int param_1)

{
  long lVar1;
  
  lVar1 = setAlpha(this,param_1);
  return lVar1 + 0x10;
}


/* covariant return thunk to DTransformNode::setAlpha(int) */

void __thiscall DTransformNode::setAlpha(DTransformNode *this,int param_1)

{
  setAlpha(this + -0x10,param_1);
  return;
}


/* DTransformNode::setName(std::string const&) */

DTransformNode * __thiscall DTransformNode::setName(DTransformNode *this,string *param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_05475e00(this + 0x88);
  uVar1 = FUN_04f744f4(param_1);
  *(undefined8 *)(this + 0x90) = uVar1;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::_setCascadeColor(float, float, float) */

void __thiscall
DTransformNode::_setCascadeColor(DTransformNode *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 800))(param_1,param_2,param_3,(long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::_setCascadeOpacity(float) */

void __thiscall DTransformNode::_setCascadeOpacity(DTransformNode *this,float param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x328))(param_1,(long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::cleanup() */

void __thiscall DTransformNode::cleanup(DTransformNode *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2a8))();
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x2f0))((long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::removeAllChildren(bool) */

void __thiscall DTransformNode::removeAllChildren(DTransformNode *this,bool param_1)

{
  vector *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  if (param_1) {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar2 = (long *)*puVar3;
      if (plVar2 != (long *)0x0) {
        plVar2[0x13] = 0;
        (**(code **)(*plVar2 + 0x2f0))(plVar2);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*plVar2 != 0) {
        *(undefined8 *)(*plVar2 + 0x98) = 0;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  DArray<DTransformNode*>::clear((DArray<DTransformNode*> *)this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getChildByName(std::string const&) */

void __thiscall DTransformNode::getChildByName(DTransformNode *this,string *param_1)

{
  vector *pvVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  pvVar1 = (vector *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04f744f4(param_1);
  uVar4 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  uVar5 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  local_18 = uVar3;
  FUN_05475d88(auStack_10,param_1);
  local_20 = FUN_04f769d0(uVar4,uVar5,(PakRecord *)&local_18);
  PakRecord::~PakRecord((PakRecord *)&local_18);
  local_18 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar3 = *puVar6;
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getChildByTag(int) */

void __thiscall DTransformNode::getChildByTag(DTransformNode *this,int param_1)

{
  vector *pvVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pvVar1 = (vector *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  uVar3 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  uVar4 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  local_18 = FUN_04f76cd4(uVar3,uVar4,param_1);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = *puVar5;
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* DTransformNode::DTransformNode() */

void __thiscall DTransformNode::DTransformNode(DTransformNode *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  DRef::DRef((DRef *)this);
  DColor::DColor((DColor *)(this + 0x10));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__DTransformNode_06a224f0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22830;
  DComponentContainer::DComponentContainer((DComponentContainer *)(this + 0x40),this);
  this[0x80] = (DTransformNode)0x0;
  this[0x81] = (DTransformNode)0x0;
  this[0x82] = (DTransformNode)0x0;
  Set8BytesTo0(this + 0x88);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xa0));
  *(undefined8 *)(this + 0xb8) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 200));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xd0));
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0xd8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xe8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf0));
  *(undefined4 *)(this + 0x100) = 0;
  this[0x108] = (DTransformNode)0x1;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  this[0x109] = (DTransformNode)0x1;
  this[0x10b] = (DTransformNode)0x1;
  this[0x10c] = (DTransformNode)0x1;
  *(undefined4 *)(this + 0x104) = 0;
  this[0x10a] = (DTransformNode)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  DMatrix::DMatrix((DMatrix *)(this + 0x110));
  DMatrix::DMatrix((DMatrix *)(this + 0x128));
  this[0x148] = (DTransformNode)0x0;
  DVec2::setOne((DVec2 *)(this + 0xf0));
  puVar1 = (undefined8 *)DTimerManager::getInstane();
  uVar2 = FUN_04f743e4(*puVar1);
  *(undefined8 *)(this + 0x140) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::~DTransformNode() */

void __thiscall DTransformNode::~DTransformNode(DTransformNode *this)

{
  vector *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DTransformNode_06a224f0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22830;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined8 *)(*plVar2 + 0x98) = 0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  stopAllActions(this);
  DArray<DTransformNode*>::~DArray((DArray<DTransformNode*> *)this_00);
  std::string::~string((string *)(this + 0x88));
  DComponentContainer::~DComponentContainer((DComponentContainer *)(this + 0x40));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNode::~DTransformNode() */

void __thiscall DTransformNode::~DTransformNode(DTransformNode *this)

{
  ~DTransformNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::_detachChild(__gnu_cxx::__normal_iterator<DTransformNode**,
   std::vector<DTransformNode*, std::allocator<DTransformNode*> > >&, bool) */

void __thiscall
DTransformNode::_detachChild(DTransformNode *this,__normal_iterator *param_1,bool param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  bVar1 = __gnu_cxx::operator!=(param_1,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    plVar4 = (long *)*puVar2;
    if (param_2) {
      (**(code **)(*plVar4 + 0x2f0))(plVar4);
    }
    uVar3 = *(undefined8 *)param_1;
    plVar4[0x13] = 0;
    DArray<DTransformNode*>::erase((DArray<DTransformNode*> *)(this + 0xa0),uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::removeChildByTag(int, bool) */

void __thiscall DTransformNode::removeChildByTag(DTransformNode *this,int param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  uVar2 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  local_10 = FUN_04f763c0(uVar1,uVar2,param_1);
  _detachChild(this,(__normal_iterator *)&local_10,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::removeChildByName(std::string const&, bool) */

void __thiscall DTransformNode::removeChildByName(DTransformNode *this,string *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04f744f4(param_1);
  uVar2 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  uVar3 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
  local_18 = uVar1;
  FUN_05475d88(auStack_10,param_1);
  local_20 = FUN_04f765ec(uVar2,uVar3,(PakRecord *)&local_18);
  PakRecord::~PakRecord((PakRecord *)&local_18);
  _detachChild(this,(__normal_iterator *)&local_20,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::removeChild(DTransformNode*, bool) */

void __thiscall
DTransformNode::removeChild(DTransformNode *this,DTransformNode *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DTransformNode *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  if (param_1 != (DTransformNode *)0x0) {
    uVar1 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
    uVar2 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0xa0));
    local_10 = std::
               find<__gnu_cxx::__normal_iterator<DTransformNode**,std::vector<DTransformNode*,std::allocator<DTransformNode*>>>,DTransformNode*>
                         (uVar1,uVar2,&local_18);
    _detachChild(this,(__normal_iterator *)&local_10,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNode::sortAllChildren() */

void __thiscall DTransformNode::sortAllChildren(DTransformNode *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (this[0x10a] != (DTransformNode)0x0) {
    uVar1 = std::begin<DArray<DTransformNode*>>((DArray *)(this + 0xa0));
    uVar2 = std::end<DArray<DTransformNode*>>((DArray *)(this + 0xa0));
    FUN_04f78a8c(uVar1,uVar2);
    this[0x10a] = (DTransformNode)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::visit(DMatrix const&, Sexy::Graphics*, bool) */

void __thiscall
DTransformNode::visit(DTransformNode *this,DMatrix *param_1,Graphics *param_2,bool param_3)

{
  DArray<DTransformNode*> *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  DTransformNode *this_01;
  RenderEffectDefinition *pRVar4;
  RenderEffect *pRVar5;
  long *plVar6;
  DMatrix *pDVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  GraphicsAutoState aGStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x10c] != (DTransformNode)0x0) {
    if ((param_3) || (this[0x109] != (DTransformNode)0x0)) {
      pDVar7 = (DMatrix *)(**(code **)(*(long *)this + 0x90))(this);
      DMatrix::operator*(param_1,pDVar7);
      *(undefined8 *)(this + 0x138) = local_10;
      *(undefined8 *)(this + 0x128) = local_20;
      *(undefined8 *)(this + 0x130) = uStack_18;
      this[0x108] = (DTransformNode)0x1;
    }
    else {
      this[0x108] = (DTransformNode)0x0;
    }
    this_00 = (DArray<DTransformNode*> *)(this + 0xa0);
    lVar10 = 0;
    sortAllChildren(this);
    DComponentContainer::visit((DComponentContainer *)(this + 0x40));
    while( true ) {
      iVar9 = (int)lVar10;
      lVar3 = DArray<DTransformNode*>::size(this_00);
      if ((lVar3 <= lVar10) ||
         (this_01 = (DTransformNode *)DArray<DTransformNode*>::at((long)this_00),
         this_01 == (DTransformNode *)0x0)) break;
      if (*(code **)(*(long *)this_01 + 0xf8) == getZOrder) {
        iVar2 = getZOrder(this_01);
      }
      else {
        iVar2 = (**(code **)(*(long *)this_01 + 0xf8))();
      }
      lVar10 = lVar10 + 1;
      if (-1 < iVar2) break;
      (**(code **)(*(long *)this_01 + 0x18))(this_01,this + 0x128,param_2,this[0x108]);
    }
    if (*(long *)(this + 0xb8) == 0) {
      (**(code **)(*(long *)this + 0x88))(this,this + 0x128,param_2);
    }
    else {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_2);
      pRVar4 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_2);
      pRVar5 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar4);
      pcVar8 = *(code **)(*(long *)pRVar5 + 0x38);
      std::string::string((string *)&local_20,"Default");
      (*pcVar8)(pRVar5,(string *)&local_20,1);
      std::string::~string((string *)&local_20);
      nop();
      Sexy::RenderEffectAutoState::RenderEffectAutoState
                ((RenderEffectAutoState *)&local_20,param_2,pRVar5,1);
      while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                               ((RenderEffectAutoState *)&local_20), bVar1) {
        (**(code **)(*(long *)this + 0x88))(this,this + 0x128,param_2);
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)&local_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)&local_20);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
    }
    lVar10 = 0;
    lVar3 = DArray<DTransformNode*>::size(this_00);
    if (iVar9 < lVar3) {
      do {
        plVar6 = (long *)DArray<DTransformNode*>::at((long)this_00);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,this + 0x128,param_2,this[0x108]);
          lVar3 = DArray<DTransformNode*>::size(this_00);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 + iVar9 < lVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getChildrenByTag(int) */

void DTransformNode::getChildrenByTag(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  DTransformNode *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>
                       ((vector *)((ulong)(uint)param_1 + 0xa0));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>
                       ((vector *)((ulong)(uint)param_1 + 0xa0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_20 = (DTransformNode *)*puVar3;
    if (*(code **)(*(long *)local_20 + 0xe8) == getTag) {
      iVar2 = getTag(local_20);
    }
    else {
      iVar2 = (**(code **)(*(long *)local_20 + 0xe8))();
    }
    if (iVar2 == in_w1) {
      std::vector<DTransformNode*,std::allocator<DTransformNode*>>::push_back
                ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)in_x8,&local_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getChildrenByName(std::string const&) */

void DTransformNode::getChildrenByName(string *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  DTransformNode *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04f744f4();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0xa0));
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(param_1 + 0xa0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_20 = (DTransformNode *)*plVar4;
    if ((*(long *)(local_20 + 0x90) == lVar3) && (iVar2 = FUN_054748a4(local_20 + 0x88), iVar2 == 0)
       ) {
      std::vector<DTransformNode*,std::allocator<DTransformNode*>>::push_back
                ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)in_x8,&local_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DTransformNode::addChild(DTransformNode*, int, int) */

void __thiscall
DTransformNode::addChild(DTransformNode *this,DTransformNode *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if ((param_1 != (DTransformNode *)0x0) && (*(long *)(param_1 + 0x98) == 0)) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(this + 0x38);
    *(DTransformNode **)(param_1 + 0x98) = this;
    (**(code **)(*(long *)param_1 + 0xf0))(param_1,param_2);
    (**(code **)(*(long *)param_1 + 0x100))(param_1,param_3);
    DArray<DTransformNode*>::pushBack((DArray<DTransformNode*> *)(this + 0xa0),param_1);
    cVar1 = (**(code **)(*(long *)this + 0x250))(this);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 800))
                ((float)*(int *)(this + 0x28) * 0.003921569,
                 (float)*(int *)(this + 0x2c) * 0.003921569,
                 (float)*(int *)(this + 0x30) * 0.003921569,param_1);
    }
    cVar1 = (**(code **)(*(long *)this + 0x260))(this);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x328))((float)*(int *)(this + 0x34) * 0.003921569,param_1);
    }
    (**(code **)(*(long *)param_1 + 0x308))(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::setRenderEffect(std::string const&) */

void __thiscall DTransformNode::setRenderEffect(DTransformNode *this,string *param_1)

{
  char cVar1;
  ResourceInfo *pRVar2;
  code *pcVar3;
  string *psVar4;
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_38,param_1);
  DString::makeUpper();
  DString::operator=(aDStack_38,aDStack_18);
  DString::~DString(aDStack_18);
  DString::replace((char *)aDStack_38,"/");
  ::operator+("EFFECT_",aDStack_28);
  DString::operator=(aDStack_38,aDStack_18);
  DString::~DString(aDStack_18);
  DString::~DString(aDStack_28);
  psVar4 = *(string **)(gLawnApp + 0x848);
  DString::operator_cast_to_string(aDStack_38);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::RenderEffectDefinition>
            (psVar4,SUB81(aDStack_18,0));
  std::string::~string((string *)aDStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aDStack_28);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x2d8))(this,0);
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x2d8);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aDStack_28);
    (*pcVar3)(this,pRVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_28);
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DTransformNode::getChildRecursionByName(std::string const&) */

void __thiscall DTransformNode::getChildRecursionByName(DTransformNode *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  DString *this_00;
  undefined8 uVar6;
  vector *pvVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  DString aDStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_48,param_1);
  DString::split((char *)aDStack_48,0x55a4690);
  uVar3 = FUN_04f743e8(local_38,local_30);
  if (uVar3 < 2) {
    lVar9 = FUN_04f744f4(param_1);
    if (*(code **)(*(long *)this + 0x228) == getChildren) {
      pvVar7 = (vector *)getChildren(this);
    }
    else {
      pvVar7 = (vector *)(**(code **)(*(long *)this + 0x228))();
    }
    local_50 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
    local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_20), bVar1)
    {
      plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      plVar12 = (long *)*plVar10;
      if (plVar12[0x12] == lVar9) {
        uVar6 = FUN_0547429c(param_1);
        iVar2 = FUN_0547490c(plVar12 + 0x11,uVar6);
        if (iVar2 == 0) {
          this = (DTransformNode *)*plVar10;
          goto LAB_04f79790;
        }
        plVar12 = (long *)*plVar10;
      }
      this = (DTransformNode *)(**(code **)(*plVar12 + 0x58))(plVar12,param_1);
      if (this != (DTransformNode *)0x0) goto LAB_04f79790;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    this = (DTransformNode *)0x0;
  }
  else {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      this_00 = (DString *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      DString::operator_cast_to_string(this_00);
      uVar6 = FUN_04f744f4((string *)&local_20);
      std::string::~string((string *)&local_20);
      if (*(code **)(*(long *)this + 0x228) == getChildren) {
        pvVar7 = (vector *)getChildren(this);
        uVar8 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
        pcVar11 = *(code **)(*(long *)this + 0x228);
        if (pcVar11 == getChildren) goto LAB_04f79668;
LAB_04f79764:
        pvVar7 = (vector *)(*pcVar11)();
      }
      else {
        pvVar7 = (vector *)(**(code **)(*(long *)this + 0x228))();
        uVar8 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
        pcVar11 = *(code **)(*(long *)this + 0x228);
        if (pcVar11 != getChildren) goto LAB_04f79764;
LAB_04f79668:
        pvVar7 = (vector *)getChildren(this);
      }
      uVar4 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
      local_20 = uVar6;
      DString::DString(aDStack_18,this_00);
      local_50 = FUN_04f794e8(uVar8,uVar4,(string *)&local_20);
      FUN_035590e8((string *)&local_20);
      if (*(code **)(*(long *)this + 0x228) == getChildren) {
        pvVar7 = (vector *)getChildren(this);
        local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20)
        ;
      }
      else {
        pvVar7 = (vector *)(**(code **)(*(long *)this + 0x228))();
        local_20 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar7);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_20)
        ;
      }
      if (!bVar1) {
        this = (DTransformNode *)0x0;
        break;
      }
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      this = (DTransformNode *)*puVar5;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_60);
    }
  }
LAB_04f79790:
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)&local_38);
  DString::~DString(aDStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

