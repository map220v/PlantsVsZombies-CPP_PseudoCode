// Class: DChestAnimNode


/* DChestAnimNode::~DChestAnimNode() */

void __thiscall DChestAnimNode::~DChestAnimNode(DChestAnimNode *this)

{
  *(undefined ***)this = &PTR__DChestAnimNode_069f2730;
  *(undefined ***)(this + 0x10) = &PTR_setColor_069f2aa8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1a0));
  DAnimNode::~DAnimNode((DAnimNode *)this);
  return;
}


/* DChestAnimNode::~DChestAnimNode() */

void __thiscall DChestAnimNode::~DChestAnimNode(DChestAnimNode *this)

{
  ~DChestAnimNode(this);
  AK::FreeHook(this);
  return;
}


/* DChestAnimNode::DChestAnimNode() */

void __thiscall DChestAnimNode::DChestAnimNode(DChestAnimNode *this)

{
  DAnimNode::DAnimNode((DAnimNode *)this);
  *(undefined ***)this = &PTR__DChestAnimNode_069f2730;
  *(undefined ***)(this + 0x10) = &PTR_setColor_069f2aa8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x19c) = 0;
  return;
}


/* DChestAnimNode::onAnimContinus(std::string const&, std::string const&, int) */

void __thiscall
DChestAnimNode::onAnimContinus(DChestAnimNode *this,string *param_1,string *param_2,int param_3)

{
  function *this_00;
  bool bVar1;
  
  if (*(int *)(this + 0x19c) <= param_3) {
    this_00 = (function *)(this + 0x170);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (bVar1) {
      std::function<void(std::string_const&,std::string_const&,int)>::operator()
                ((function<void(std::string_const&,std::string_const&,int)> *)this_00,param_1,
                 param_2,param_3);
      FUN_04eafbc8(this_00);
      return;
    }
  }
  return;
}


/* DChestAnimNode::onAnimStop(std::string const&) */

void __thiscall DChestAnimNode::onAnimStop(DChestAnimNode *this,string *param_1)

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
  FUN_04eafc04(this_00);
  return;
}


/* DChestAnimNode::onAnimOpenStop(std::string const&) */

void __thiscall DChestAnimNode::onAnimOpenStop(DChestAnimNode *this,string *param_1)

{
  function *this_00;
  bool bVar1;
  
  this_00 = (function *)(this + 0x1a0);
  bVar1 = std::function::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  std::function<void(std::string_const&)>::operator()
            ((function<void(std::string_const&)> *)this_00,param_1);
  FUN_04eafc04(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChestAnimNode::playAndStopOpenAnim(std::string const&, std::function<void (std::string const&)>
   const&) */

void __thiscall
DChestAnimNode::playAndStopOpenAnim(DChestAnimNode *this,string *param_1,function *param_2)

{
  PopAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void()>::operator=((function<void()> *)(this + 0x1a0),param_2);
  pPVar1 = *(PopAnimRig **)(this + 400);
  if (pPVar1 != (PopAnimRig *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimOpenStop);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<DChestAnimNode,void(DChestAnimNode::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,param_1,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DChestAnimNode::playAndContinus(std::string const&, int, std::function<void (std::string const&,
   std::string const&, int)> const&) */

void __thiscall
DChestAnimNode::playAndContinus(DChestAnimNode *this,string *param_1,int param_2,function *param_3)

{
  PopAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(std::string_const&,std::string_const&,int)>::operator=
            ((function<void(std::string_const&,std::string_const&,int)> *)(this + 0x170),param_3);
  pPVar1 = *(PopAnimRig **)(this + 400);
  *(int *)(this + 0x19c) = param_2;
  if (pPVar1 != (PopAnimRig *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimContinus);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::
    Delegate3<DChestAnimNode,void(DChestAnimNode::*)(std::string_const&,std::string_const&,int)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,param_1,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

