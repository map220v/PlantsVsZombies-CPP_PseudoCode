// Class: TutorialIconShakeAction


/* TutorialIconShakeAction::Prepare() */

void __thiscall TutorialIconShakeAction::Prepare(TutorialIconShakeAction *this)

{
  SexyVector3 *pSVar1;
  
  if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        **)(this + 0x10) !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x24),pSVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconShakeAction::UpdateAction() */

void __thiscall TutorialIconShakeAction::UpdateAction(TutorialIconShakeAction *this)

{
  long *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  plVar1 = *(long **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,this + 0x24);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    fVar3 = (float)Sexy::Rand(*(float *)(this + 0x20) + *(float *)(this + 0x20));
    fVar4 = (float)Sexy::Rand(*(float *)(this + 0x20) + *(float *)(this + 0x20));
    local_18 = CONCAT44(fVar4 + local_18._4_4_,fVar3 + (float)local_18);
    (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialIconShakeAction::TutorialIconShakeAction(float, TutorialIconEffect*, float) */

void __thiscall
TutorialIconShakeAction::TutorialIconShakeAction
          (TutorialIconShakeAction *this,float param_1,TutorialIconEffect *param_2,float param_3)

{
  TutorialIconAppearAction::TutorialIconAppearAction
            ((TutorialIconAppearAction *)this,param_1,param_2);
  *(undefined ***)this = &PTR_nop_06853390;
  *(float *)(this + 0x20) = param_3;
  DVec3::DVec3((DVec3 *)(this + 0x24));
  return;
}

