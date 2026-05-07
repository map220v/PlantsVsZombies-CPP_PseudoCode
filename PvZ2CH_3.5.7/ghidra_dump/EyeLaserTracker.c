// Class: EyeLaserTracker


/* EyeLaserTracker::GetBeamExtent() */

undefined4 __thiscall EyeLaserTracker::GetBeamExtent(EyeLaserTracker *this)

{
  return *(undefined4 *)(this + 0x34);
}


/* EyeLaserTracker::setState(EyeLaserState) */

void __thiscall EyeLaserTracker::setState(EyeLaserTracker *this,int param_2)

{
  if (*(int *)(this + 4) != param_2) {
    *(int *)(this + 4) = param_2;
    *(undefined4 *)this = 0;
    if (param_2 == 1) {
      this[8] = (EyeLaserTracker)0x0;
      *(undefined4 *)(this + 0x30) = 0;
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x24),(SexyVector3 *)(this + 0xc));
      return;
    }
  }
  return;
}


/* EyeLaserTracker::FiringInterrupted() */

void __thiscall EyeLaserTracker::FiringInterrupted(EyeLaserTracker *this)

{
  if (*(int *)(this + 4) == 0) {
    return;
  }
  this[8] = (EyeLaserTracker)0x1;
  setState(this,3);
  return;
}


/* EyeLaserTracker::IsActive() */

bool __thiscall EyeLaserTracker::IsActive(EyeLaserTracker *this)

{
  return *(int *)(this + 4) != 0;
}


/* EyeLaserTracker::IsSweeping() */

bool __thiscall EyeLaserTracker::IsSweeping(EyeLaserTracker *this)

{
  return *(int *)(this + 4) == 2;
}


/* EyeLaserTracker::~EyeLaserTracker() */

void __thiscall EyeLaserTracker::~EyeLaserTracker(EyeLaserTracker *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  return;
}


/* EyeLaserTracker::EyeLaserTracker() */

void __thiscall EyeLaserTracker::EyeLaserTracker(EyeLaserTracker *this)

{
  *(undefined4 *)(this + 4) = 0;
  this[8] = (EyeLaserTracker)0x0;
  *(undefined4 *)this = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0xc),0.0,0.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x18),0.0,0.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x24),0.0,0.0,0.0);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EyeLaserTracker::StartFiring(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void EyeLaserTracker::StartFiring(SexyVector3 *param_1,SexyVector3 *param_2)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  SexyVector3 *pSVar2;
  SexyVector3 *in_x2;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var1);
  local_18[0] = Sexy::SexyVector3::operator-(param_2,pSVar2);
  Sexy::SexyVector3::operator=(param_1 + 0xc,(SexyVector3 *)local_18);
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x40));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var1);
  local_18[0] = Sexy::SexyVector3::operator-(in_x2,pSVar2);
  Sexy::SexyVector3::operator=(param_1 + 0x18,(SexyVector3 *)local_18);
  setState((EyeLaserTracker *)param_1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EyeLaserTracker::GetCurrentFireLocationBoardSpace() */

void __thiscall EyeLaserTracker::GetCurrentFireLocationBoardSpace(EyeLaserTracker *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)(this + 0x24));
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04699100 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* EyeLaserTracker::Update(float) */

void __thiscall EyeLaserTracker::Update(EyeLaserTracker *this,float param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_register_00005004 [12];
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  fVar4 = *(float *)this;
  local_8 = ___stack_chk_guard;
  *(float *)this = param_1 + fVar4;
  if (this[8] != (EyeLaserTracker)0x0) {
    *(float *)this = param_1 + fVar4 + param_1;
  }
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 2) {
    uVar6 = *(undefined4 *)this;
    uVar5 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x34) = 0x447a0000;
    *(undefined4 *)(this + 0x30) = 0x447a0000;
    local_18 = CurveLerp(0,this + 0xc,this + 0x18,1);
    local_14 = uVar5;
    local_10 = uVar6;
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x24),(SexyVector3 *)&local_18);
    if (*(float *)(this + 0x3c) < *(float *)this) {
      setState(this,3);
    }
  }
  else if (iVar1 == 3) {
    local_18 = 0;
    auVar2._4_12_ = in_register_00005004;
    auVar2._0_4_ = param_1;
    fVar4 = CurveLerp<float>(auVar2,*(undefined4 *)(this + 0x38),*(undefined4 *)this,this + 0x30);
    *(float *)(this + 0x34) = fVar4;
    if (*(float *)(this + 0x38) < *(float *)this) {
      setState(this,0);
    }
  }
  else if (iVar1 == 1) {
    local_18 = 0;
    auVar3._4_12_ = in_register_00005004;
    auVar3._0_4_ = param_1;
    fVar4 = CurveLerp<float>(auVar3,*(undefined4 *)(this + 0x38),*(undefined4 *)this,&local_18,
                             &DAT_0575498c,2);
    *(float *)(this + 0x34) = fVar4;
    *(float *)(this + 0x30) = fVar4;
    if (*(float *)(this + 0x38) < *(float *)this) {
      setState(this,2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EyeLaserTracker::SetOwningZombie(Sexy::RtWeakPtr<Zombie>, float, float) */

void __thiscall
EyeLaserTracker::SetOwningZombie
          (undefined4 param_1,undefined4 param_2,EyeLaserTracker *this,RtWeakPtr *param_4)

{
  Zombie *this_00;
  ZombieGargantuarMechProps *pZVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),param_4);
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  pZVar1 = Zombie::GetProps<ZombieGargantuarMechProps>(this_00);
  if (pZVar1 != (ZombieGargantuarMechProps *)0x0) {
    param_1 = *(undefined4 *)(pZVar1 + 0x26c);
    param_2 = *(undefined4 *)(pZVar1 + 0x270);
  }
  *(undefined4 *)(this + 0x3c) = param_2;
  *(undefined4 *)(this + 0x38) = param_1;
  return;
}

