// Class: PopAnimEffectFactory


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopAnimEffectFactory::CreateEffect(std::string, int, Sexy::SexyVector3, bool, bool) */

void PopAnimEffectFactory::CreateEffect
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               string *param_5,undefined4 param_6,bool param_7,bool param_8)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_5);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_20,-1);
  FUN_04cb7f40(this + 0x1c,param_6);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,param_7);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,param_8);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

