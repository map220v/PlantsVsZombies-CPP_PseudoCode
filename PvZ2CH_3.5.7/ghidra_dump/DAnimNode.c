// Class: DAnimNode


/* DAnimNode::DAnimNode() */

void __thiscall DAnimNode::DAnimNode(DAnimNode *this)

{
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined ***)this = &PTR__DAnimNode_06a220b0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22428;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x150));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x170));
  *(undefined8 *)(this + 400) = 0;
  this[0x198] = (DAnimNode)0x0;
  return;
}


/* DAnimNode::getPopAnimRig() const */

undefined8 __thiscall DAnimNode::getPopAnimRig(DAnimNode *this)

{
  return *(undefined8 *)(this + 400);
}


/* DAnimNode::isRunning() */

undefined1 __thiscall DAnimNode::isRunning(DAnimNode *this)

{
  undefined1 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(long *)(this + 400) != 0) &&
     (lVar2 = FUN_04f6ff6c(*(undefined8 *)(*(long *)(this + 400) + 0x20)), uVar1 = 0, lVar2 != 0)) {
    uVar1 = *(undefined1 *)(lVar2 + 0xa2);
  }
  return uVar1;
}


/* DAnimNode::setResource(PopAnimRig*, bool) */

DAnimNode * __thiscall DAnimNode::setResource(DAnimNode *this,PopAnimRig *param_1,bool param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((*(long **)(this + 400) != (long *)0x0) && (this[0x198] != (DAnimNode)0x0)) {
    (**(code **)(**(long **)(this + 400) + 0x18))();
  }
  *(PopAnimRig **)(this + 400) = param_1;
  this[0x198] = (DAnimNode)param_2;
  if ((param_1 != (PopAnimRig *)0x0) &&
     (lVar1 = FUN_04f6ff6c(*(undefined8 *)(param_1 + 0x20)), lVar1 != 0)) {
    fVar6 = *(float *)(lVar1 + 0x28);
    uVar2 = FUN_04f7014c((float)*(int *)(lVar1 + 0x34) * fVar6);
    uVar3 = FUN_04f7014c((float)*(int *)(lVar1 + 0x38) * fVar6);
    uVar4 = FUN_04f7014c((float)*(int *)(lVar1 + 0x3c) * fVar6);
    uVar5 = FUN_04f7014c((float)*(int *)(lVar1 + 0x40) * fVar6);
    (**(code **)(*(long *)this + 0x138))(uVar2,uVar3,uVar4,uVar5,this);
  }
  return this;
}


/* DAnimNode::~DAnimNode() */

void __thiscall DAnimNode::~DAnimNode(DAnimNode *this)

{
  *(undefined ***)this = &PTR__DAnimNode_06a220b0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a22428;
  if ((*(long **)(this + 400) != (long *)0x0) && (this[0x198] != (DAnimNode)0x0)) {
    (**(code **)(**(long **)(this + 400) + 0x18))();
  }
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x170));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x150));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DAnimNode::~DAnimNode() */

void __thiscall DAnimNode::~DAnimNode(DAnimNode *this)

{
  ~DAnimNode(this);
  AK::FreeHook(this);
  return;
}


/* DAnimNode::onAnimStop(std::string const&) */

void __thiscall DAnimNode::onAnimStop(DAnimNode *this,string *param_1)

{
  function *this_00;
  bool bVar1;
  
  this_00 = (function *)(this + 0x150);
  bVar1 = std::function::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  std::function<void(std::string_const&)>::operator()
            ((function<void(std::string_const&)> *)this_00,param_1);
  FUN_04f6ff98(this_00);
  return;
}


/* DAnimNode::onAnimContinus(std::string const&, std::string const&, int) */

void __thiscall
DAnimNode::onAnimContinus(DAnimNode *this,string *param_1,string *param_2,int param_3)

{
  function *this_00;
  bool bVar1;
  
  this_00 = (function *)(this + 0x170);
  bVar1 = std::function::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  std::function<void(std::string_const&,std::string_const&,int)>::operator()
            ((function<void(std::string_const&,std::string_const&,int)> *)this_00,param_1,param_2,
             param_3);
  FUN_04f6ffd4(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNode::draw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DAnimNode::draw(DAnimNode *this,DMatrix *param_1,Graphics *param_2)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(PopAnimRig **)(this + 400) != (PopAnimRig *)0x0) {
    PopAnimRig::SetPAMColor(*(PopAnimRig **)(this + 400),(Color *)(this + 0x28));
    pPVar1 = *(PopAnimRig **)(this + 400);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,(SimpleMatrix *)param_1);
    PopAnimRig::Draw(pPVar1,param_2,aSStack_30);
    pPVar1 = *(PopAnimRig **)(this + 400);
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DAnimNode::onStop(std::function<void (std::string const&)> const&) */

DAnimNode * __thiscall DAnimNode::onStop(DAnimNode *this,function *param_1)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x150),param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNode::playAndStop(std::string const&, std::function<void (std::string const&)> const&) */

void __thiscall DAnimNode::playAndStop(DAnimNode *this,string *param_1,function *param_2)

{
  PopAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void()>::operator=((function<void()> *)(this + 0x150),param_2);
  pPVar1 = *(PopAnimRig **)(this + 400);
  if (pPVar1 != (PopAnimRig *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStop);
    Sexy::Delegate1<std::string_const&>::Delegate1<DAnimNode,void(DAnimNode::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,param_1,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* DAnimNode::onContinus(std::function<void (std::string const&, std::string const&, int)> const&)
    */

DAnimNode * __thiscall DAnimNode::onContinus(DAnimNode *this,function *param_1)

{
  std::function<void(std::string_const&,std::string_const&,int)>::operator=
            ((function<void(std::string_const&,std::string_const&,int)> *)(this + 0x170),param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNode::playAndContinus(std::string const&, std::function<void (std::string const&,
   std::string const&, int)> const&) */

void __thiscall DAnimNode::playAndContinus(DAnimNode *this,string *param_1,function *param_2)

{
  PopAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(std::string_const&,std::string_const&,int)>::operator=
            ((function<void(std::string_const&,std::string_const&,int)> *)(this + 0x170),param_2);
  pPVar1 = *(PopAnimRig **)(this + 400);
  if (pPVar1 != (PopAnimRig *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimContinus);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::
    Delegate3<DAnimNode,void(DAnimNode::*)(std::string_const&,std::string_const&,int)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,param_1,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DAnimNode::setResource(std::string const&) */

void __thiscall DAnimNode::setResource(DAnimNode *this,string *param_1)

{
  long lVar1;
  char *__s;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  undefined8 uVar4;
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_38,param_1);
  DString::makeUpper();
  DString::operator=(aDStack_38,aDStack_18);
  DString::~DString(aDStack_18);
  lVar1 = DString::findString(aDStack_38,"POPANIM_");
  if (lVar1 == -1) {
    DString::replace((char *)aDStack_38,"/");
    ::operator+("POPANIM_",aDStack_28);
    DString::operator=(aDStack_38,aDStack_18);
    DString::~DString(aDStack_18);
    DString::~DString(aDStack_28);
  }
  __s = (char *)DString::c_str(aDStack_38);
  std::string::string((string *)aDStack_18,__s);
  pPVar2 = (PopAnim *)StringHelper::ToAnimRig((string *)aDStack_18,false);
  std::string::~string((string *)aDStack_18);
  nop();
  if (pPVar2 != (PopAnim *)0x0) {
    pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
    uVar4 = PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
    (**(code **)(*(long *)this + 0x338))(this,uVar4,1);
  }
  DString::~DString(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* DAnimNode::cleanup() */

void __thiscall DAnimNode::cleanup(DAnimNode *this)

{
  DTransformNode::cleanup((DTransformNode *)this);
  FUN_04f6ff98(this + 0x150);
  FUN_04f6ffd4(this + 0x170);
  return;
}

