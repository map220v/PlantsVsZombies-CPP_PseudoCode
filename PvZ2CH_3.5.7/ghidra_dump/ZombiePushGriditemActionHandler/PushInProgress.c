// Class: ZombiePushGriditemActionHandler::PushInProgress


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::PushInProgress::PushInProgress(Sexy::RtWeakPtr<GridItem>) */

void __thiscall
ZombiePushGriditemActionHandler::PushInProgress::PushInProgress
          (PushInProgress *this,RtWeakPtrBase *param_2)

{
  long lVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  undefined8 *puVar4;
  SexyVector3 *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)this,param_2);
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var3);
  *(undefined8 *)(this + 8) = *puVar4;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(puVar4 + 1);
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var3);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar6 = 0;
  uVar7 = 0;
  EATextSquish::Vec3::Vec3(aVStack_18,-(float)iVar2,0.0,0.0);
  uVar5 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_18);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePushGriditemActionHandler::PushInProgress::PushInProgress(ZombiePushGriditemActionHandler::PushInProgress
   const&) */

void __thiscall
ZombiePushGriditemActionHandler::PushInProgress::PushInProgress
          (PushInProgress *this,PushInProgress *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

