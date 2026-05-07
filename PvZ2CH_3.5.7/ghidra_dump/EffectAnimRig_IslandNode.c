// Class: EffectAnimRig_IslandNode


/* EffectAnimRig_IslandNode::EffectAnimRig_IslandNode() */

void __thiscall EffectAnimRig_IslandNode::EffectAnimRig_IslandNode(EffectAnimRig_IslandNode *this)

{
  EffectAnimRig_DelayReplayAnim::EffectAnimRig_DelayReplayAnim
            ((EffectAnimRig_DelayReplayAnim *)this);
  this[0x228] = (EffectAnimRig_IslandNode)0x0;
  *(undefined ***)this = &PTR_GetClass_0675e9b0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_IslandNode_0675ead0;
  return;
}


/* EffectAnimRig_IslandNode::StaticNew() */

EffectAnimRig_IslandNode * EffectAnimRig_IslandNode::StaticNew(void)

{
  EffectAnimRig_IslandNode *this;
  
  this = ::operator_new(0x230);
  EffectAnimRig_IslandNode(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_IslandNode::StaticClassInit() */

void EffectAnimRig_IslandNode::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"EffectAnimRig_IslandNode");
    (*pcVar2)(plVar1,asStack_10,FUN_03cc32c4,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_IslandNode::StaticGetClass() */

long * EffectAnimRig_IslandNode::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = EffectAnimRig_DelayReplayAnim::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_IslandNode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_IslandNode::GetClass() const */

long * EffectAnimRig_IslandNode::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = EffectAnimRig_DelayReplayAnim::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_IslandNode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_IslandNode::RegisterAudioID() */

void __thiscall EffectAnimRig_IslandNode::RegisterAudioID(EffectAnimRig_IslandNode *this)

{
  void *pvVar1;
  
  if (this[0x228] == (EffectAnimRig_IslandNode)0x0) {
    pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    nop();
    AudioMgr::RegisterForAudio(pvVar1);
    this[0x228] = (EffectAnimRig_IslandNode)0x1;
  }
  return;
}


/* EffectAnimRig_IslandNode::UnregisterAudioID() */

void __thiscall EffectAnimRig_IslandNode::UnregisterAudioID(EffectAnimRig_IslandNode *this)

{
  void *pvVar1;
  
  if (this[0x228] != (EffectAnimRig_IslandNode)0x0) {
    pvVar1 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    nop();
    AudioMgr::UnregisterForAudio(pvVar1);
    this[0x228] = (EffectAnimRig_IslandNode)0x0;
  }
  return;
}


/* EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode() */

void __thiscall EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode(EffectAnimRig_IslandNode *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e9b0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_IslandNode_0675ead0;
  UnregisterAudioID(this);
  EffectAnimRig_DelayReplayAnim::~EffectAnimRig_DelayReplayAnim
            ((EffectAnimRig_DelayReplayAnim *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode() */

void __thiscall EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode(EffectAnimRig_IslandNode *this)

{
  ~EffectAnimRig_IslandNode(this + -0x10);
  return;
}


/* EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode() */

void __thiscall EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode(EffectAnimRig_IslandNode *this)

{
  ~EffectAnimRig_IslandNode(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode() */

void __thiscall EffectAnimRig_IslandNode::~EffectAnimRig_IslandNode(EffectAnimRig_IslandNode *this)

{
  ~EffectAnimRig_IslandNode(this + -0x10);
  return;
}


/* EffectAnimRig_IslandNode::PopAnimPlaySample(std::string const&, int, double, double) */

void EffectAnimRig_IslandNode::PopAnimPlaySample
               (string *param_1,int param_2,double param_3,double param_4)

{
  string *psVar1;
  
  if (param_1[0x228] == (string)0x0) {
    return;
  }
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  nop();
  AudioMgr::SendEventThrottled(psVar1,0.0,(void *)(ulong)(uint)param_2);
  return;
}


/* non-virtual thunk to EffectAnimRig_IslandNode::PopAnimPlaySample(std::string const&, int, double,
   double) */

void __thiscall
EffectAnimRig_IslandNode::PopAnimPlaySample
          (EffectAnimRig_IslandNode *this,string *param_1,int param_2,double param_3,double param_4)

{
  PopAnimPlaySample((string *)(this + -0x10),(int)param_1,param_3,param_4);
  return;
}

